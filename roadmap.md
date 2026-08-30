                     C++ syntax
                         ↓
                 small programs
                         ↓
              medium C++ projects
                         ↓
              systems programming
                         ↓
              Linux internals
                         ↓
         multi-file C++ architecture
                         ↓
              concurrency / IPC
                         ↓
              build systems + tooling
                         ↓
                Nix fundamentals
                         ↓
              Nix source reading
                         ↓
                  first PR

# Stage 1 — 3,000–5,000 lines
variables - done
references - done 
pointers  -done
const  -done
functions -done
struct  -done
class -done 
constructors -done
- Move Constructor
destructors
RAII
inheritance
virtual functions
STL
iterators
algorithms
exceptions
namespaces
headers
source files
std::string
std::vector
std::array
std::map
std::unordered_map
std::set
std::optional
std::variant
std::unique_ptr
std::shared_ptr
std::move

## Project 1 — CLI utility file-search
recursive directory traversal
regex search
file filtering
multiple output modes
error handling
CLI arguments

# Stage 2 data structures + resource management properly
vector
hash table
linked list
tree
heap
LRU cache
allocation
construction
destruction
copy
move
iterators
exceptions

## Project 3 file-search
TCP socket
  ↓
accept connection
  ↓
parse HTTP request
  ↓
routing
  ↓
handler
  ↓
responseTCP socket
  ↓
accept connection
  ↓
parse HTTP request
  ↓
routing
  ↓
handler
  ↓
response

# Stage 4
##  Project 4 — Persistent key-value store
mystore set foo bar
mystore get foo
mystore delete foo
CLI
 ↓
database API
 ↓
in-memory index
 ↓
disk format
 ↓
file I/O

# Stage 5 — 25,000–32,000 lines
## Project 5 — Thread pool / job executor
worker threads
job queue
futures
shutdown
cancellation
synchronization

# Stage 6 — 32,000–40,000 lines
## Project 6 — Process supervisor systemd
supervise nginx
supervise worker

features:
spawn processes
restart on failure
capture stdout/stderr
environment variables
signals
timeouts
process states
logging
configuration file
