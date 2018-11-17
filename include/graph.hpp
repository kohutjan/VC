#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <list>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <utility>
#include <map>


class Graph
{
  public:
    Graph(){}
    bool Load(std::string graphFilePath);
    void LoadFromStream(std::ifstream &graphStream);
    void Print();
    std::list<std::list<int>> GetAdjacencyList() const { return adjacencyList; }
    std::map<int, size_t> GetDegrees() const { return degrees; }
    bool HaveEdges();
    std::vector<std::pair<int, int>> GetEdges();
    void CountDegrees();
    size_t GetDegree(int vertex);
    int GetNonZeroMinDegreeVertex();
    int GetNonZeroMaxDegreeVertex();
    int GetMinDegreeVertex();
    int GetMaxDegreeVertex();
    std::pair<int, int> GetMaxDegreeVertexImpl();
    std::list<int> GetAdjacents(int vertex);
    void RemoveVertices(std::list<int> verticesToRemove);
    void RemoveVertex(int vertexToRemove);
    ~Graph(){}
  private:
    std::string name;
    std::list<std::list<int>> adjacencyList;
    std::map<int, size_t> degrees;
};

#endif
