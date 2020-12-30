/******************************
  Program "result.m" compiled by "Caching Murphi Release 5.4.9.1"

  Murphi Last Compiled date: "Oct 20 2020"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9.1"
#define MURPHI_DATE "Oct 20 2020"
#define PROTOCOL_NAME "result"
#define BITS_IN_WORLD 94184
#define ALIGN
#define HASHC

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_indexType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_indexType& val) { return mu__byte::operator=((int) val); };
  mu_1_indexType (const char *name, int os): mu__byte(0, 100, 7, name, os) {};
  mu_1_indexType (void): mu__byte(0, 100, 7) {};
  mu_1_indexType (int val): mu__byte(0, 100, 7, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_indexType mu_1_indexType_undefined_var;

class mu_1_roleANums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleANums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleANums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleANums (void): mu__byte(1, 1, 1) {};
  mu_1_roleANums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleANums mu_1_roleANums_undefined_var;

class mu_1_roleBNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleBNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleBNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleBNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleBNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleBNums mu_1_roleBNums_undefined_var;

class mu_1_roleCNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleCNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleCNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleCNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleCNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleCNums mu_1_roleCNums_undefined_var;

class mu_1_roleDNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleDNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleDNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleDNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleDNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleDNums mu_1_roleDNums_undefined_var;

class mu_1_msgLen: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msgLen& val) { return mu__byte::operator=((int) val); };
  mu_1_msgLen (const char *name, int os): mu__byte(0, 5, 3, name, os) {};
  mu_1_msgLen (void): mu__byte(0, 5, 3) {};
  mu_1_msgLen (int val): mu__byte(0, 5, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_msgLen mu_1_msgLen_undefined_var;

class mu_1_chanNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chanNums& val) { return mu__byte::operator=((int) val); };
  mu_1_chanNums (const char *name, int os): mu__byte(0, 20, 5, name, os) {};
  mu_1_chanNums (void): mu__byte(0, 20, 5) {};
  mu_1_chanNums (int val): mu__byte(0, 20, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_chanNums mu_1_chanNums_undefined_var;

class mu_1_invokeNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_invokeNums& val) { return mu__byte::operator=((int) val); };
  mu_1_invokeNums (const char *name, int os): mu__byte(0, 10, 4, name, os) {};
  mu_1_invokeNums (void): mu__byte(0, 10, 4) {};
  mu_1_invokeNums (int val): mu__byte(0, 10, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_invokeNums mu_1_invokeNums_undefined_var;

class mu_1_AgentType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AgentType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AgentType& val)
  {
    if (val.defined())
      return ( s << mu_1_AgentType::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_AgentType (const char *name, int os): mu__byte(1, 6, 3, name, os) {};
  mu_1_AgentType (void): mu__byte(1, 6, 3) {};
  mu_1_AgentType (int val): mu__byte(1, 6, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AgentType::values[] = {"anyAgent","Intruder","UE","SEAF","AUSF","UDM",NULL };

/*** end of enum declaration ***/
mu_1_AgentType mu_1_AgentType_undefined_var;

class mu_1_NonceType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NonceType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NonceType& val)
  {
    if (val.defined())
      return ( s << mu_1_NonceType::values[ int(val) - 7] );
    else return ( s << "Undefined" );
  };

  mu_1_NonceType (const char *name, int os): mu__byte(7, 18, 4, name, os) {};
  mu_1_NonceType (void): mu__byte(7, 18, 4) {};
  mu_1_NonceType (int val): mu__byte(7, 18, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -7]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -7] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NonceType::values[] = {"anyNonce","supi","ue","ue1","prekey","certa","eapm","bn","ausf","sucm","certc","start",NULL };

/*** end of enum declaration ***/
mu_1_NonceType mu_1_NonceType_undefined_var;

class mu_1_ConstType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ConstType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ConstType& val)
  {
    if (val.defined())
      return ( s << mu_1_ConstType::values[ int(val) - 19] );
    else return ( s << "Undefined" );
  };

  mu_1_ConstType (const char *name, int os): mu__byte(19, 19, 1, name, os) {};
  mu_1_ConstType (void): mu__byte(19, 19, 1) {};
  mu_1_ConstType (int val): mu__byte(19, 19, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -19]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -19] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_ConstType::values[] = {"anyNumber",NULL };

/*** end of enum declaration ***/
mu_1_ConstType mu_1_ConstType_undefined_var;

class mu_1_MsgType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MsgType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MsgType& val)
  {
    if (val.defined())
      return ( s << mu_1_MsgType::values[ int(val) - 20] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(20, 31, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(20, 31, 4) {};
  mu_1_MsgType (int val): mu__byte(20, 31, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -20]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -20] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MsgType::values[] = {"null","agent","nonce","key","aenc","senc","concat","hash","tmp","mod","e","number",NULL };

/*** end of enum declaration ***/
mu_1_MsgType mu_1_MsgType_undefined_var;

class mu_1_EncryptType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_EncryptType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_EncryptType& val)
  {
    if (val.defined())
      return ( s << mu_1_EncryptType::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(32, 35, 3, name, os) {};
  mu_1_EncryptType (void): mu__byte(32, 35, 3) {};
  mu_1_EncryptType (int val): mu__byte(32, 35, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -32] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_EncryptType::values[] = {"PK","SK","Symk","MsgK",NULL };

/*** end of enum declaration ***/
mu_1_EncryptType mu_1_EncryptType_undefined_var;

class mu_1_KeyType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_EncryptType mu_encType;
  mu_1_AgentType mu_ag;
  mu_1_AgentType mu_ag1;
  mu_1_AgentType mu_ag2;
  mu_1_indexType mu_m;
  mu_1_KeyType ( const char *n, int os ) { set_self(n,os); };
  mu_1_KeyType ( void ) {};

  virtual ~mu_1_KeyType(); 
friend int CompareWeight(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = CompareWeight(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag1, b.mu_ag1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag2, b.mu_ag2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m, b.mu_m);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = Compare(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_ag1, b.mu_ag1);
    if (w!=0) return w;
    w = Compare(a.mu_ag2, b.mu_ag2);
    if (w!=0) return w;
    w = Compare(a.mu_m, b.mu_m);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_encType.MultisetSort();
    mu_ag.MultisetSort();
    mu_ag1.MultisetSort();
    mu_ag2.MultisetSort();
    mu_m.MultisetSort();
  }
  void print_statistic()
  {
    mu_encType.print_statistic();
    mu_ag.print_statistic();
    mu_ag1.print_statistic();
    mu_ag2.print_statistic();
    mu_m.print_statistic();
  }
  void clear() {
    mu_encType.clear();
    mu_ag.clear();
    mu_ag1.clear();
    mu_ag2.clear();
    mu_m.clear();
 };
  void undefine() {
    mu_encType.undefine();
    mu_ag.undefine();
    mu_ag1.undefine();
    mu_ag2.undefine();
    mu_m.undefine();
 };
  void reset() {
    mu_encType.reset();
    mu_ag.reset();
    mu_ag1.reset();
    mu_ag2.reset();
    mu_m.reset();
 };
  void print() {
    mu_encType.print();
    mu_ag.print();
    mu_ag1.print();
    mu_ag2.print();
    mu_m.print();
  };
  void print_diff(state *prevstate) {
    mu_encType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_ag1.print_diff(prevstate);
    mu_ag2.print_diff(prevstate);
    mu_m.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_encType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_ag1.to_state(thestate);
    mu_ag2.to_state(thestate);
    mu_m.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_KeyType& operator= (const mu_1_KeyType& from) {
    mu_encType.value(from.mu_encType.value());
    mu_ag.value(from.mu_ag.value());
    mu_ag1.value(from.mu_ag1.value());
    mu_ag2.value(from.mu_ag2.value());
    mu_m.value(from.mu_m.value());
    return *this;
  };
};

  void mu_1_KeyType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_KeyType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_KeyType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_encType.set_self_2(name, ".encType", os + 0 ); else mu_encType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_ag1.set_self_2(name, ".ag1", os + 16 ); else mu_ag1.set_self_2(NULL, NULL, 0);
  if (name) mu_ag2.set_self_2(name, ".ag2", os + 24 ); else mu_ag2.set_self_2(NULL, NULL, 0);
  if (name) mu_m.set_self_2(name, ".m", os + 32 ); else mu_m.set_self_2(NULL, NULL, 0);
}

mu_1_KeyType::~mu_1_KeyType()
{
}

/*** end record declaration ***/
mu_1_KeyType mu_1_KeyType_undefined_var;

class mu_1_AStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_AStatus::values[ int(val) - 36] );
    else return ( s << "Undefined" );
  };

  mu_1_AStatus (const char *name, int os): mu__byte(36, 43, 4, name, os) {};
  mu_1_AStatus (void): mu__byte(36, 43, 4) {};
  mu_1_AStatus (int val): mu__byte(36, 43, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -36]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -36] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AStatus::values[] = {"A1","A2","A3","A4","A5","A6","A7","A8",NULL };

/*** end of enum declaration ***/
mu_1_AStatus mu_1_AStatus_undefined_var;

class mu_1_BStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_BStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_BStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_BStatus::values[ int(val) - 44] );
    else return ( s << "Undefined" );
  };

  mu_1_BStatus (const char *name, int os): mu__byte(44, 59, 5, name, os) {};
  mu_1_BStatus (void): mu__byte(44, 59, 5) {};
  mu_1_BStatus (int val): mu__byte(44, 59, 5, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -44]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -44] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_BStatus::values[] = {"B1","B2","B3","B4","B5","B6","B7","B8","B9","B10","B11","B12","B13","B14","B15","B16",NULL };

/*** end of enum declaration ***/
mu_1_BStatus mu_1_BStatus_undefined_var;

class mu_1_CStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_CStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_CStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_CStatus::values[ int(val) - 60] );
    else return ( s << "Undefined" );
  };

  mu_1_CStatus (const char *name, int os): mu__byte(60, 69, 4, name, os) {};
  mu_1_CStatus (void): mu__byte(60, 69, 4) {};
  mu_1_CStatus (int val): mu__byte(60, 69, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -60]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -60] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_CStatus::values[] = {"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10",NULL };

/*** end of enum declaration ***/
mu_1_CStatus mu_1_CStatus_undefined_var;

class mu_1_DStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_DStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_DStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_DStatus::values[ int(val) - 70] );
    else return ( s << "Undefined" );
  };

  mu_1_DStatus (const char *name, int os): mu__byte(70, 71, 2, name, os) {};
  mu_1_DStatus (void): mu__byte(70, 71, 2) {};
  mu_1_DStatus (int val): mu__byte(70, 71, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -70]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -70] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_DStatus::values[] = {"D1","D2",NULL };

/*** end of enum declaration ***/
mu_1_DStatus mu_1_DStatus_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_indexType array[ 6 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 5 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 6; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 6; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 6; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MsgType mu_msgType;
  mu_1_AgentType mu_ag;
  mu_1_NonceType mu_noncePart;
  mu_1_ConstType mu_constPart;
  mu_1_indexType mu_tmpPart;
  mu_1_KeyType mu_k;
  mu_1_indexType mu_modMsg1;
  mu_1_indexType mu_modMsg2;
  mu_1_indexType mu_hashMsg;
  mu_1_indexType mu_hashKey;
  mu_1_indexType mu_expMsg1;
  mu_1_indexType mu_expMsg2;
  mu_1_indexType mu_aencMsg;
  mu_1_indexType mu_aencKey;
  mu_1_indexType mu_sencMsg;
  mu_1_indexType mu_sencKey;
  mu_1__type_0 mu_concatPart;
  mu_1_indexType mu_length;
  mu_1_Message ( const char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_constPart, b.mu_constPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_tmpPart, b.mu_tmpPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = CompareWeight(a.mu_modMsg1, b.mu_modMsg1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_modMsg2, b.mu_modMsg2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hashMsg, b.mu_hashMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hashKey, b.mu_hashKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_expMsg1, b.mu_expMsg1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_expMsg2, b.mu_expMsg2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart, b.mu_concatPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = Compare(a.mu_constPart, b.mu_constPart);
    if (w!=0) return w;
    w = Compare(a.mu_tmpPart, b.mu_tmpPart);
    if (w!=0) return w;
    w = Compare(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = Compare(a.mu_modMsg1, b.mu_modMsg1);
    if (w!=0) return w;
    w = Compare(a.mu_modMsg2, b.mu_modMsg2);
    if (w!=0) return w;
    w = Compare(a.mu_hashMsg, b.mu_hashMsg);
    if (w!=0) return w;
    w = Compare(a.mu_hashKey, b.mu_hashKey);
    if (w!=0) return w;
    w = Compare(a.mu_expMsg1, b.mu_expMsg1);
    if (w!=0) return w;
    w = Compare(a.mu_expMsg2, b.mu_expMsg2);
    if (w!=0) return w;
    w = Compare(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = Compare(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart, b.mu_concatPart);
    if (w!=0) return w;
    w = Compare(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msgType.MultisetSort();
    mu_ag.MultisetSort();
    mu_noncePart.MultisetSort();
    mu_constPart.MultisetSort();
    mu_tmpPart.MultisetSort();
    mu_k.MultisetSort();
    mu_modMsg1.MultisetSort();
    mu_modMsg2.MultisetSort();
    mu_hashMsg.MultisetSort();
    mu_hashKey.MultisetSort();
    mu_expMsg1.MultisetSort();
    mu_expMsg2.MultisetSort();
    mu_aencMsg.MultisetSort();
    mu_aencKey.MultisetSort();
    mu_sencMsg.MultisetSort();
    mu_sencKey.MultisetSort();
    mu_concatPart.MultisetSort();
    mu_length.MultisetSort();
  }
  void print_statistic()
  {
    mu_msgType.print_statistic();
    mu_ag.print_statistic();
    mu_noncePart.print_statistic();
    mu_constPart.print_statistic();
    mu_tmpPart.print_statistic();
    mu_k.print_statistic();
    mu_modMsg1.print_statistic();
    mu_modMsg2.print_statistic();
    mu_hashMsg.print_statistic();
    mu_hashKey.print_statistic();
    mu_expMsg1.print_statistic();
    mu_expMsg2.print_statistic();
    mu_aencMsg.print_statistic();
    mu_aencKey.print_statistic();
    mu_sencMsg.print_statistic();
    mu_sencKey.print_statistic();
    mu_concatPart.print_statistic();
    mu_length.print_statistic();
  }
  void clear() {
    mu_msgType.clear();
    mu_ag.clear();
    mu_noncePart.clear();
    mu_constPart.clear();
    mu_tmpPart.clear();
    mu_k.clear();
    mu_modMsg1.clear();
    mu_modMsg2.clear();
    mu_hashMsg.clear();
    mu_hashKey.clear();
    mu_expMsg1.clear();
    mu_expMsg2.clear();
    mu_aencMsg.clear();
    mu_aencKey.clear();
    mu_sencMsg.clear();
    mu_sencKey.clear();
    mu_concatPart.clear();
    mu_length.clear();
 };
  void undefine() {
    mu_msgType.undefine();
    mu_ag.undefine();
    mu_noncePart.undefine();
    mu_constPart.undefine();
    mu_tmpPart.undefine();
    mu_k.undefine();
    mu_modMsg1.undefine();
    mu_modMsg2.undefine();
    mu_hashMsg.undefine();
    mu_hashKey.undefine();
    mu_expMsg1.undefine();
    mu_expMsg2.undefine();
    mu_aencMsg.undefine();
    mu_aencKey.undefine();
    mu_sencMsg.undefine();
    mu_sencKey.undefine();
    mu_concatPart.undefine();
    mu_length.undefine();
 };
  void reset() {
    mu_msgType.reset();
    mu_ag.reset();
    mu_noncePart.reset();
    mu_constPart.reset();
    mu_tmpPart.reset();
    mu_k.reset();
    mu_modMsg1.reset();
    mu_modMsg2.reset();
    mu_hashMsg.reset();
    mu_hashKey.reset();
    mu_expMsg1.reset();
    mu_expMsg2.reset();
    mu_aencMsg.reset();
    mu_aencKey.reset();
    mu_sencMsg.reset();
    mu_sencKey.reset();
    mu_concatPart.reset();
    mu_length.reset();
 };
  void print() {
    mu_msgType.print();
    mu_ag.print();
    mu_noncePart.print();
    mu_constPart.print();
    mu_tmpPart.print();
    mu_k.print();
    mu_modMsg1.print();
    mu_modMsg2.print();
    mu_hashMsg.print();
    mu_hashKey.print();
    mu_expMsg1.print();
    mu_expMsg2.print();
    mu_aencMsg.print();
    mu_aencKey.print();
    mu_sencMsg.print();
    mu_sencKey.print();
    mu_concatPart.print();
    mu_length.print();
  };
  void print_diff(state *prevstate) {
    mu_msgType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_noncePart.print_diff(prevstate);
    mu_constPart.print_diff(prevstate);
    mu_tmpPart.print_diff(prevstate);
    mu_k.print_diff(prevstate);
    mu_modMsg1.print_diff(prevstate);
    mu_modMsg2.print_diff(prevstate);
    mu_hashMsg.print_diff(prevstate);
    mu_hashKey.print_diff(prevstate);
    mu_expMsg1.print_diff(prevstate);
    mu_expMsg2.print_diff(prevstate);
    mu_aencMsg.print_diff(prevstate);
    mu_aencKey.print_diff(prevstate);
    mu_sencMsg.print_diff(prevstate);
    mu_sencKey.print_diff(prevstate);
    mu_concatPart.print_diff(prevstate);
    mu_length.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msgType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_noncePart.to_state(thestate);
    mu_constPart.to_state(thestate);
    mu_tmpPart.to_state(thestate);
    mu_k.to_state(thestate);
    mu_modMsg1.to_state(thestate);
    mu_modMsg2.to_state(thestate);
    mu_hashMsg.to_state(thestate);
    mu_hashKey.to_state(thestate);
    mu_expMsg1.to_state(thestate);
    mu_expMsg2.to_state(thestate);
    mu_aencMsg.to_state(thestate);
    mu_aencKey.to_state(thestate);
    mu_sencMsg.to_state(thestate);
    mu_sencKey.to_state(thestate);
    mu_concatPart.to_state(thestate);
    mu_length.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_msgType.value(from.mu_msgType.value());
    mu_ag.value(from.mu_ag.value());
    mu_noncePart.value(from.mu_noncePart.value());
    mu_constPart.value(from.mu_constPart.value());
    mu_tmpPart.value(from.mu_tmpPart.value());
    mu_k = from.mu_k;
    mu_modMsg1.value(from.mu_modMsg1.value());
    mu_modMsg2.value(from.mu_modMsg2.value());
    mu_hashMsg.value(from.mu_hashMsg.value());
    mu_hashKey.value(from.mu_hashKey.value());
    mu_expMsg1.value(from.mu_expMsg1.value());
    mu_expMsg2.value(from.mu_expMsg2.value());
    mu_aencMsg.value(from.mu_aencMsg.value());
    mu_aencKey.value(from.mu_aencKey.value());
    mu_sencMsg.value(from.mu_sencMsg.value());
    mu_sencKey.value(from.mu_sencKey.value());
    mu_concatPart = from.mu_concatPart;
    mu_length.value(from.mu_length.value());
    return *this;
  };
};

  void mu_1_Message::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msgType.set_self_2(name, ".msgType", os + 0 ); else mu_msgType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_noncePart.set_self_2(name, ".noncePart", os + 16 ); else mu_noncePart.set_self_2(NULL, NULL, 0);
  if (name) mu_constPart.set_self_2(name, ".constPart", os + 24 ); else mu_constPart.set_self_2(NULL, NULL, 0);
  if (name) mu_tmpPart.set_self_2(name, ".tmpPart", os + 32 ); else mu_tmpPart.set_self_2(NULL, NULL, 0);
  if (name) mu_k.set_self_2(name, ".k", os + 40 ); else mu_k.set_self_2(NULL, NULL, 0);
  if (name) mu_modMsg1.set_self_2(name, ".modMsg1", os + 80 ); else mu_modMsg1.set_self_2(NULL, NULL, 0);
  if (name) mu_modMsg2.set_self_2(name, ".modMsg2", os + 88 ); else mu_modMsg2.set_self_2(NULL, NULL, 0);
  if (name) mu_hashMsg.set_self_2(name, ".hashMsg", os + 96 ); else mu_hashMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_hashKey.set_self_2(name, ".hashKey", os + 104 ); else mu_hashKey.set_self_2(NULL, NULL, 0);
  if (name) mu_expMsg1.set_self_2(name, ".expMsg1", os + 112 ); else mu_expMsg1.set_self_2(NULL, NULL, 0);
  if (name) mu_expMsg2.set_self_2(name, ".expMsg2", os + 120 ); else mu_expMsg2.set_self_2(NULL, NULL, 0);
  if (name) mu_aencMsg.set_self_2(name, ".aencMsg", os + 128 ); else mu_aencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_aencKey.set_self_2(name, ".aencKey", os + 136 ); else mu_aencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_sencMsg.set_self_2(name, ".sencMsg", os + 144 ); else mu_sencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_sencKey.set_self_2(name, ".sencKey", os + 152 ); else mu_sencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart.set_self_2(name, ".concatPart", os + 160 ); else mu_concatPart.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 208 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1_Channel
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_Message mu_msg;
  mu_1_AgentType mu_sender;
  mu_1_AgentType mu_receiver;
  mu_0_boolean mu_empty;
  mu_1_Channel ( const char *n, int os ) { set_self(n,os); };
  mu_1_Channel ( void ) {};

  virtual ~mu_1_Channel(); 
friend int CompareWeight(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = CompareWeight(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = CompareWeight(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = CompareWeight(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = Compare(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = Compare(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = Compare(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = Compare(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msg.MultisetSort();
    mu_sender.MultisetSort();
    mu_receiver.MultisetSort();
    mu_empty.MultisetSort();
  }
  void print_statistic()
  {
    mu_msg.print_statistic();
    mu_sender.print_statistic();
    mu_receiver.print_statistic();
    mu_empty.print_statistic();
  }
  void clear() {
    mu_msg.clear();
    mu_sender.clear();
    mu_receiver.clear();
    mu_empty.clear();
 };
  void undefine() {
    mu_msg.undefine();
    mu_sender.undefine();
    mu_receiver.undefine();
    mu_empty.undefine();
 };
  void reset() {
    mu_msg.reset();
    mu_sender.reset();
    mu_receiver.reset();
    mu_empty.reset();
 };
  void print() {
    mu_msg.print();
    mu_sender.print();
    mu_receiver.print();
    mu_empty.print();
  };
  void print_diff(state *prevstate) {
    mu_msg.print_diff(prevstate);
    mu_sender.print_diff(prevstate);
    mu_receiver.print_diff(prevstate);
    mu_empty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msg.to_state(thestate);
    mu_sender.to_state(thestate);
    mu_receiver.to_state(thestate);
    mu_empty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Channel& operator= (const mu_1_Channel& from) {
    mu_msg = from.mu_msg;
    mu_sender.value(from.mu_sender.value());
    mu_receiver.value(from.mu_receiver.value());
    mu_empty.value(from.mu_empty.value());
    return *this;
  };
};

  void mu_1_Channel::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Channel::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Channel::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msg.set_self_2(name, ".msg", os + 0 ); else mu_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_sender.set_self_2(name, ".sender", os + 216 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 224 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 232 ); else mu_empty.set_self_2(NULL, NULL, 0);
}

mu_1_Channel::~mu_1_Channel()
{
}

/*** end record declaration ***/
mu_1_Channel mu_1_Channel_undefined_var;

class mu_1_RoleA
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_supi;
  mu_1_NonceType mu_ue;
  mu_1_NonceType mu_ue1;
  mu_1_NonceType mu_prekey;
  mu_1_NonceType mu_certa;
  mu_1_NonceType mu_eapm;
  mu_1_NonceType mu_bn;
  mu_1_NonceType mu_ausf;
  mu_1_NonceType mu_sucm;
  mu_1_NonceType mu_certc;
  mu_1_NonceType mu_start;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_AgentType mu_C;
  mu_1_AgentType mu_D;
  mu_1_Message mu_x10;
  mu_1_Message mu_x1;
  mu_1_Message mu_x2;
  mu_1_Message mu_x3;
  mu_1_Message mu_x4;
  mu_1_Message mu_x5;
  mu_1_Message mu_x6;
  mu_1_Message mu_x7;
  mu_1_Message mu_x8;
  mu_1_Message mu_x9;
  mu_1_Message mu_m1;
  mu_1_NonceType mu_locsupi;
  mu_1_NonceType mu_locue;
  mu_1_NonceType mu_locue1;
  mu_1_NonceType mu_locprekey;
  mu_1_NonceType mu_loccerta;
  mu_1_NonceType mu_loceapm;
  mu_1_NonceType mu_locbn;
  mu_1_NonceType mu_locausf;
  mu_1_NonceType mu_locsucm;
  mu_1_NonceType mu_loccertc;
  mu_1_NonceType mu_locstart;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_AgentType mu_locC;
  mu_1_AgentType mu_locD;
  mu_1_Message mu_locx10;
  mu_1_Message mu_locx1;
  mu_1_Message mu_locx2;
  mu_1_Message mu_locx3;
  mu_1_Message mu_locx4;
  mu_1_Message mu_locx5;
  mu_1_Message mu_locx6;
  mu_1_Message mu_locx7;
  mu_1_Message mu_locx8;
  mu_1_Message mu_locx9;
  mu_1_Message mu_locm1;
  mu_1_AStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleA ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleA ( void ) {};

  virtual ~mu_1_RoleA(); 
friend int CompareWeight(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = CompareWeight(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = CompareWeight(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = Compare(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = Compare(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = Compare(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = Compare(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = Compare(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = Compare(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = Compare(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = Compare(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = Compare(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = Compare(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = Compare(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = Compare(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = Compare(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = Compare(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = Compare(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = Compare(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = Compare(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = Compare(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = Compare(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = Compare(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = Compare(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = Compare(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = Compare(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = Compare(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = Compare(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = Compare(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = Compare(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = Compare(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = Compare(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = Compare(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = Compare(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = Compare(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = Compare(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = Compare(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = Compare(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = Compare(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = Compare(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = Compare(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = Compare(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = Compare(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = Compare(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = Compare(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = Compare(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = Compare(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = Compare(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = Compare(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_supi.MultisetSort();
    mu_ue.MultisetSort();
    mu_ue1.MultisetSort();
    mu_prekey.MultisetSort();
    mu_certa.MultisetSort();
    mu_eapm.MultisetSort();
    mu_bn.MultisetSort();
    mu_ausf.MultisetSort();
    mu_sucm.MultisetSort();
    mu_certc.MultisetSort();
    mu_start.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_C.MultisetSort();
    mu_D.MultisetSort();
    mu_x10.MultisetSort();
    mu_x1.MultisetSort();
    mu_x2.MultisetSort();
    mu_x3.MultisetSort();
    mu_x4.MultisetSort();
    mu_x5.MultisetSort();
    mu_x6.MultisetSort();
    mu_x7.MultisetSort();
    mu_x8.MultisetSort();
    mu_x9.MultisetSort();
    mu_m1.MultisetSort();
    mu_locsupi.MultisetSort();
    mu_locue.MultisetSort();
    mu_locue1.MultisetSort();
    mu_locprekey.MultisetSort();
    mu_loccerta.MultisetSort();
    mu_loceapm.MultisetSort();
    mu_locbn.MultisetSort();
    mu_locausf.MultisetSort();
    mu_locsucm.MultisetSort();
    mu_loccertc.MultisetSort();
    mu_locstart.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_locC.MultisetSort();
    mu_locD.MultisetSort();
    mu_locx10.MultisetSort();
    mu_locx1.MultisetSort();
    mu_locx2.MultisetSort();
    mu_locx3.MultisetSort();
    mu_locx4.MultisetSort();
    mu_locx5.MultisetSort();
    mu_locx6.MultisetSort();
    mu_locx7.MultisetSort();
    mu_locx8.MultisetSort();
    mu_locx9.MultisetSort();
    mu_locm1.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_supi.print_statistic();
    mu_ue.print_statistic();
    mu_ue1.print_statistic();
    mu_prekey.print_statistic();
    mu_certa.print_statistic();
    mu_eapm.print_statistic();
    mu_bn.print_statistic();
    mu_ausf.print_statistic();
    mu_sucm.print_statistic();
    mu_certc.print_statistic();
    mu_start.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_C.print_statistic();
    mu_D.print_statistic();
    mu_x10.print_statistic();
    mu_x1.print_statistic();
    mu_x2.print_statistic();
    mu_x3.print_statistic();
    mu_x4.print_statistic();
    mu_x5.print_statistic();
    mu_x6.print_statistic();
    mu_x7.print_statistic();
    mu_x8.print_statistic();
    mu_x9.print_statistic();
    mu_m1.print_statistic();
    mu_locsupi.print_statistic();
    mu_locue.print_statistic();
    mu_locue1.print_statistic();
    mu_locprekey.print_statistic();
    mu_loccerta.print_statistic();
    mu_loceapm.print_statistic();
    mu_locbn.print_statistic();
    mu_locausf.print_statistic();
    mu_locsucm.print_statistic();
    mu_loccertc.print_statistic();
    mu_locstart.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_locC.print_statistic();
    mu_locD.print_statistic();
    mu_locx10.print_statistic();
    mu_locx1.print_statistic();
    mu_locx2.print_statistic();
    mu_locx3.print_statistic();
    mu_locx4.print_statistic();
    mu_locx5.print_statistic();
    mu_locx6.print_statistic();
    mu_locx7.print_statistic();
    mu_locx8.print_statistic();
    mu_locx9.print_statistic();
    mu_locm1.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_supi.clear();
    mu_ue.clear();
    mu_ue1.clear();
    mu_prekey.clear();
    mu_certa.clear();
    mu_eapm.clear();
    mu_bn.clear();
    mu_ausf.clear();
    mu_sucm.clear();
    mu_certc.clear();
    mu_start.clear();
    mu_A.clear();
    mu_B.clear();
    mu_C.clear();
    mu_D.clear();
    mu_x10.clear();
    mu_x1.clear();
    mu_x2.clear();
    mu_x3.clear();
    mu_x4.clear();
    mu_x5.clear();
    mu_x6.clear();
    mu_x7.clear();
    mu_x8.clear();
    mu_x9.clear();
    mu_m1.clear();
    mu_locsupi.clear();
    mu_locue.clear();
    mu_locue1.clear();
    mu_locprekey.clear();
    mu_loccerta.clear();
    mu_loceapm.clear();
    mu_locbn.clear();
    mu_locausf.clear();
    mu_locsucm.clear();
    mu_loccertc.clear();
    mu_locstart.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_locC.clear();
    mu_locD.clear();
    mu_locx10.clear();
    mu_locx1.clear();
    mu_locx2.clear();
    mu_locx3.clear();
    mu_locx4.clear();
    mu_locx5.clear();
    mu_locx6.clear();
    mu_locx7.clear();
    mu_locx8.clear();
    mu_locx9.clear();
    mu_locm1.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_supi.undefine();
    mu_ue.undefine();
    mu_ue1.undefine();
    mu_prekey.undefine();
    mu_certa.undefine();
    mu_eapm.undefine();
    mu_bn.undefine();
    mu_ausf.undefine();
    mu_sucm.undefine();
    mu_certc.undefine();
    mu_start.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_C.undefine();
    mu_D.undefine();
    mu_x10.undefine();
    mu_x1.undefine();
    mu_x2.undefine();
    mu_x3.undefine();
    mu_x4.undefine();
    mu_x5.undefine();
    mu_x6.undefine();
    mu_x7.undefine();
    mu_x8.undefine();
    mu_x9.undefine();
    mu_m1.undefine();
    mu_locsupi.undefine();
    mu_locue.undefine();
    mu_locue1.undefine();
    mu_locprekey.undefine();
    mu_loccerta.undefine();
    mu_loceapm.undefine();
    mu_locbn.undefine();
    mu_locausf.undefine();
    mu_locsucm.undefine();
    mu_loccertc.undefine();
    mu_locstart.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_locC.undefine();
    mu_locD.undefine();
    mu_locx10.undefine();
    mu_locx1.undefine();
    mu_locx2.undefine();
    mu_locx3.undefine();
    mu_locx4.undefine();
    mu_locx5.undefine();
    mu_locx6.undefine();
    mu_locx7.undefine();
    mu_locx8.undefine();
    mu_locx9.undefine();
    mu_locm1.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_supi.reset();
    mu_ue.reset();
    mu_ue1.reset();
    mu_prekey.reset();
    mu_certa.reset();
    mu_eapm.reset();
    mu_bn.reset();
    mu_ausf.reset();
    mu_sucm.reset();
    mu_certc.reset();
    mu_start.reset();
    mu_A.reset();
    mu_B.reset();
    mu_C.reset();
    mu_D.reset();
    mu_x10.reset();
    mu_x1.reset();
    mu_x2.reset();
    mu_x3.reset();
    mu_x4.reset();
    mu_x5.reset();
    mu_x6.reset();
    mu_x7.reset();
    mu_x8.reset();
    mu_x9.reset();
    mu_m1.reset();
    mu_locsupi.reset();
    mu_locue.reset();
    mu_locue1.reset();
    mu_locprekey.reset();
    mu_loccerta.reset();
    mu_loceapm.reset();
    mu_locbn.reset();
    mu_locausf.reset();
    mu_locsucm.reset();
    mu_loccertc.reset();
    mu_locstart.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_locC.reset();
    mu_locD.reset();
    mu_locx10.reset();
    mu_locx1.reset();
    mu_locx2.reset();
    mu_locx3.reset();
    mu_locx4.reset();
    mu_locx5.reset();
    mu_locx6.reset();
    mu_locx7.reset();
    mu_locx8.reset();
    mu_locx9.reset();
    mu_locm1.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_supi.print();
    mu_ue.print();
    mu_ue1.print();
    mu_prekey.print();
    mu_certa.print();
    mu_eapm.print();
    mu_bn.print();
    mu_ausf.print();
    mu_sucm.print();
    mu_certc.print();
    mu_start.print();
    mu_A.print();
    mu_B.print();
    mu_C.print();
    mu_D.print();
    mu_x10.print();
    mu_x1.print();
    mu_x2.print();
    mu_x3.print();
    mu_x4.print();
    mu_x5.print();
    mu_x6.print();
    mu_x7.print();
    mu_x8.print();
    mu_x9.print();
    mu_m1.print();
    mu_locsupi.print();
    mu_locue.print();
    mu_locue1.print();
    mu_locprekey.print();
    mu_loccerta.print();
    mu_loceapm.print();
    mu_locbn.print();
    mu_locausf.print();
    mu_locsucm.print();
    mu_loccertc.print();
    mu_locstart.print();
    mu_locA.print();
    mu_locB.print();
    mu_locC.print();
    mu_locD.print();
    mu_locx10.print();
    mu_locx1.print();
    mu_locx2.print();
    mu_locx3.print();
    mu_locx4.print();
    mu_locx5.print();
    mu_locx6.print();
    mu_locx7.print();
    mu_locx8.print();
    mu_locx9.print();
    mu_locm1.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_supi.print_diff(prevstate);
    mu_ue.print_diff(prevstate);
    mu_ue1.print_diff(prevstate);
    mu_prekey.print_diff(prevstate);
    mu_certa.print_diff(prevstate);
    mu_eapm.print_diff(prevstate);
    mu_bn.print_diff(prevstate);
    mu_ausf.print_diff(prevstate);
    mu_sucm.print_diff(prevstate);
    mu_certc.print_diff(prevstate);
    mu_start.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_C.print_diff(prevstate);
    mu_D.print_diff(prevstate);
    mu_x10.print_diff(prevstate);
    mu_x1.print_diff(prevstate);
    mu_x2.print_diff(prevstate);
    mu_x3.print_diff(prevstate);
    mu_x4.print_diff(prevstate);
    mu_x5.print_diff(prevstate);
    mu_x6.print_diff(prevstate);
    mu_x7.print_diff(prevstate);
    mu_x8.print_diff(prevstate);
    mu_x9.print_diff(prevstate);
    mu_m1.print_diff(prevstate);
    mu_locsupi.print_diff(prevstate);
    mu_locue.print_diff(prevstate);
    mu_locue1.print_diff(prevstate);
    mu_locprekey.print_diff(prevstate);
    mu_loccerta.print_diff(prevstate);
    mu_loceapm.print_diff(prevstate);
    mu_locbn.print_diff(prevstate);
    mu_locausf.print_diff(prevstate);
    mu_locsucm.print_diff(prevstate);
    mu_loccertc.print_diff(prevstate);
    mu_locstart.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_locC.print_diff(prevstate);
    mu_locD.print_diff(prevstate);
    mu_locx10.print_diff(prevstate);
    mu_locx1.print_diff(prevstate);
    mu_locx2.print_diff(prevstate);
    mu_locx3.print_diff(prevstate);
    mu_locx4.print_diff(prevstate);
    mu_locx5.print_diff(prevstate);
    mu_locx6.print_diff(prevstate);
    mu_locx7.print_diff(prevstate);
    mu_locx8.print_diff(prevstate);
    mu_locx9.print_diff(prevstate);
    mu_locm1.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_supi.to_state(thestate);
    mu_ue.to_state(thestate);
    mu_ue1.to_state(thestate);
    mu_prekey.to_state(thestate);
    mu_certa.to_state(thestate);
    mu_eapm.to_state(thestate);
    mu_bn.to_state(thestate);
    mu_ausf.to_state(thestate);
    mu_sucm.to_state(thestate);
    mu_certc.to_state(thestate);
    mu_start.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_C.to_state(thestate);
    mu_D.to_state(thestate);
    mu_x10.to_state(thestate);
    mu_x1.to_state(thestate);
    mu_x2.to_state(thestate);
    mu_x3.to_state(thestate);
    mu_x4.to_state(thestate);
    mu_x5.to_state(thestate);
    mu_x6.to_state(thestate);
    mu_x7.to_state(thestate);
    mu_x8.to_state(thestate);
    mu_x9.to_state(thestate);
    mu_m1.to_state(thestate);
    mu_locsupi.to_state(thestate);
    mu_locue.to_state(thestate);
    mu_locue1.to_state(thestate);
    mu_locprekey.to_state(thestate);
    mu_loccerta.to_state(thestate);
    mu_loceapm.to_state(thestate);
    mu_locbn.to_state(thestate);
    mu_locausf.to_state(thestate);
    mu_locsucm.to_state(thestate);
    mu_loccertc.to_state(thestate);
    mu_locstart.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_locC.to_state(thestate);
    mu_locD.to_state(thestate);
    mu_locx10.to_state(thestate);
    mu_locx1.to_state(thestate);
    mu_locx2.to_state(thestate);
    mu_locx3.to_state(thestate);
    mu_locx4.to_state(thestate);
    mu_locx5.to_state(thestate);
    mu_locx6.to_state(thestate);
    mu_locx7.to_state(thestate);
    mu_locx8.to_state(thestate);
    mu_locx9.to_state(thestate);
    mu_locm1.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleA& operator= (const mu_1_RoleA& from) {
    mu_supi.value(from.mu_supi.value());
    mu_ue.value(from.mu_ue.value());
    mu_ue1.value(from.mu_ue1.value());
    mu_prekey.value(from.mu_prekey.value());
    mu_certa.value(from.mu_certa.value());
    mu_eapm.value(from.mu_eapm.value());
    mu_bn.value(from.mu_bn.value());
    mu_ausf.value(from.mu_ausf.value());
    mu_sucm.value(from.mu_sucm.value());
    mu_certc.value(from.mu_certc.value());
    mu_start.value(from.mu_start.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_C.value(from.mu_C.value());
    mu_D.value(from.mu_D.value());
    mu_x10 = from.mu_x10;
    mu_x1 = from.mu_x1;
    mu_x2 = from.mu_x2;
    mu_x3 = from.mu_x3;
    mu_x4 = from.mu_x4;
    mu_x5 = from.mu_x5;
    mu_x6 = from.mu_x6;
    mu_x7 = from.mu_x7;
    mu_x8 = from.mu_x8;
    mu_x9 = from.mu_x9;
    mu_m1 = from.mu_m1;
    mu_locsupi.value(from.mu_locsupi.value());
    mu_locue.value(from.mu_locue.value());
    mu_locue1.value(from.mu_locue1.value());
    mu_locprekey.value(from.mu_locprekey.value());
    mu_loccerta.value(from.mu_loccerta.value());
    mu_loceapm.value(from.mu_loceapm.value());
    mu_locbn.value(from.mu_locbn.value());
    mu_locausf.value(from.mu_locausf.value());
    mu_locsucm.value(from.mu_locsucm.value());
    mu_loccertc.value(from.mu_loccertc.value());
    mu_locstart.value(from.mu_locstart.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_locC.value(from.mu_locC.value());
    mu_locD.value(from.mu_locD.value());
    mu_locx10 = from.mu_locx10;
    mu_locx1 = from.mu_locx1;
    mu_locx2 = from.mu_locx2;
    mu_locx3 = from.mu_locx3;
    mu_locx4 = from.mu_locx4;
    mu_locx5 = from.mu_locx5;
    mu_locx6 = from.mu_locx6;
    mu_locx7 = from.mu_locx7;
    mu_locx8 = from.mu_locx8;
    mu_locx9 = from.mu_locx9;
    mu_locm1 = from.mu_locm1;
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleA::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleA::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleA::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_supi.set_self_2(name, ".supi", os + 0 ); else mu_supi.set_self_2(NULL, NULL, 0);
  if (name) mu_ue.set_self_2(name, ".ue", os + 8 ); else mu_ue.set_self_2(NULL, NULL, 0);
  if (name) mu_ue1.set_self_2(name, ".ue1", os + 16 ); else mu_ue1.set_self_2(NULL, NULL, 0);
  if (name) mu_prekey.set_self_2(name, ".prekey", os + 24 ); else mu_prekey.set_self_2(NULL, NULL, 0);
  if (name) mu_certa.set_self_2(name, ".certa", os + 32 ); else mu_certa.set_self_2(NULL, NULL, 0);
  if (name) mu_eapm.set_self_2(name, ".eapm", os + 40 ); else mu_eapm.set_self_2(NULL, NULL, 0);
  if (name) mu_bn.set_self_2(name, ".bn", os + 48 ); else mu_bn.set_self_2(NULL, NULL, 0);
  if (name) mu_ausf.set_self_2(name, ".ausf", os + 56 ); else mu_ausf.set_self_2(NULL, NULL, 0);
  if (name) mu_sucm.set_self_2(name, ".sucm", os + 64 ); else mu_sucm.set_self_2(NULL, NULL, 0);
  if (name) mu_certc.set_self_2(name, ".certc", os + 72 ); else mu_certc.set_self_2(NULL, NULL, 0);
  if (name) mu_start.set_self_2(name, ".start", os + 80 ); else mu_start.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 88 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 96 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_C.set_self_2(name, ".C", os + 104 ); else mu_C.set_self_2(NULL, NULL, 0);
  if (name) mu_D.set_self_2(name, ".D", os + 112 ); else mu_D.set_self_2(NULL, NULL, 0);
  if (name) mu_x10.set_self_2(name, ".x10", os + 120 ); else mu_x10.set_self_2(NULL, NULL, 0);
  if (name) mu_x1.set_self_2(name, ".x1", os + 336 ); else mu_x1.set_self_2(NULL, NULL, 0);
  if (name) mu_x2.set_self_2(name, ".x2", os + 552 ); else mu_x2.set_self_2(NULL, NULL, 0);
  if (name) mu_x3.set_self_2(name, ".x3", os + 768 ); else mu_x3.set_self_2(NULL, NULL, 0);
  if (name) mu_x4.set_self_2(name, ".x4", os + 984 ); else mu_x4.set_self_2(NULL, NULL, 0);
  if (name) mu_x5.set_self_2(name, ".x5", os + 1200 ); else mu_x5.set_self_2(NULL, NULL, 0);
  if (name) mu_x6.set_self_2(name, ".x6", os + 1416 ); else mu_x6.set_self_2(NULL, NULL, 0);
  if (name) mu_x7.set_self_2(name, ".x7", os + 1632 ); else mu_x7.set_self_2(NULL, NULL, 0);
  if (name) mu_x8.set_self_2(name, ".x8", os + 1848 ); else mu_x8.set_self_2(NULL, NULL, 0);
  if (name) mu_x9.set_self_2(name, ".x9", os + 2064 ); else mu_x9.set_self_2(NULL, NULL, 0);
  if (name) mu_m1.set_self_2(name, ".m1", os + 2280 ); else mu_m1.set_self_2(NULL, NULL, 0);
  if (name) mu_locsupi.set_self_2(name, ".locsupi", os + 2496 ); else mu_locsupi.set_self_2(NULL, NULL, 0);
  if (name) mu_locue.set_self_2(name, ".locue", os + 2504 ); else mu_locue.set_self_2(NULL, NULL, 0);
  if (name) mu_locue1.set_self_2(name, ".locue1", os + 2512 ); else mu_locue1.set_self_2(NULL, NULL, 0);
  if (name) mu_locprekey.set_self_2(name, ".locprekey", os + 2520 ); else mu_locprekey.set_self_2(NULL, NULL, 0);
  if (name) mu_loccerta.set_self_2(name, ".loccerta", os + 2528 ); else mu_loccerta.set_self_2(NULL, NULL, 0);
  if (name) mu_loceapm.set_self_2(name, ".loceapm", os + 2536 ); else mu_loceapm.set_self_2(NULL, NULL, 0);
  if (name) mu_locbn.set_self_2(name, ".locbn", os + 2544 ); else mu_locbn.set_self_2(NULL, NULL, 0);
  if (name) mu_locausf.set_self_2(name, ".locausf", os + 2552 ); else mu_locausf.set_self_2(NULL, NULL, 0);
  if (name) mu_locsucm.set_self_2(name, ".locsucm", os + 2560 ); else mu_locsucm.set_self_2(NULL, NULL, 0);
  if (name) mu_loccertc.set_self_2(name, ".loccertc", os + 2568 ); else mu_loccertc.set_self_2(NULL, NULL, 0);
  if (name) mu_locstart.set_self_2(name, ".locstart", os + 2576 ); else mu_locstart.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 2584 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 2592 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_locC.set_self_2(name, ".locC", os + 2600 ); else mu_locC.set_self_2(NULL, NULL, 0);
  if (name) mu_locD.set_self_2(name, ".locD", os + 2608 ); else mu_locD.set_self_2(NULL, NULL, 0);
  if (name) mu_locx10.set_self_2(name, ".locx10", os + 2616 ); else mu_locx10.set_self_2(NULL, NULL, 0);
  if (name) mu_locx1.set_self_2(name, ".locx1", os + 2832 ); else mu_locx1.set_self_2(NULL, NULL, 0);
  if (name) mu_locx2.set_self_2(name, ".locx2", os + 3048 ); else mu_locx2.set_self_2(NULL, NULL, 0);
  if (name) mu_locx3.set_self_2(name, ".locx3", os + 3264 ); else mu_locx3.set_self_2(NULL, NULL, 0);
  if (name) mu_locx4.set_self_2(name, ".locx4", os + 3480 ); else mu_locx4.set_self_2(NULL, NULL, 0);
  if (name) mu_locx5.set_self_2(name, ".locx5", os + 3696 ); else mu_locx5.set_self_2(NULL, NULL, 0);
  if (name) mu_locx6.set_self_2(name, ".locx6", os + 3912 ); else mu_locx6.set_self_2(NULL, NULL, 0);
  if (name) mu_locx7.set_self_2(name, ".locx7", os + 4128 ); else mu_locx7.set_self_2(NULL, NULL, 0);
  if (name) mu_locx8.set_self_2(name, ".locx8", os + 4344 ); else mu_locx8.set_self_2(NULL, NULL, 0);
  if (name) mu_locx9.set_self_2(name, ".locx9", os + 4560 ); else mu_locx9.set_self_2(NULL, NULL, 0);
  if (name) mu_locm1.set_self_2(name, ".locm1", os + 4776 ); else mu_locm1.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 4992 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 5000 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleA::~mu_1_RoleA()
{
}

/*** end record declaration ***/
mu_1_RoleA mu_1_RoleA_undefined_var;

class mu_1_RoleB
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_supi;
  mu_1_NonceType mu_ue;
  mu_1_NonceType mu_ue1;
  mu_1_NonceType mu_prekey;
  mu_1_NonceType mu_certa;
  mu_1_NonceType mu_eapm;
  mu_1_NonceType mu_bn;
  mu_1_NonceType mu_ausf;
  mu_1_NonceType mu_sucm;
  mu_1_NonceType mu_certc;
  mu_1_NonceType mu_start;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_AgentType mu_C;
  mu_1_AgentType mu_D;
  mu_1_Message mu_x10;
  mu_1_Message mu_x1;
  mu_1_Message mu_x2;
  mu_1_Message mu_x3;
  mu_1_Message mu_x4;
  mu_1_Message mu_x5;
  mu_1_Message mu_x6;
  mu_1_Message mu_x7;
  mu_1_Message mu_x8;
  mu_1_Message mu_x9;
  mu_1_Message mu_m1;
  mu_1_NonceType mu_locsupi;
  mu_1_NonceType mu_locue;
  mu_1_NonceType mu_locue1;
  mu_1_NonceType mu_locprekey;
  mu_1_NonceType mu_loccerta;
  mu_1_NonceType mu_loceapm;
  mu_1_NonceType mu_locbn;
  mu_1_NonceType mu_locausf;
  mu_1_NonceType mu_locsucm;
  mu_1_NonceType mu_loccertc;
  mu_1_NonceType mu_locstart;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_AgentType mu_locC;
  mu_1_AgentType mu_locD;
  mu_1_Message mu_locx10;
  mu_1_Message mu_locx1;
  mu_1_Message mu_locx2;
  mu_1_Message mu_locx3;
  mu_1_Message mu_locx4;
  mu_1_Message mu_locx5;
  mu_1_Message mu_locx6;
  mu_1_Message mu_locx7;
  mu_1_Message mu_locx8;
  mu_1_Message mu_locx9;
  mu_1_Message mu_locm1;
  mu_1_BStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleB ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleB ( void ) {};

  virtual ~mu_1_RoleB(); 
friend int CompareWeight(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = CompareWeight(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = CompareWeight(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = Compare(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = Compare(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = Compare(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = Compare(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = Compare(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = Compare(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = Compare(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = Compare(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = Compare(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = Compare(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = Compare(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = Compare(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = Compare(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = Compare(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = Compare(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = Compare(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = Compare(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = Compare(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = Compare(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = Compare(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = Compare(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = Compare(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = Compare(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = Compare(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = Compare(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = Compare(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = Compare(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = Compare(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = Compare(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = Compare(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = Compare(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = Compare(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = Compare(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = Compare(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = Compare(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = Compare(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = Compare(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = Compare(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = Compare(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = Compare(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = Compare(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = Compare(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = Compare(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = Compare(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = Compare(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = Compare(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_supi.MultisetSort();
    mu_ue.MultisetSort();
    mu_ue1.MultisetSort();
    mu_prekey.MultisetSort();
    mu_certa.MultisetSort();
    mu_eapm.MultisetSort();
    mu_bn.MultisetSort();
    mu_ausf.MultisetSort();
    mu_sucm.MultisetSort();
    mu_certc.MultisetSort();
    mu_start.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_C.MultisetSort();
    mu_D.MultisetSort();
    mu_x10.MultisetSort();
    mu_x1.MultisetSort();
    mu_x2.MultisetSort();
    mu_x3.MultisetSort();
    mu_x4.MultisetSort();
    mu_x5.MultisetSort();
    mu_x6.MultisetSort();
    mu_x7.MultisetSort();
    mu_x8.MultisetSort();
    mu_x9.MultisetSort();
    mu_m1.MultisetSort();
    mu_locsupi.MultisetSort();
    mu_locue.MultisetSort();
    mu_locue1.MultisetSort();
    mu_locprekey.MultisetSort();
    mu_loccerta.MultisetSort();
    mu_loceapm.MultisetSort();
    mu_locbn.MultisetSort();
    mu_locausf.MultisetSort();
    mu_locsucm.MultisetSort();
    mu_loccertc.MultisetSort();
    mu_locstart.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_locC.MultisetSort();
    mu_locD.MultisetSort();
    mu_locx10.MultisetSort();
    mu_locx1.MultisetSort();
    mu_locx2.MultisetSort();
    mu_locx3.MultisetSort();
    mu_locx4.MultisetSort();
    mu_locx5.MultisetSort();
    mu_locx6.MultisetSort();
    mu_locx7.MultisetSort();
    mu_locx8.MultisetSort();
    mu_locx9.MultisetSort();
    mu_locm1.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_supi.print_statistic();
    mu_ue.print_statistic();
    mu_ue1.print_statistic();
    mu_prekey.print_statistic();
    mu_certa.print_statistic();
    mu_eapm.print_statistic();
    mu_bn.print_statistic();
    mu_ausf.print_statistic();
    mu_sucm.print_statistic();
    mu_certc.print_statistic();
    mu_start.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_C.print_statistic();
    mu_D.print_statistic();
    mu_x10.print_statistic();
    mu_x1.print_statistic();
    mu_x2.print_statistic();
    mu_x3.print_statistic();
    mu_x4.print_statistic();
    mu_x5.print_statistic();
    mu_x6.print_statistic();
    mu_x7.print_statistic();
    mu_x8.print_statistic();
    mu_x9.print_statistic();
    mu_m1.print_statistic();
    mu_locsupi.print_statistic();
    mu_locue.print_statistic();
    mu_locue1.print_statistic();
    mu_locprekey.print_statistic();
    mu_loccerta.print_statistic();
    mu_loceapm.print_statistic();
    mu_locbn.print_statistic();
    mu_locausf.print_statistic();
    mu_locsucm.print_statistic();
    mu_loccertc.print_statistic();
    mu_locstart.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_locC.print_statistic();
    mu_locD.print_statistic();
    mu_locx10.print_statistic();
    mu_locx1.print_statistic();
    mu_locx2.print_statistic();
    mu_locx3.print_statistic();
    mu_locx4.print_statistic();
    mu_locx5.print_statistic();
    mu_locx6.print_statistic();
    mu_locx7.print_statistic();
    mu_locx8.print_statistic();
    mu_locx9.print_statistic();
    mu_locm1.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_supi.clear();
    mu_ue.clear();
    mu_ue1.clear();
    mu_prekey.clear();
    mu_certa.clear();
    mu_eapm.clear();
    mu_bn.clear();
    mu_ausf.clear();
    mu_sucm.clear();
    mu_certc.clear();
    mu_start.clear();
    mu_A.clear();
    mu_B.clear();
    mu_C.clear();
    mu_D.clear();
    mu_x10.clear();
    mu_x1.clear();
    mu_x2.clear();
    mu_x3.clear();
    mu_x4.clear();
    mu_x5.clear();
    mu_x6.clear();
    mu_x7.clear();
    mu_x8.clear();
    mu_x9.clear();
    mu_m1.clear();
    mu_locsupi.clear();
    mu_locue.clear();
    mu_locue1.clear();
    mu_locprekey.clear();
    mu_loccerta.clear();
    mu_loceapm.clear();
    mu_locbn.clear();
    mu_locausf.clear();
    mu_locsucm.clear();
    mu_loccertc.clear();
    mu_locstart.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_locC.clear();
    mu_locD.clear();
    mu_locx10.clear();
    mu_locx1.clear();
    mu_locx2.clear();
    mu_locx3.clear();
    mu_locx4.clear();
    mu_locx5.clear();
    mu_locx6.clear();
    mu_locx7.clear();
    mu_locx8.clear();
    mu_locx9.clear();
    mu_locm1.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_supi.undefine();
    mu_ue.undefine();
    mu_ue1.undefine();
    mu_prekey.undefine();
    mu_certa.undefine();
    mu_eapm.undefine();
    mu_bn.undefine();
    mu_ausf.undefine();
    mu_sucm.undefine();
    mu_certc.undefine();
    mu_start.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_C.undefine();
    mu_D.undefine();
    mu_x10.undefine();
    mu_x1.undefine();
    mu_x2.undefine();
    mu_x3.undefine();
    mu_x4.undefine();
    mu_x5.undefine();
    mu_x6.undefine();
    mu_x7.undefine();
    mu_x8.undefine();
    mu_x9.undefine();
    mu_m1.undefine();
    mu_locsupi.undefine();
    mu_locue.undefine();
    mu_locue1.undefine();
    mu_locprekey.undefine();
    mu_loccerta.undefine();
    mu_loceapm.undefine();
    mu_locbn.undefine();
    mu_locausf.undefine();
    mu_locsucm.undefine();
    mu_loccertc.undefine();
    mu_locstart.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_locC.undefine();
    mu_locD.undefine();
    mu_locx10.undefine();
    mu_locx1.undefine();
    mu_locx2.undefine();
    mu_locx3.undefine();
    mu_locx4.undefine();
    mu_locx5.undefine();
    mu_locx6.undefine();
    mu_locx7.undefine();
    mu_locx8.undefine();
    mu_locx9.undefine();
    mu_locm1.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_supi.reset();
    mu_ue.reset();
    mu_ue1.reset();
    mu_prekey.reset();
    mu_certa.reset();
    mu_eapm.reset();
    mu_bn.reset();
    mu_ausf.reset();
    mu_sucm.reset();
    mu_certc.reset();
    mu_start.reset();
    mu_A.reset();
    mu_B.reset();
    mu_C.reset();
    mu_D.reset();
    mu_x10.reset();
    mu_x1.reset();
    mu_x2.reset();
    mu_x3.reset();
    mu_x4.reset();
    mu_x5.reset();
    mu_x6.reset();
    mu_x7.reset();
    mu_x8.reset();
    mu_x9.reset();
    mu_m1.reset();
    mu_locsupi.reset();
    mu_locue.reset();
    mu_locue1.reset();
    mu_locprekey.reset();
    mu_loccerta.reset();
    mu_loceapm.reset();
    mu_locbn.reset();
    mu_locausf.reset();
    mu_locsucm.reset();
    mu_loccertc.reset();
    mu_locstart.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_locC.reset();
    mu_locD.reset();
    mu_locx10.reset();
    mu_locx1.reset();
    mu_locx2.reset();
    mu_locx3.reset();
    mu_locx4.reset();
    mu_locx5.reset();
    mu_locx6.reset();
    mu_locx7.reset();
    mu_locx8.reset();
    mu_locx9.reset();
    mu_locm1.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_supi.print();
    mu_ue.print();
    mu_ue1.print();
    mu_prekey.print();
    mu_certa.print();
    mu_eapm.print();
    mu_bn.print();
    mu_ausf.print();
    mu_sucm.print();
    mu_certc.print();
    mu_start.print();
    mu_A.print();
    mu_B.print();
    mu_C.print();
    mu_D.print();
    mu_x10.print();
    mu_x1.print();
    mu_x2.print();
    mu_x3.print();
    mu_x4.print();
    mu_x5.print();
    mu_x6.print();
    mu_x7.print();
    mu_x8.print();
    mu_x9.print();
    mu_m1.print();
    mu_locsupi.print();
    mu_locue.print();
    mu_locue1.print();
    mu_locprekey.print();
    mu_loccerta.print();
    mu_loceapm.print();
    mu_locbn.print();
    mu_locausf.print();
    mu_locsucm.print();
    mu_loccertc.print();
    mu_locstart.print();
    mu_locA.print();
    mu_locB.print();
    mu_locC.print();
    mu_locD.print();
    mu_locx10.print();
    mu_locx1.print();
    mu_locx2.print();
    mu_locx3.print();
    mu_locx4.print();
    mu_locx5.print();
    mu_locx6.print();
    mu_locx7.print();
    mu_locx8.print();
    mu_locx9.print();
    mu_locm1.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_supi.print_diff(prevstate);
    mu_ue.print_diff(prevstate);
    mu_ue1.print_diff(prevstate);
    mu_prekey.print_diff(prevstate);
    mu_certa.print_diff(prevstate);
    mu_eapm.print_diff(prevstate);
    mu_bn.print_diff(prevstate);
    mu_ausf.print_diff(prevstate);
    mu_sucm.print_diff(prevstate);
    mu_certc.print_diff(prevstate);
    mu_start.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_C.print_diff(prevstate);
    mu_D.print_diff(prevstate);
    mu_x10.print_diff(prevstate);
    mu_x1.print_diff(prevstate);
    mu_x2.print_diff(prevstate);
    mu_x3.print_diff(prevstate);
    mu_x4.print_diff(prevstate);
    mu_x5.print_diff(prevstate);
    mu_x6.print_diff(prevstate);
    mu_x7.print_diff(prevstate);
    mu_x8.print_diff(prevstate);
    mu_x9.print_diff(prevstate);
    mu_m1.print_diff(prevstate);
    mu_locsupi.print_diff(prevstate);
    mu_locue.print_diff(prevstate);
    mu_locue1.print_diff(prevstate);
    mu_locprekey.print_diff(prevstate);
    mu_loccerta.print_diff(prevstate);
    mu_loceapm.print_diff(prevstate);
    mu_locbn.print_diff(prevstate);
    mu_locausf.print_diff(prevstate);
    mu_locsucm.print_diff(prevstate);
    mu_loccertc.print_diff(prevstate);
    mu_locstart.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_locC.print_diff(prevstate);
    mu_locD.print_diff(prevstate);
    mu_locx10.print_diff(prevstate);
    mu_locx1.print_diff(prevstate);
    mu_locx2.print_diff(prevstate);
    mu_locx3.print_diff(prevstate);
    mu_locx4.print_diff(prevstate);
    mu_locx5.print_diff(prevstate);
    mu_locx6.print_diff(prevstate);
    mu_locx7.print_diff(prevstate);
    mu_locx8.print_diff(prevstate);
    mu_locx9.print_diff(prevstate);
    mu_locm1.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_supi.to_state(thestate);
    mu_ue.to_state(thestate);
    mu_ue1.to_state(thestate);
    mu_prekey.to_state(thestate);
    mu_certa.to_state(thestate);
    mu_eapm.to_state(thestate);
    mu_bn.to_state(thestate);
    mu_ausf.to_state(thestate);
    mu_sucm.to_state(thestate);
    mu_certc.to_state(thestate);
    mu_start.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_C.to_state(thestate);
    mu_D.to_state(thestate);
    mu_x10.to_state(thestate);
    mu_x1.to_state(thestate);
    mu_x2.to_state(thestate);
    mu_x3.to_state(thestate);
    mu_x4.to_state(thestate);
    mu_x5.to_state(thestate);
    mu_x6.to_state(thestate);
    mu_x7.to_state(thestate);
    mu_x8.to_state(thestate);
    mu_x9.to_state(thestate);
    mu_m1.to_state(thestate);
    mu_locsupi.to_state(thestate);
    mu_locue.to_state(thestate);
    mu_locue1.to_state(thestate);
    mu_locprekey.to_state(thestate);
    mu_loccerta.to_state(thestate);
    mu_loceapm.to_state(thestate);
    mu_locbn.to_state(thestate);
    mu_locausf.to_state(thestate);
    mu_locsucm.to_state(thestate);
    mu_loccertc.to_state(thestate);
    mu_locstart.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_locC.to_state(thestate);
    mu_locD.to_state(thestate);
    mu_locx10.to_state(thestate);
    mu_locx1.to_state(thestate);
    mu_locx2.to_state(thestate);
    mu_locx3.to_state(thestate);
    mu_locx4.to_state(thestate);
    mu_locx5.to_state(thestate);
    mu_locx6.to_state(thestate);
    mu_locx7.to_state(thestate);
    mu_locx8.to_state(thestate);
    mu_locx9.to_state(thestate);
    mu_locm1.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleB& operator= (const mu_1_RoleB& from) {
    mu_supi.value(from.mu_supi.value());
    mu_ue.value(from.mu_ue.value());
    mu_ue1.value(from.mu_ue1.value());
    mu_prekey.value(from.mu_prekey.value());
    mu_certa.value(from.mu_certa.value());
    mu_eapm.value(from.mu_eapm.value());
    mu_bn.value(from.mu_bn.value());
    mu_ausf.value(from.mu_ausf.value());
    mu_sucm.value(from.mu_sucm.value());
    mu_certc.value(from.mu_certc.value());
    mu_start.value(from.mu_start.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_C.value(from.mu_C.value());
    mu_D.value(from.mu_D.value());
    mu_x10 = from.mu_x10;
    mu_x1 = from.mu_x1;
    mu_x2 = from.mu_x2;
    mu_x3 = from.mu_x3;
    mu_x4 = from.mu_x4;
    mu_x5 = from.mu_x5;
    mu_x6 = from.mu_x6;
    mu_x7 = from.mu_x7;
    mu_x8 = from.mu_x8;
    mu_x9 = from.mu_x9;
    mu_m1 = from.mu_m1;
    mu_locsupi.value(from.mu_locsupi.value());
    mu_locue.value(from.mu_locue.value());
    mu_locue1.value(from.mu_locue1.value());
    mu_locprekey.value(from.mu_locprekey.value());
    mu_loccerta.value(from.mu_loccerta.value());
    mu_loceapm.value(from.mu_loceapm.value());
    mu_locbn.value(from.mu_locbn.value());
    mu_locausf.value(from.mu_locausf.value());
    mu_locsucm.value(from.mu_locsucm.value());
    mu_loccertc.value(from.mu_loccertc.value());
    mu_locstart.value(from.mu_locstart.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_locC.value(from.mu_locC.value());
    mu_locD.value(from.mu_locD.value());
    mu_locx10 = from.mu_locx10;
    mu_locx1 = from.mu_locx1;
    mu_locx2 = from.mu_locx2;
    mu_locx3 = from.mu_locx3;
    mu_locx4 = from.mu_locx4;
    mu_locx5 = from.mu_locx5;
    mu_locx6 = from.mu_locx6;
    mu_locx7 = from.mu_locx7;
    mu_locx8 = from.mu_locx8;
    mu_locx9 = from.mu_locx9;
    mu_locm1 = from.mu_locm1;
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleB::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleB::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleB::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_supi.set_self_2(name, ".supi", os + 0 ); else mu_supi.set_self_2(NULL, NULL, 0);
  if (name) mu_ue.set_self_2(name, ".ue", os + 8 ); else mu_ue.set_self_2(NULL, NULL, 0);
  if (name) mu_ue1.set_self_2(name, ".ue1", os + 16 ); else mu_ue1.set_self_2(NULL, NULL, 0);
  if (name) mu_prekey.set_self_2(name, ".prekey", os + 24 ); else mu_prekey.set_self_2(NULL, NULL, 0);
  if (name) mu_certa.set_self_2(name, ".certa", os + 32 ); else mu_certa.set_self_2(NULL, NULL, 0);
  if (name) mu_eapm.set_self_2(name, ".eapm", os + 40 ); else mu_eapm.set_self_2(NULL, NULL, 0);
  if (name) mu_bn.set_self_2(name, ".bn", os + 48 ); else mu_bn.set_self_2(NULL, NULL, 0);
  if (name) mu_ausf.set_self_2(name, ".ausf", os + 56 ); else mu_ausf.set_self_2(NULL, NULL, 0);
  if (name) mu_sucm.set_self_2(name, ".sucm", os + 64 ); else mu_sucm.set_self_2(NULL, NULL, 0);
  if (name) mu_certc.set_self_2(name, ".certc", os + 72 ); else mu_certc.set_self_2(NULL, NULL, 0);
  if (name) mu_start.set_self_2(name, ".start", os + 80 ); else mu_start.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 88 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 96 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_C.set_self_2(name, ".C", os + 104 ); else mu_C.set_self_2(NULL, NULL, 0);
  if (name) mu_D.set_self_2(name, ".D", os + 112 ); else mu_D.set_self_2(NULL, NULL, 0);
  if (name) mu_x10.set_self_2(name, ".x10", os + 120 ); else mu_x10.set_self_2(NULL, NULL, 0);
  if (name) mu_x1.set_self_2(name, ".x1", os + 336 ); else mu_x1.set_self_2(NULL, NULL, 0);
  if (name) mu_x2.set_self_2(name, ".x2", os + 552 ); else mu_x2.set_self_2(NULL, NULL, 0);
  if (name) mu_x3.set_self_2(name, ".x3", os + 768 ); else mu_x3.set_self_2(NULL, NULL, 0);
  if (name) mu_x4.set_self_2(name, ".x4", os + 984 ); else mu_x4.set_self_2(NULL, NULL, 0);
  if (name) mu_x5.set_self_2(name, ".x5", os + 1200 ); else mu_x5.set_self_2(NULL, NULL, 0);
  if (name) mu_x6.set_self_2(name, ".x6", os + 1416 ); else mu_x6.set_self_2(NULL, NULL, 0);
  if (name) mu_x7.set_self_2(name, ".x7", os + 1632 ); else mu_x7.set_self_2(NULL, NULL, 0);
  if (name) mu_x8.set_self_2(name, ".x8", os + 1848 ); else mu_x8.set_self_2(NULL, NULL, 0);
  if (name) mu_x9.set_self_2(name, ".x9", os + 2064 ); else mu_x9.set_self_2(NULL, NULL, 0);
  if (name) mu_m1.set_self_2(name, ".m1", os + 2280 ); else mu_m1.set_self_2(NULL, NULL, 0);
  if (name) mu_locsupi.set_self_2(name, ".locsupi", os + 2496 ); else mu_locsupi.set_self_2(NULL, NULL, 0);
  if (name) mu_locue.set_self_2(name, ".locue", os + 2504 ); else mu_locue.set_self_2(NULL, NULL, 0);
  if (name) mu_locue1.set_self_2(name, ".locue1", os + 2512 ); else mu_locue1.set_self_2(NULL, NULL, 0);
  if (name) mu_locprekey.set_self_2(name, ".locprekey", os + 2520 ); else mu_locprekey.set_self_2(NULL, NULL, 0);
  if (name) mu_loccerta.set_self_2(name, ".loccerta", os + 2528 ); else mu_loccerta.set_self_2(NULL, NULL, 0);
  if (name) mu_loceapm.set_self_2(name, ".loceapm", os + 2536 ); else mu_loceapm.set_self_2(NULL, NULL, 0);
  if (name) mu_locbn.set_self_2(name, ".locbn", os + 2544 ); else mu_locbn.set_self_2(NULL, NULL, 0);
  if (name) mu_locausf.set_self_2(name, ".locausf", os + 2552 ); else mu_locausf.set_self_2(NULL, NULL, 0);
  if (name) mu_locsucm.set_self_2(name, ".locsucm", os + 2560 ); else mu_locsucm.set_self_2(NULL, NULL, 0);
  if (name) mu_loccertc.set_self_2(name, ".loccertc", os + 2568 ); else mu_loccertc.set_self_2(NULL, NULL, 0);
  if (name) mu_locstart.set_self_2(name, ".locstart", os + 2576 ); else mu_locstart.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 2584 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 2592 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_locC.set_self_2(name, ".locC", os + 2600 ); else mu_locC.set_self_2(NULL, NULL, 0);
  if (name) mu_locD.set_self_2(name, ".locD", os + 2608 ); else mu_locD.set_self_2(NULL, NULL, 0);
  if (name) mu_locx10.set_self_2(name, ".locx10", os + 2616 ); else mu_locx10.set_self_2(NULL, NULL, 0);
  if (name) mu_locx1.set_self_2(name, ".locx1", os + 2832 ); else mu_locx1.set_self_2(NULL, NULL, 0);
  if (name) mu_locx2.set_self_2(name, ".locx2", os + 3048 ); else mu_locx2.set_self_2(NULL, NULL, 0);
  if (name) mu_locx3.set_self_2(name, ".locx3", os + 3264 ); else mu_locx3.set_self_2(NULL, NULL, 0);
  if (name) mu_locx4.set_self_2(name, ".locx4", os + 3480 ); else mu_locx4.set_self_2(NULL, NULL, 0);
  if (name) mu_locx5.set_self_2(name, ".locx5", os + 3696 ); else mu_locx5.set_self_2(NULL, NULL, 0);
  if (name) mu_locx6.set_self_2(name, ".locx6", os + 3912 ); else mu_locx6.set_self_2(NULL, NULL, 0);
  if (name) mu_locx7.set_self_2(name, ".locx7", os + 4128 ); else mu_locx7.set_self_2(NULL, NULL, 0);
  if (name) mu_locx8.set_self_2(name, ".locx8", os + 4344 ); else mu_locx8.set_self_2(NULL, NULL, 0);
  if (name) mu_locx9.set_self_2(name, ".locx9", os + 4560 ); else mu_locx9.set_self_2(NULL, NULL, 0);
  if (name) mu_locm1.set_self_2(name, ".locm1", os + 4776 ); else mu_locm1.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 4992 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 5000 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleB::~mu_1_RoleB()
{
}

/*** end record declaration ***/
mu_1_RoleB mu_1_RoleB_undefined_var;

class mu_1_RoleC
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_supi;
  mu_1_NonceType mu_ue;
  mu_1_NonceType mu_ue1;
  mu_1_NonceType mu_prekey;
  mu_1_NonceType mu_certa;
  mu_1_NonceType mu_eapm;
  mu_1_NonceType mu_bn;
  mu_1_NonceType mu_ausf;
  mu_1_NonceType mu_sucm;
  mu_1_NonceType mu_certc;
  mu_1_NonceType mu_start;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_AgentType mu_C;
  mu_1_AgentType mu_D;
  mu_1_Message mu_x10;
  mu_1_Message mu_x1;
  mu_1_Message mu_x2;
  mu_1_Message mu_x3;
  mu_1_Message mu_x4;
  mu_1_Message mu_x5;
  mu_1_Message mu_x6;
  mu_1_Message mu_x7;
  mu_1_Message mu_x8;
  mu_1_Message mu_x9;
  mu_1_Message mu_m1;
  mu_1_NonceType mu_locsupi;
  mu_1_NonceType mu_locue;
  mu_1_NonceType mu_locue1;
  mu_1_NonceType mu_locprekey;
  mu_1_NonceType mu_loccerta;
  mu_1_NonceType mu_loceapm;
  mu_1_NonceType mu_locbn;
  mu_1_NonceType mu_locausf;
  mu_1_NonceType mu_locsucm;
  mu_1_NonceType mu_loccertc;
  mu_1_NonceType mu_locstart;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_AgentType mu_locC;
  mu_1_AgentType mu_locD;
  mu_1_Message mu_locx10;
  mu_1_Message mu_locx1;
  mu_1_Message mu_locx2;
  mu_1_Message mu_locx3;
  mu_1_Message mu_locx4;
  mu_1_Message mu_locx5;
  mu_1_Message mu_locx6;
  mu_1_Message mu_locx7;
  mu_1_Message mu_locx8;
  mu_1_Message mu_locx9;
  mu_1_Message mu_locm1;
  mu_1_CStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleC ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleC ( void ) {};

  virtual ~mu_1_RoleC(); 
friend int CompareWeight(mu_1_RoleC& a, mu_1_RoleC& b)
  {
    int w;
    w = CompareWeight(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = CompareWeight(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleC& a, mu_1_RoleC& b)
  {
    int w;
    w = Compare(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = Compare(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = Compare(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = Compare(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = Compare(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = Compare(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = Compare(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = Compare(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = Compare(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = Compare(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = Compare(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = Compare(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = Compare(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = Compare(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = Compare(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = Compare(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = Compare(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = Compare(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = Compare(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = Compare(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = Compare(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = Compare(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = Compare(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = Compare(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = Compare(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = Compare(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = Compare(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = Compare(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = Compare(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = Compare(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = Compare(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = Compare(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = Compare(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = Compare(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = Compare(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = Compare(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = Compare(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = Compare(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = Compare(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = Compare(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = Compare(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = Compare(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = Compare(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = Compare(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = Compare(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = Compare(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_supi.MultisetSort();
    mu_ue.MultisetSort();
    mu_ue1.MultisetSort();
    mu_prekey.MultisetSort();
    mu_certa.MultisetSort();
    mu_eapm.MultisetSort();
    mu_bn.MultisetSort();
    mu_ausf.MultisetSort();
    mu_sucm.MultisetSort();
    mu_certc.MultisetSort();
    mu_start.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_C.MultisetSort();
    mu_D.MultisetSort();
    mu_x10.MultisetSort();
    mu_x1.MultisetSort();
    mu_x2.MultisetSort();
    mu_x3.MultisetSort();
    mu_x4.MultisetSort();
    mu_x5.MultisetSort();
    mu_x6.MultisetSort();
    mu_x7.MultisetSort();
    mu_x8.MultisetSort();
    mu_x9.MultisetSort();
    mu_m1.MultisetSort();
    mu_locsupi.MultisetSort();
    mu_locue.MultisetSort();
    mu_locue1.MultisetSort();
    mu_locprekey.MultisetSort();
    mu_loccerta.MultisetSort();
    mu_loceapm.MultisetSort();
    mu_locbn.MultisetSort();
    mu_locausf.MultisetSort();
    mu_locsucm.MultisetSort();
    mu_loccertc.MultisetSort();
    mu_locstart.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_locC.MultisetSort();
    mu_locD.MultisetSort();
    mu_locx10.MultisetSort();
    mu_locx1.MultisetSort();
    mu_locx2.MultisetSort();
    mu_locx3.MultisetSort();
    mu_locx4.MultisetSort();
    mu_locx5.MultisetSort();
    mu_locx6.MultisetSort();
    mu_locx7.MultisetSort();
    mu_locx8.MultisetSort();
    mu_locx9.MultisetSort();
    mu_locm1.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_supi.print_statistic();
    mu_ue.print_statistic();
    mu_ue1.print_statistic();
    mu_prekey.print_statistic();
    mu_certa.print_statistic();
    mu_eapm.print_statistic();
    mu_bn.print_statistic();
    mu_ausf.print_statistic();
    mu_sucm.print_statistic();
    mu_certc.print_statistic();
    mu_start.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_C.print_statistic();
    mu_D.print_statistic();
    mu_x10.print_statistic();
    mu_x1.print_statistic();
    mu_x2.print_statistic();
    mu_x3.print_statistic();
    mu_x4.print_statistic();
    mu_x5.print_statistic();
    mu_x6.print_statistic();
    mu_x7.print_statistic();
    mu_x8.print_statistic();
    mu_x9.print_statistic();
    mu_m1.print_statistic();
    mu_locsupi.print_statistic();
    mu_locue.print_statistic();
    mu_locue1.print_statistic();
    mu_locprekey.print_statistic();
    mu_loccerta.print_statistic();
    mu_loceapm.print_statistic();
    mu_locbn.print_statistic();
    mu_locausf.print_statistic();
    mu_locsucm.print_statistic();
    mu_loccertc.print_statistic();
    mu_locstart.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_locC.print_statistic();
    mu_locD.print_statistic();
    mu_locx10.print_statistic();
    mu_locx1.print_statistic();
    mu_locx2.print_statistic();
    mu_locx3.print_statistic();
    mu_locx4.print_statistic();
    mu_locx5.print_statistic();
    mu_locx6.print_statistic();
    mu_locx7.print_statistic();
    mu_locx8.print_statistic();
    mu_locx9.print_statistic();
    mu_locm1.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_supi.clear();
    mu_ue.clear();
    mu_ue1.clear();
    mu_prekey.clear();
    mu_certa.clear();
    mu_eapm.clear();
    mu_bn.clear();
    mu_ausf.clear();
    mu_sucm.clear();
    mu_certc.clear();
    mu_start.clear();
    mu_A.clear();
    mu_B.clear();
    mu_C.clear();
    mu_D.clear();
    mu_x10.clear();
    mu_x1.clear();
    mu_x2.clear();
    mu_x3.clear();
    mu_x4.clear();
    mu_x5.clear();
    mu_x6.clear();
    mu_x7.clear();
    mu_x8.clear();
    mu_x9.clear();
    mu_m1.clear();
    mu_locsupi.clear();
    mu_locue.clear();
    mu_locue1.clear();
    mu_locprekey.clear();
    mu_loccerta.clear();
    mu_loceapm.clear();
    mu_locbn.clear();
    mu_locausf.clear();
    mu_locsucm.clear();
    mu_loccertc.clear();
    mu_locstart.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_locC.clear();
    mu_locD.clear();
    mu_locx10.clear();
    mu_locx1.clear();
    mu_locx2.clear();
    mu_locx3.clear();
    mu_locx4.clear();
    mu_locx5.clear();
    mu_locx6.clear();
    mu_locx7.clear();
    mu_locx8.clear();
    mu_locx9.clear();
    mu_locm1.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_supi.undefine();
    mu_ue.undefine();
    mu_ue1.undefine();
    mu_prekey.undefine();
    mu_certa.undefine();
    mu_eapm.undefine();
    mu_bn.undefine();
    mu_ausf.undefine();
    mu_sucm.undefine();
    mu_certc.undefine();
    mu_start.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_C.undefine();
    mu_D.undefine();
    mu_x10.undefine();
    mu_x1.undefine();
    mu_x2.undefine();
    mu_x3.undefine();
    mu_x4.undefine();
    mu_x5.undefine();
    mu_x6.undefine();
    mu_x7.undefine();
    mu_x8.undefine();
    mu_x9.undefine();
    mu_m1.undefine();
    mu_locsupi.undefine();
    mu_locue.undefine();
    mu_locue1.undefine();
    mu_locprekey.undefine();
    mu_loccerta.undefine();
    mu_loceapm.undefine();
    mu_locbn.undefine();
    mu_locausf.undefine();
    mu_locsucm.undefine();
    mu_loccertc.undefine();
    mu_locstart.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_locC.undefine();
    mu_locD.undefine();
    mu_locx10.undefine();
    mu_locx1.undefine();
    mu_locx2.undefine();
    mu_locx3.undefine();
    mu_locx4.undefine();
    mu_locx5.undefine();
    mu_locx6.undefine();
    mu_locx7.undefine();
    mu_locx8.undefine();
    mu_locx9.undefine();
    mu_locm1.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_supi.reset();
    mu_ue.reset();
    mu_ue1.reset();
    mu_prekey.reset();
    mu_certa.reset();
    mu_eapm.reset();
    mu_bn.reset();
    mu_ausf.reset();
    mu_sucm.reset();
    mu_certc.reset();
    mu_start.reset();
    mu_A.reset();
    mu_B.reset();
    mu_C.reset();
    mu_D.reset();
    mu_x10.reset();
    mu_x1.reset();
    mu_x2.reset();
    mu_x3.reset();
    mu_x4.reset();
    mu_x5.reset();
    mu_x6.reset();
    mu_x7.reset();
    mu_x8.reset();
    mu_x9.reset();
    mu_m1.reset();
    mu_locsupi.reset();
    mu_locue.reset();
    mu_locue1.reset();
    mu_locprekey.reset();
    mu_loccerta.reset();
    mu_loceapm.reset();
    mu_locbn.reset();
    mu_locausf.reset();
    mu_locsucm.reset();
    mu_loccertc.reset();
    mu_locstart.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_locC.reset();
    mu_locD.reset();
    mu_locx10.reset();
    mu_locx1.reset();
    mu_locx2.reset();
    mu_locx3.reset();
    mu_locx4.reset();
    mu_locx5.reset();
    mu_locx6.reset();
    mu_locx7.reset();
    mu_locx8.reset();
    mu_locx9.reset();
    mu_locm1.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_supi.print();
    mu_ue.print();
    mu_ue1.print();
    mu_prekey.print();
    mu_certa.print();
    mu_eapm.print();
    mu_bn.print();
    mu_ausf.print();
    mu_sucm.print();
    mu_certc.print();
    mu_start.print();
    mu_A.print();
    mu_B.print();
    mu_C.print();
    mu_D.print();
    mu_x10.print();
    mu_x1.print();
    mu_x2.print();
    mu_x3.print();
    mu_x4.print();
    mu_x5.print();
    mu_x6.print();
    mu_x7.print();
    mu_x8.print();
    mu_x9.print();
    mu_m1.print();
    mu_locsupi.print();
    mu_locue.print();
    mu_locue1.print();
    mu_locprekey.print();
    mu_loccerta.print();
    mu_loceapm.print();
    mu_locbn.print();
    mu_locausf.print();
    mu_locsucm.print();
    mu_loccertc.print();
    mu_locstart.print();
    mu_locA.print();
    mu_locB.print();
    mu_locC.print();
    mu_locD.print();
    mu_locx10.print();
    mu_locx1.print();
    mu_locx2.print();
    mu_locx3.print();
    mu_locx4.print();
    mu_locx5.print();
    mu_locx6.print();
    mu_locx7.print();
    mu_locx8.print();
    mu_locx9.print();
    mu_locm1.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_supi.print_diff(prevstate);
    mu_ue.print_diff(prevstate);
    mu_ue1.print_diff(prevstate);
    mu_prekey.print_diff(prevstate);
    mu_certa.print_diff(prevstate);
    mu_eapm.print_diff(prevstate);
    mu_bn.print_diff(prevstate);
    mu_ausf.print_diff(prevstate);
    mu_sucm.print_diff(prevstate);
    mu_certc.print_diff(prevstate);
    mu_start.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_C.print_diff(prevstate);
    mu_D.print_diff(prevstate);
    mu_x10.print_diff(prevstate);
    mu_x1.print_diff(prevstate);
    mu_x2.print_diff(prevstate);
    mu_x3.print_diff(prevstate);
    mu_x4.print_diff(prevstate);
    mu_x5.print_diff(prevstate);
    mu_x6.print_diff(prevstate);
    mu_x7.print_diff(prevstate);
    mu_x8.print_diff(prevstate);
    mu_x9.print_diff(prevstate);
    mu_m1.print_diff(prevstate);
    mu_locsupi.print_diff(prevstate);
    mu_locue.print_diff(prevstate);
    mu_locue1.print_diff(prevstate);
    mu_locprekey.print_diff(prevstate);
    mu_loccerta.print_diff(prevstate);
    mu_loceapm.print_diff(prevstate);
    mu_locbn.print_diff(prevstate);
    mu_locausf.print_diff(prevstate);
    mu_locsucm.print_diff(prevstate);
    mu_loccertc.print_diff(prevstate);
    mu_locstart.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_locC.print_diff(prevstate);
    mu_locD.print_diff(prevstate);
    mu_locx10.print_diff(prevstate);
    mu_locx1.print_diff(prevstate);
    mu_locx2.print_diff(prevstate);
    mu_locx3.print_diff(prevstate);
    mu_locx4.print_diff(prevstate);
    mu_locx5.print_diff(prevstate);
    mu_locx6.print_diff(prevstate);
    mu_locx7.print_diff(prevstate);
    mu_locx8.print_diff(prevstate);
    mu_locx9.print_diff(prevstate);
    mu_locm1.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_supi.to_state(thestate);
    mu_ue.to_state(thestate);
    mu_ue1.to_state(thestate);
    mu_prekey.to_state(thestate);
    mu_certa.to_state(thestate);
    mu_eapm.to_state(thestate);
    mu_bn.to_state(thestate);
    mu_ausf.to_state(thestate);
    mu_sucm.to_state(thestate);
    mu_certc.to_state(thestate);
    mu_start.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_C.to_state(thestate);
    mu_D.to_state(thestate);
    mu_x10.to_state(thestate);
    mu_x1.to_state(thestate);
    mu_x2.to_state(thestate);
    mu_x3.to_state(thestate);
    mu_x4.to_state(thestate);
    mu_x5.to_state(thestate);
    mu_x6.to_state(thestate);
    mu_x7.to_state(thestate);
    mu_x8.to_state(thestate);
    mu_x9.to_state(thestate);
    mu_m1.to_state(thestate);
    mu_locsupi.to_state(thestate);
    mu_locue.to_state(thestate);
    mu_locue1.to_state(thestate);
    mu_locprekey.to_state(thestate);
    mu_loccerta.to_state(thestate);
    mu_loceapm.to_state(thestate);
    mu_locbn.to_state(thestate);
    mu_locausf.to_state(thestate);
    mu_locsucm.to_state(thestate);
    mu_loccertc.to_state(thestate);
    mu_locstart.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_locC.to_state(thestate);
    mu_locD.to_state(thestate);
    mu_locx10.to_state(thestate);
    mu_locx1.to_state(thestate);
    mu_locx2.to_state(thestate);
    mu_locx3.to_state(thestate);
    mu_locx4.to_state(thestate);
    mu_locx5.to_state(thestate);
    mu_locx6.to_state(thestate);
    mu_locx7.to_state(thestate);
    mu_locx8.to_state(thestate);
    mu_locx9.to_state(thestate);
    mu_locm1.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleC& operator= (const mu_1_RoleC& from) {
    mu_supi.value(from.mu_supi.value());
    mu_ue.value(from.mu_ue.value());
    mu_ue1.value(from.mu_ue1.value());
    mu_prekey.value(from.mu_prekey.value());
    mu_certa.value(from.mu_certa.value());
    mu_eapm.value(from.mu_eapm.value());
    mu_bn.value(from.mu_bn.value());
    mu_ausf.value(from.mu_ausf.value());
    mu_sucm.value(from.mu_sucm.value());
    mu_certc.value(from.mu_certc.value());
    mu_start.value(from.mu_start.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_C.value(from.mu_C.value());
    mu_D.value(from.mu_D.value());
    mu_x10 = from.mu_x10;
    mu_x1 = from.mu_x1;
    mu_x2 = from.mu_x2;
    mu_x3 = from.mu_x3;
    mu_x4 = from.mu_x4;
    mu_x5 = from.mu_x5;
    mu_x6 = from.mu_x6;
    mu_x7 = from.mu_x7;
    mu_x8 = from.mu_x8;
    mu_x9 = from.mu_x9;
    mu_m1 = from.mu_m1;
    mu_locsupi.value(from.mu_locsupi.value());
    mu_locue.value(from.mu_locue.value());
    mu_locue1.value(from.mu_locue1.value());
    mu_locprekey.value(from.mu_locprekey.value());
    mu_loccerta.value(from.mu_loccerta.value());
    mu_loceapm.value(from.mu_loceapm.value());
    mu_locbn.value(from.mu_locbn.value());
    mu_locausf.value(from.mu_locausf.value());
    mu_locsucm.value(from.mu_locsucm.value());
    mu_loccertc.value(from.mu_loccertc.value());
    mu_locstart.value(from.mu_locstart.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_locC.value(from.mu_locC.value());
    mu_locD.value(from.mu_locD.value());
    mu_locx10 = from.mu_locx10;
    mu_locx1 = from.mu_locx1;
    mu_locx2 = from.mu_locx2;
    mu_locx3 = from.mu_locx3;
    mu_locx4 = from.mu_locx4;
    mu_locx5 = from.mu_locx5;
    mu_locx6 = from.mu_locx6;
    mu_locx7 = from.mu_locx7;
    mu_locx8 = from.mu_locx8;
    mu_locx9 = from.mu_locx9;
    mu_locm1 = from.mu_locm1;
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleC::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleC::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleC::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_supi.set_self_2(name, ".supi", os + 0 ); else mu_supi.set_self_2(NULL, NULL, 0);
  if (name) mu_ue.set_self_2(name, ".ue", os + 8 ); else mu_ue.set_self_2(NULL, NULL, 0);
  if (name) mu_ue1.set_self_2(name, ".ue1", os + 16 ); else mu_ue1.set_self_2(NULL, NULL, 0);
  if (name) mu_prekey.set_self_2(name, ".prekey", os + 24 ); else mu_prekey.set_self_2(NULL, NULL, 0);
  if (name) mu_certa.set_self_2(name, ".certa", os + 32 ); else mu_certa.set_self_2(NULL, NULL, 0);
  if (name) mu_eapm.set_self_2(name, ".eapm", os + 40 ); else mu_eapm.set_self_2(NULL, NULL, 0);
  if (name) mu_bn.set_self_2(name, ".bn", os + 48 ); else mu_bn.set_self_2(NULL, NULL, 0);
  if (name) mu_ausf.set_self_2(name, ".ausf", os + 56 ); else mu_ausf.set_self_2(NULL, NULL, 0);
  if (name) mu_sucm.set_self_2(name, ".sucm", os + 64 ); else mu_sucm.set_self_2(NULL, NULL, 0);
  if (name) mu_certc.set_self_2(name, ".certc", os + 72 ); else mu_certc.set_self_2(NULL, NULL, 0);
  if (name) mu_start.set_self_2(name, ".start", os + 80 ); else mu_start.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 88 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 96 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_C.set_self_2(name, ".C", os + 104 ); else mu_C.set_self_2(NULL, NULL, 0);
  if (name) mu_D.set_self_2(name, ".D", os + 112 ); else mu_D.set_self_2(NULL, NULL, 0);
  if (name) mu_x10.set_self_2(name, ".x10", os + 120 ); else mu_x10.set_self_2(NULL, NULL, 0);
  if (name) mu_x1.set_self_2(name, ".x1", os + 336 ); else mu_x1.set_self_2(NULL, NULL, 0);
  if (name) mu_x2.set_self_2(name, ".x2", os + 552 ); else mu_x2.set_self_2(NULL, NULL, 0);
  if (name) mu_x3.set_self_2(name, ".x3", os + 768 ); else mu_x3.set_self_2(NULL, NULL, 0);
  if (name) mu_x4.set_self_2(name, ".x4", os + 984 ); else mu_x4.set_self_2(NULL, NULL, 0);
  if (name) mu_x5.set_self_2(name, ".x5", os + 1200 ); else mu_x5.set_self_2(NULL, NULL, 0);
  if (name) mu_x6.set_self_2(name, ".x6", os + 1416 ); else mu_x6.set_self_2(NULL, NULL, 0);
  if (name) mu_x7.set_self_2(name, ".x7", os + 1632 ); else mu_x7.set_self_2(NULL, NULL, 0);
  if (name) mu_x8.set_self_2(name, ".x8", os + 1848 ); else mu_x8.set_self_2(NULL, NULL, 0);
  if (name) mu_x9.set_self_2(name, ".x9", os + 2064 ); else mu_x9.set_self_2(NULL, NULL, 0);
  if (name) mu_m1.set_self_2(name, ".m1", os + 2280 ); else mu_m1.set_self_2(NULL, NULL, 0);
  if (name) mu_locsupi.set_self_2(name, ".locsupi", os + 2496 ); else mu_locsupi.set_self_2(NULL, NULL, 0);
  if (name) mu_locue.set_self_2(name, ".locue", os + 2504 ); else mu_locue.set_self_2(NULL, NULL, 0);
  if (name) mu_locue1.set_self_2(name, ".locue1", os + 2512 ); else mu_locue1.set_self_2(NULL, NULL, 0);
  if (name) mu_locprekey.set_self_2(name, ".locprekey", os + 2520 ); else mu_locprekey.set_self_2(NULL, NULL, 0);
  if (name) mu_loccerta.set_self_2(name, ".loccerta", os + 2528 ); else mu_loccerta.set_self_2(NULL, NULL, 0);
  if (name) mu_loceapm.set_self_2(name, ".loceapm", os + 2536 ); else mu_loceapm.set_self_2(NULL, NULL, 0);
  if (name) mu_locbn.set_self_2(name, ".locbn", os + 2544 ); else mu_locbn.set_self_2(NULL, NULL, 0);
  if (name) mu_locausf.set_self_2(name, ".locausf", os + 2552 ); else mu_locausf.set_self_2(NULL, NULL, 0);
  if (name) mu_locsucm.set_self_2(name, ".locsucm", os + 2560 ); else mu_locsucm.set_self_2(NULL, NULL, 0);
  if (name) mu_loccertc.set_self_2(name, ".loccertc", os + 2568 ); else mu_loccertc.set_self_2(NULL, NULL, 0);
  if (name) mu_locstart.set_self_2(name, ".locstart", os + 2576 ); else mu_locstart.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 2584 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 2592 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_locC.set_self_2(name, ".locC", os + 2600 ); else mu_locC.set_self_2(NULL, NULL, 0);
  if (name) mu_locD.set_self_2(name, ".locD", os + 2608 ); else mu_locD.set_self_2(NULL, NULL, 0);
  if (name) mu_locx10.set_self_2(name, ".locx10", os + 2616 ); else mu_locx10.set_self_2(NULL, NULL, 0);
  if (name) mu_locx1.set_self_2(name, ".locx1", os + 2832 ); else mu_locx1.set_self_2(NULL, NULL, 0);
  if (name) mu_locx2.set_self_2(name, ".locx2", os + 3048 ); else mu_locx2.set_self_2(NULL, NULL, 0);
  if (name) mu_locx3.set_self_2(name, ".locx3", os + 3264 ); else mu_locx3.set_self_2(NULL, NULL, 0);
  if (name) mu_locx4.set_self_2(name, ".locx4", os + 3480 ); else mu_locx4.set_self_2(NULL, NULL, 0);
  if (name) mu_locx5.set_self_2(name, ".locx5", os + 3696 ); else mu_locx5.set_self_2(NULL, NULL, 0);
  if (name) mu_locx6.set_self_2(name, ".locx6", os + 3912 ); else mu_locx6.set_self_2(NULL, NULL, 0);
  if (name) mu_locx7.set_self_2(name, ".locx7", os + 4128 ); else mu_locx7.set_self_2(NULL, NULL, 0);
  if (name) mu_locx8.set_self_2(name, ".locx8", os + 4344 ); else mu_locx8.set_self_2(NULL, NULL, 0);
  if (name) mu_locx9.set_self_2(name, ".locx9", os + 4560 ); else mu_locx9.set_self_2(NULL, NULL, 0);
  if (name) mu_locm1.set_self_2(name, ".locm1", os + 4776 ); else mu_locm1.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 4992 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 5000 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleC::~mu_1_RoleC()
{
}

/*** end record declaration ***/
mu_1_RoleC mu_1_RoleC_undefined_var;

class mu_1_RoleD
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_supi;
  mu_1_NonceType mu_ue;
  mu_1_NonceType mu_ue1;
  mu_1_NonceType mu_prekey;
  mu_1_NonceType mu_certa;
  mu_1_NonceType mu_eapm;
  mu_1_NonceType mu_bn;
  mu_1_NonceType mu_ausf;
  mu_1_NonceType mu_sucm;
  mu_1_NonceType mu_certc;
  mu_1_NonceType mu_start;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_B;
  mu_1_AgentType mu_C;
  mu_1_AgentType mu_D;
  mu_1_Message mu_x10;
  mu_1_Message mu_x1;
  mu_1_Message mu_x2;
  mu_1_Message mu_x3;
  mu_1_Message mu_x4;
  mu_1_Message mu_x5;
  mu_1_Message mu_x6;
  mu_1_Message mu_x7;
  mu_1_Message mu_x8;
  mu_1_Message mu_x9;
  mu_1_Message mu_m1;
  mu_1_NonceType mu_locsupi;
  mu_1_NonceType mu_locue;
  mu_1_NonceType mu_locue1;
  mu_1_NonceType mu_locprekey;
  mu_1_NonceType mu_loccerta;
  mu_1_NonceType mu_loceapm;
  mu_1_NonceType mu_locbn;
  mu_1_NonceType mu_locausf;
  mu_1_NonceType mu_locsucm;
  mu_1_NonceType mu_loccertc;
  mu_1_NonceType mu_locstart;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locB;
  mu_1_AgentType mu_locC;
  mu_1_AgentType mu_locD;
  mu_1_Message mu_locx10;
  mu_1_Message mu_locx1;
  mu_1_Message mu_locx2;
  mu_1_Message mu_locx3;
  mu_1_Message mu_locx4;
  mu_1_Message mu_locx5;
  mu_1_Message mu_locx6;
  mu_1_Message mu_locx7;
  mu_1_Message mu_locx8;
  mu_1_Message mu_locx9;
  mu_1_Message mu_locm1;
  mu_1_DStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleD ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleD ( void ) {};

  virtual ~mu_1_RoleD(); 
friend int CompareWeight(mu_1_RoleD& a, mu_1_RoleD& b)
  {
    int w;
    w = CompareWeight(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = CompareWeight(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = CompareWeight(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleD& a, mu_1_RoleD& b)
  {
    int w;
    w = Compare(a.mu_supi, b.mu_supi);
    if (w!=0) return w;
    w = Compare(a.mu_ue, b.mu_ue);
    if (w!=0) return w;
    w = Compare(a.mu_ue1, b.mu_ue1);
    if (w!=0) return w;
    w = Compare(a.mu_prekey, b.mu_prekey);
    if (w!=0) return w;
    w = Compare(a.mu_certa, b.mu_certa);
    if (w!=0) return w;
    w = Compare(a.mu_eapm, b.mu_eapm);
    if (w!=0) return w;
    w = Compare(a.mu_bn, b.mu_bn);
    if (w!=0) return w;
    w = Compare(a.mu_ausf, b.mu_ausf);
    if (w!=0) return w;
    w = Compare(a.mu_sucm, b.mu_sucm);
    if (w!=0) return w;
    w = Compare(a.mu_certc, b.mu_certc);
    if (w!=0) return w;
    w = Compare(a.mu_start, b.mu_start);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_C, b.mu_C);
    if (w!=0) return w;
    w = Compare(a.mu_D, b.mu_D);
    if (w!=0) return w;
    w = Compare(a.mu_x10, b.mu_x10);
    if (w!=0) return w;
    w = Compare(a.mu_x1, b.mu_x1);
    if (w!=0) return w;
    w = Compare(a.mu_x2, b.mu_x2);
    if (w!=0) return w;
    w = Compare(a.mu_x3, b.mu_x3);
    if (w!=0) return w;
    w = Compare(a.mu_x4, b.mu_x4);
    if (w!=0) return w;
    w = Compare(a.mu_x5, b.mu_x5);
    if (w!=0) return w;
    w = Compare(a.mu_x6, b.mu_x6);
    if (w!=0) return w;
    w = Compare(a.mu_x7, b.mu_x7);
    if (w!=0) return w;
    w = Compare(a.mu_x8, b.mu_x8);
    if (w!=0) return w;
    w = Compare(a.mu_x9, b.mu_x9);
    if (w!=0) return w;
    w = Compare(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = Compare(a.mu_locsupi, b.mu_locsupi);
    if (w!=0) return w;
    w = Compare(a.mu_locue, b.mu_locue);
    if (w!=0) return w;
    w = Compare(a.mu_locue1, b.mu_locue1);
    if (w!=0) return w;
    w = Compare(a.mu_locprekey, b.mu_locprekey);
    if (w!=0) return w;
    w = Compare(a.mu_loccerta, b.mu_loccerta);
    if (w!=0) return w;
    w = Compare(a.mu_loceapm, b.mu_loceapm);
    if (w!=0) return w;
    w = Compare(a.mu_locbn, b.mu_locbn);
    if (w!=0) return w;
    w = Compare(a.mu_locausf, b.mu_locausf);
    if (w!=0) return w;
    w = Compare(a.mu_locsucm, b.mu_locsucm);
    if (w!=0) return w;
    w = Compare(a.mu_loccertc, b.mu_loccertc);
    if (w!=0) return w;
    w = Compare(a.mu_locstart, b.mu_locstart);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_locC, b.mu_locC);
    if (w!=0) return w;
    w = Compare(a.mu_locD, b.mu_locD);
    if (w!=0) return w;
    w = Compare(a.mu_locx10, b.mu_locx10);
    if (w!=0) return w;
    w = Compare(a.mu_locx1, b.mu_locx1);
    if (w!=0) return w;
    w = Compare(a.mu_locx2, b.mu_locx2);
    if (w!=0) return w;
    w = Compare(a.mu_locx3, b.mu_locx3);
    if (w!=0) return w;
    w = Compare(a.mu_locx4, b.mu_locx4);
    if (w!=0) return w;
    w = Compare(a.mu_locx5, b.mu_locx5);
    if (w!=0) return w;
    w = Compare(a.mu_locx6, b.mu_locx6);
    if (w!=0) return w;
    w = Compare(a.mu_locx7, b.mu_locx7);
    if (w!=0) return w;
    w = Compare(a.mu_locx8, b.mu_locx8);
    if (w!=0) return w;
    w = Compare(a.mu_locx9, b.mu_locx9);
    if (w!=0) return w;
    w = Compare(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_supi.MultisetSort();
    mu_ue.MultisetSort();
    mu_ue1.MultisetSort();
    mu_prekey.MultisetSort();
    mu_certa.MultisetSort();
    mu_eapm.MultisetSort();
    mu_bn.MultisetSort();
    mu_ausf.MultisetSort();
    mu_sucm.MultisetSort();
    mu_certc.MultisetSort();
    mu_start.MultisetSort();
    mu_A.MultisetSort();
    mu_B.MultisetSort();
    mu_C.MultisetSort();
    mu_D.MultisetSort();
    mu_x10.MultisetSort();
    mu_x1.MultisetSort();
    mu_x2.MultisetSort();
    mu_x3.MultisetSort();
    mu_x4.MultisetSort();
    mu_x5.MultisetSort();
    mu_x6.MultisetSort();
    mu_x7.MultisetSort();
    mu_x8.MultisetSort();
    mu_x9.MultisetSort();
    mu_m1.MultisetSort();
    mu_locsupi.MultisetSort();
    mu_locue.MultisetSort();
    mu_locue1.MultisetSort();
    mu_locprekey.MultisetSort();
    mu_loccerta.MultisetSort();
    mu_loceapm.MultisetSort();
    mu_locbn.MultisetSort();
    mu_locausf.MultisetSort();
    mu_locsucm.MultisetSort();
    mu_loccertc.MultisetSort();
    mu_locstart.MultisetSort();
    mu_locA.MultisetSort();
    mu_locB.MultisetSort();
    mu_locC.MultisetSort();
    mu_locD.MultisetSort();
    mu_locx10.MultisetSort();
    mu_locx1.MultisetSort();
    mu_locx2.MultisetSort();
    mu_locx3.MultisetSort();
    mu_locx4.MultisetSort();
    mu_locx5.MultisetSort();
    mu_locx6.MultisetSort();
    mu_locx7.MultisetSort();
    mu_locx8.MultisetSort();
    mu_locx9.MultisetSort();
    mu_locm1.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_supi.print_statistic();
    mu_ue.print_statistic();
    mu_ue1.print_statistic();
    mu_prekey.print_statistic();
    mu_certa.print_statistic();
    mu_eapm.print_statistic();
    mu_bn.print_statistic();
    mu_ausf.print_statistic();
    mu_sucm.print_statistic();
    mu_certc.print_statistic();
    mu_start.print_statistic();
    mu_A.print_statistic();
    mu_B.print_statistic();
    mu_C.print_statistic();
    mu_D.print_statistic();
    mu_x10.print_statistic();
    mu_x1.print_statistic();
    mu_x2.print_statistic();
    mu_x3.print_statistic();
    mu_x4.print_statistic();
    mu_x5.print_statistic();
    mu_x6.print_statistic();
    mu_x7.print_statistic();
    mu_x8.print_statistic();
    mu_x9.print_statistic();
    mu_m1.print_statistic();
    mu_locsupi.print_statistic();
    mu_locue.print_statistic();
    mu_locue1.print_statistic();
    mu_locprekey.print_statistic();
    mu_loccerta.print_statistic();
    mu_loceapm.print_statistic();
    mu_locbn.print_statistic();
    mu_locausf.print_statistic();
    mu_locsucm.print_statistic();
    mu_loccertc.print_statistic();
    mu_locstart.print_statistic();
    mu_locA.print_statistic();
    mu_locB.print_statistic();
    mu_locC.print_statistic();
    mu_locD.print_statistic();
    mu_locx10.print_statistic();
    mu_locx1.print_statistic();
    mu_locx2.print_statistic();
    mu_locx3.print_statistic();
    mu_locx4.print_statistic();
    mu_locx5.print_statistic();
    mu_locx6.print_statistic();
    mu_locx7.print_statistic();
    mu_locx8.print_statistic();
    mu_locx9.print_statistic();
    mu_locm1.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_supi.clear();
    mu_ue.clear();
    mu_ue1.clear();
    mu_prekey.clear();
    mu_certa.clear();
    mu_eapm.clear();
    mu_bn.clear();
    mu_ausf.clear();
    mu_sucm.clear();
    mu_certc.clear();
    mu_start.clear();
    mu_A.clear();
    mu_B.clear();
    mu_C.clear();
    mu_D.clear();
    mu_x10.clear();
    mu_x1.clear();
    mu_x2.clear();
    mu_x3.clear();
    mu_x4.clear();
    mu_x5.clear();
    mu_x6.clear();
    mu_x7.clear();
    mu_x8.clear();
    mu_x9.clear();
    mu_m1.clear();
    mu_locsupi.clear();
    mu_locue.clear();
    mu_locue1.clear();
    mu_locprekey.clear();
    mu_loccerta.clear();
    mu_loceapm.clear();
    mu_locbn.clear();
    mu_locausf.clear();
    mu_locsucm.clear();
    mu_loccertc.clear();
    mu_locstart.clear();
    mu_locA.clear();
    mu_locB.clear();
    mu_locC.clear();
    mu_locD.clear();
    mu_locx10.clear();
    mu_locx1.clear();
    mu_locx2.clear();
    mu_locx3.clear();
    mu_locx4.clear();
    mu_locx5.clear();
    mu_locx6.clear();
    mu_locx7.clear();
    mu_locx8.clear();
    mu_locx9.clear();
    mu_locm1.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_supi.undefine();
    mu_ue.undefine();
    mu_ue1.undefine();
    mu_prekey.undefine();
    mu_certa.undefine();
    mu_eapm.undefine();
    mu_bn.undefine();
    mu_ausf.undefine();
    mu_sucm.undefine();
    mu_certc.undefine();
    mu_start.undefine();
    mu_A.undefine();
    mu_B.undefine();
    mu_C.undefine();
    mu_D.undefine();
    mu_x10.undefine();
    mu_x1.undefine();
    mu_x2.undefine();
    mu_x3.undefine();
    mu_x4.undefine();
    mu_x5.undefine();
    mu_x6.undefine();
    mu_x7.undefine();
    mu_x8.undefine();
    mu_x9.undefine();
    mu_m1.undefine();
    mu_locsupi.undefine();
    mu_locue.undefine();
    mu_locue1.undefine();
    mu_locprekey.undefine();
    mu_loccerta.undefine();
    mu_loceapm.undefine();
    mu_locbn.undefine();
    mu_locausf.undefine();
    mu_locsucm.undefine();
    mu_loccertc.undefine();
    mu_locstart.undefine();
    mu_locA.undefine();
    mu_locB.undefine();
    mu_locC.undefine();
    mu_locD.undefine();
    mu_locx10.undefine();
    mu_locx1.undefine();
    mu_locx2.undefine();
    mu_locx3.undefine();
    mu_locx4.undefine();
    mu_locx5.undefine();
    mu_locx6.undefine();
    mu_locx7.undefine();
    mu_locx8.undefine();
    mu_locx9.undefine();
    mu_locm1.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_supi.reset();
    mu_ue.reset();
    mu_ue1.reset();
    mu_prekey.reset();
    mu_certa.reset();
    mu_eapm.reset();
    mu_bn.reset();
    mu_ausf.reset();
    mu_sucm.reset();
    mu_certc.reset();
    mu_start.reset();
    mu_A.reset();
    mu_B.reset();
    mu_C.reset();
    mu_D.reset();
    mu_x10.reset();
    mu_x1.reset();
    mu_x2.reset();
    mu_x3.reset();
    mu_x4.reset();
    mu_x5.reset();
    mu_x6.reset();
    mu_x7.reset();
    mu_x8.reset();
    mu_x9.reset();
    mu_m1.reset();
    mu_locsupi.reset();
    mu_locue.reset();
    mu_locue1.reset();
    mu_locprekey.reset();
    mu_loccerta.reset();
    mu_loceapm.reset();
    mu_locbn.reset();
    mu_locausf.reset();
    mu_locsucm.reset();
    mu_loccertc.reset();
    mu_locstart.reset();
    mu_locA.reset();
    mu_locB.reset();
    mu_locC.reset();
    mu_locD.reset();
    mu_locx10.reset();
    mu_locx1.reset();
    mu_locx2.reset();
    mu_locx3.reset();
    mu_locx4.reset();
    mu_locx5.reset();
    mu_locx6.reset();
    mu_locx7.reset();
    mu_locx8.reset();
    mu_locx9.reset();
    mu_locm1.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_supi.print();
    mu_ue.print();
    mu_ue1.print();
    mu_prekey.print();
    mu_certa.print();
    mu_eapm.print();
    mu_bn.print();
    mu_ausf.print();
    mu_sucm.print();
    mu_certc.print();
    mu_start.print();
    mu_A.print();
    mu_B.print();
    mu_C.print();
    mu_D.print();
    mu_x10.print();
    mu_x1.print();
    mu_x2.print();
    mu_x3.print();
    mu_x4.print();
    mu_x5.print();
    mu_x6.print();
    mu_x7.print();
    mu_x8.print();
    mu_x9.print();
    mu_m1.print();
    mu_locsupi.print();
    mu_locue.print();
    mu_locue1.print();
    mu_locprekey.print();
    mu_loccerta.print();
    mu_loceapm.print();
    mu_locbn.print();
    mu_locausf.print();
    mu_locsucm.print();
    mu_loccertc.print();
    mu_locstart.print();
    mu_locA.print();
    mu_locB.print();
    mu_locC.print();
    mu_locD.print();
    mu_locx10.print();
    mu_locx1.print();
    mu_locx2.print();
    mu_locx3.print();
    mu_locx4.print();
    mu_locx5.print();
    mu_locx6.print();
    mu_locx7.print();
    mu_locx8.print();
    mu_locx9.print();
    mu_locm1.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_supi.print_diff(prevstate);
    mu_ue.print_diff(prevstate);
    mu_ue1.print_diff(prevstate);
    mu_prekey.print_diff(prevstate);
    mu_certa.print_diff(prevstate);
    mu_eapm.print_diff(prevstate);
    mu_bn.print_diff(prevstate);
    mu_ausf.print_diff(prevstate);
    mu_sucm.print_diff(prevstate);
    mu_certc.print_diff(prevstate);
    mu_start.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_C.print_diff(prevstate);
    mu_D.print_diff(prevstate);
    mu_x10.print_diff(prevstate);
    mu_x1.print_diff(prevstate);
    mu_x2.print_diff(prevstate);
    mu_x3.print_diff(prevstate);
    mu_x4.print_diff(prevstate);
    mu_x5.print_diff(prevstate);
    mu_x6.print_diff(prevstate);
    mu_x7.print_diff(prevstate);
    mu_x8.print_diff(prevstate);
    mu_x9.print_diff(prevstate);
    mu_m1.print_diff(prevstate);
    mu_locsupi.print_diff(prevstate);
    mu_locue.print_diff(prevstate);
    mu_locue1.print_diff(prevstate);
    mu_locprekey.print_diff(prevstate);
    mu_loccerta.print_diff(prevstate);
    mu_loceapm.print_diff(prevstate);
    mu_locbn.print_diff(prevstate);
    mu_locausf.print_diff(prevstate);
    mu_locsucm.print_diff(prevstate);
    mu_loccertc.print_diff(prevstate);
    mu_locstart.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_locC.print_diff(prevstate);
    mu_locD.print_diff(prevstate);
    mu_locx10.print_diff(prevstate);
    mu_locx1.print_diff(prevstate);
    mu_locx2.print_diff(prevstate);
    mu_locx3.print_diff(prevstate);
    mu_locx4.print_diff(prevstate);
    mu_locx5.print_diff(prevstate);
    mu_locx6.print_diff(prevstate);
    mu_locx7.print_diff(prevstate);
    mu_locx8.print_diff(prevstate);
    mu_locx9.print_diff(prevstate);
    mu_locm1.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_supi.to_state(thestate);
    mu_ue.to_state(thestate);
    mu_ue1.to_state(thestate);
    mu_prekey.to_state(thestate);
    mu_certa.to_state(thestate);
    mu_eapm.to_state(thestate);
    mu_bn.to_state(thestate);
    mu_ausf.to_state(thestate);
    mu_sucm.to_state(thestate);
    mu_certc.to_state(thestate);
    mu_start.to_state(thestate);
    mu_A.to_state(thestate);
    mu_B.to_state(thestate);
    mu_C.to_state(thestate);
    mu_D.to_state(thestate);
    mu_x10.to_state(thestate);
    mu_x1.to_state(thestate);
    mu_x2.to_state(thestate);
    mu_x3.to_state(thestate);
    mu_x4.to_state(thestate);
    mu_x5.to_state(thestate);
    mu_x6.to_state(thestate);
    mu_x7.to_state(thestate);
    mu_x8.to_state(thestate);
    mu_x9.to_state(thestate);
    mu_m1.to_state(thestate);
    mu_locsupi.to_state(thestate);
    mu_locue.to_state(thestate);
    mu_locue1.to_state(thestate);
    mu_locprekey.to_state(thestate);
    mu_loccerta.to_state(thestate);
    mu_loceapm.to_state(thestate);
    mu_locbn.to_state(thestate);
    mu_locausf.to_state(thestate);
    mu_locsucm.to_state(thestate);
    mu_loccertc.to_state(thestate);
    mu_locstart.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_locC.to_state(thestate);
    mu_locD.to_state(thestate);
    mu_locx10.to_state(thestate);
    mu_locx1.to_state(thestate);
    mu_locx2.to_state(thestate);
    mu_locx3.to_state(thestate);
    mu_locx4.to_state(thestate);
    mu_locx5.to_state(thestate);
    mu_locx6.to_state(thestate);
    mu_locx7.to_state(thestate);
    mu_locx8.to_state(thestate);
    mu_locx9.to_state(thestate);
    mu_locm1.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleD& operator= (const mu_1_RoleD& from) {
    mu_supi.value(from.mu_supi.value());
    mu_ue.value(from.mu_ue.value());
    mu_ue1.value(from.mu_ue1.value());
    mu_prekey.value(from.mu_prekey.value());
    mu_certa.value(from.mu_certa.value());
    mu_eapm.value(from.mu_eapm.value());
    mu_bn.value(from.mu_bn.value());
    mu_ausf.value(from.mu_ausf.value());
    mu_sucm.value(from.mu_sucm.value());
    mu_certc.value(from.mu_certc.value());
    mu_start.value(from.mu_start.value());
    mu_A.value(from.mu_A.value());
    mu_B.value(from.mu_B.value());
    mu_C.value(from.mu_C.value());
    mu_D.value(from.mu_D.value());
    mu_x10 = from.mu_x10;
    mu_x1 = from.mu_x1;
    mu_x2 = from.mu_x2;
    mu_x3 = from.mu_x3;
    mu_x4 = from.mu_x4;
    mu_x5 = from.mu_x5;
    mu_x6 = from.mu_x6;
    mu_x7 = from.mu_x7;
    mu_x8 = from.mu_x8;
    mu_x9 = from.mu_x9;
    mu_m1 = from.mu_m1;
    mu_locsupi.value(from.mu_locsupi.value());
    mu_locue.value(from.mu_locue.value());
    mu_locue1.value(from.mu_locue1.value());
    mu_locprekey.value(from.mu_locprekey.value());
    mu_loccerta.value(from.mu_loccerta.value());
    mu_loceapm.value(from.mu_loceapm.value());
    mu_locbn.value(from.mu_locbn.value());
    mu_locausf.value(from.mu_locausf.value());
    mu_locsucm.value(from.mu_locsucm.value());
    mu_loccertc.value(from.mu_loccertc.value());
    mu_locstart.value(from.mu_locstart.value());
    mu_locA.value(from.mu_locA.value());
    mu_locB.value(from.mu_locB.value());
    mu_locC.value(from.mu_locC.value());
    mu_locD.value(from.mu_locD.value());
    mu_locx10 = from.mu_locx10;
    mu_locx1 = from.mu_locx1;
    mu_locx2 = from.mu_locx2;
    mu_locx3 = from.mu_locx3;
    mu_locx4 = from.mu_locx4;
    mu_locx5 = from.mu_locx5;
    mu_locx6 = from.mu_locx6;
    mu_locx7 = from.mu_locx7;
    mu_locx8 = from.mu_locx8;
    mu_locx9 = from.mu_locx9;
    mu_locm1 = from.mu_locm1;
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleD::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleD::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleD::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_supi.set_self_2(name, ".supi", os + 0 ); else mu_supi.set_self_2(NULL, NULL, 0);
  if (name) mu_ue.set_self_2(name, ".ue", os + 8 ); else mu_ue.set_self_2(NULL, NULL, 0);
  if (name) mu_ue1.set_self_2(name, ".ue1", os + 16 ); else mu_ue1.set_self_2(NULL, NULL, 0);
  if (name) mu_prekey.set_self_2(name, ".prekey", os + 24 ); else mu_prekey.set_self_2(NULL, NULL, 0);
  if (name) mu_certa.set_self_2(name, ".certa", os + 32 ); else mu_certa.set_self_2(NULL, NULL, 0);
  if (name) mu_eapm.set_self_2(name, ".eapm", os + 40 ); else mu_eapm.set_self_2(NULL, NULL, 0);
  if (name) mu_bn.set_self_2(name, ".bn", os + 48 ); else mu_bn.set_self_2(NULL, NULL, 0);
  if (name) mu_ausf.set_self_2(name, ".ausf", os + 56 ); else mu_ausf.set_self_2(NULL, NULL, 0);
  if (name) mu_sucm.set_self_2(name, ".sucm", os + 64 ); else mu_sucm.set_self_2(NULL, NULL, 0);
  if (name) mu_certc.set_self_2(name, ".certc", os + 72 ); else mu_certc.set_self_2(NULL, NULL, 0);
  if (name) mu_start.set_self_2(name, ".start", os + 80 ); else mu_start.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 88 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 96 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_C.set_self_2(name, ".C", os + 104 ); else mu_C.set_self_2(NULL, NULL, 0);
  if (name) mu_D.set_self_2(name, ".D", os + 112 ); else mu_D.set_self_2(NULL, NULL, 0);
  if (name) mu_x10.set_self_2(name, ".x10", os + 120 ); else mu_x10.set_self_2(NULL, NULL, 0);
  if (name) mu_x1.set_self_2(name, ".x1", os + 336 ); else mu_x1.set_self_2(NULL, NULL, 0);
  if (name) mu_x2.set_self_2(name, ".x2", os + 552 ); else mu_x2.set_self_2(NULL, NULL, 0);
  if (name) mu_x3.set_self_2(name, ".x3", os + 768 ); else mu_x3.set_self_2(NULL, NULL, 0);
  if (name) mu_x4.set_self_2(name, ".x4", os + 984 ); else mu_x4.set_self_2(NULL, NULL, 0);
  if (name) mu_x5.set_self_2(name, ".x5", os + 1200 ); else mu_x5.set_self_2(NULL, NULL, 0);
  if (name) mu_x6.set_self_2(name, ".x6", os + 1416 ); else mu_x6.set_self_2(NULL, NULL, 0);
  if (name) mu_x7.set_self_2(name, ".x7", os + 1632 ); else mu_x7.set_self_2(NULL, NULL, 0);
  if (name) mu_x8.set_self_2(name, ".x8", os + 1848 ); else mu_x8.set_self_2(NULL, NULL, 0);
  if (name) mu_x9.set_self_2(name, ".x9", os + 2064 ); else mu_x9.set_self_2(NULL, NULL, 0);
  if (name) mu_m1.set_self_2(name, ".m1", os + 2280 ); else mu_m1.set_self_2(NULL, NULL, 0);
  if (name) mu_locsupi.set_self_2(name, ".locsupi", os + 2496 ); else mu_locsupi.set_self_2(NULL, NULL, 0);
  if (name) mu_locue.set_self_2(name, ".locue", os + 2504 ); else mu_locue.set_self_2(NULL, NULL, 0);
  if (name) mu_locue1.set_self_2(name, ".locue1", os + 2512 ); else mu_locue1.set_self_2(NULL, NULL, 0);
  if (name) mu_locprekey.set_self_2(name, ".locprekey", os + 2520 ); else mu_locprekey.set_self_2(NULL, NULL, 0);
  if (name) mu_loccerta.set_self_2(name, ".loccerta", os + 2528 ); else mu_loccerta.set_self_2(NULL, NULL, 0);
  if (name) mu_loceapm.set_self_2(name, ".loceapm", os + 2536 ); else mu_loceapm.set_self_2(NULL, NULL, 0);
  if (name) mu_locbn.set_self_2(name, ".locbn", os + 2544 ); else mu_locbn.set_self_2(NULL, NULL, 0);
  if (name) mu_locausf.set_self_2(name, ".locausf", os + 2552 ); else mu_locausf.set_self_2(NULL, NULL, 0);
  if (name) mu_locsucm.set_self_2(name, ".locsucm", os + 2560 ); else mu_locsucm.set_self_2(NULL, NULL, 0);
  if (name) mu_loccertc.set_self_2(name, ".loccertc", os + 2568 ); else mu_loccertc.set_self_2(NULL, NULL, 0);
  if (name) mu_locstart.set_self_2(name, ".locstart", os + 2576 ); else mu_locstart.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 2584 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 2592 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_locC.set_self_2(name, ".locC", os + 2600 ); else mu_locC.set_self_2(NULL, NULL, 0);
  if (name) mu_locD.set_self_2(name, ".locD", os + 2608 ); else mu_locD.set_self_2(NULL, NULL, 0);
  if (name) mu_locx10.set_self_2(name, ".locx10", os + 2616 ); else mu_locx10.set_self_2(NULL, NULL, 0);
  if (name) mu_locx1.set_self_2(name, ".locx1", os + 2832 ); else mu_locx1.set_self_2(NULL, NULL, 0);
  if (name) mu_locx2.set_self_2(name, ".locx2", os + 3048 ); else mu_locx2.set_self_2(NULL, NULL, 0);
  if (name) mu_locx3.set_self_2(name, ".locx3", os + 3264 ); else mu_locx3.set_self_2(NULL, NULL, 0);
  if (name) mu_locx4.set_self_2(name, ".locx4", os + 3480 ); else mu_locx4.set_self_2(NULL, NULL, 0);
  if (name) mu_locx5.set_self_2(name, ".locx5", os + 3696 ); else mu_locx5.set_self_2(NULL, NULL, 0);
  if (name) mu_locx6.set_self_2(name, ".locx6", os + 3912 ); else mu_locx6.set_self_2(NULL, NULL, 0);
  if (name) mu_locx7.set_self_2(name, ".locx7", os + 4128 ); else mu_locx7.set_self_2(NULL, NULL, 0);
  if (name) mu_locx8.set_self_2(name, ".locx8", os + 4344 ); else mu_locx8.set_self_2(NULL, NULL, 0);
  if (name) mu_locx9.set_self_2(name, ".locx9", os + 4560 ); else mu_locx9.set_self_2(NULL, NULL, 0);
  if (name) mu_locm1.set_self_2(name, ".locm1", os + 4776 ); else mu_locm1.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 4992 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 5000 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleD::~mu_1_RoleD()
{
}

/*** end record declaration ***/
mu_1_RoleD mu_1_RoleD_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_indexType array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_msgSet
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_content;
  mu_1_indexType mu_length;
  mu_1_msgSet ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgSet ( void ) {};

  virtual ~mu_1_msgSet(); 
friend int CompareWeight(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = CompareWeight(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = Compare(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = Compare(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_content.MultisetSort();
    mu_length.MultisetSort();
  }
  void print_statistic()
  {
    mu_content.print_statistic();
    mu_length.print_statistic();
  }
  void clear() {
    mu_content.clear();
    mu_length.clear();
 };
  void undefine() {
    mu_content.undefine();
    mu_length.undefine();
 };
  void reset() {
    mu_content.reset();
    mu_length.reset();
 };
  void print() {
    mu_content.print();
    mu_length.print();
  };
  void print_diff(state *prevstate) {
    mu_content.print_diff(prevstate);
    mu_length.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_content.to_state(thestate);
    mu_length.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_msgSet& operator= (const mu_1_msgSet& from) {
    mu_content = from.mu_content;
    mu_length.value(from.mu_length.value());
    return *this;
  };
};

  void mu_1_msgSet::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgSet::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgSet::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_content.set_self_2(name, ".content", os + 0 ); else mu_content.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 808 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_msgSet::~mu_1_msgSet()
{
}

/*** end record declaration ***/
mu_1_msgSet mu_1_msgSet_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_Channel array[ 21 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_Channel& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 20 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 21; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<21; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<21; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<21; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 21; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 21; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 21; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 21; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 21; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 21; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 21; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 240 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_RoleA array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_RoleA& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 5008 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_RoleB array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_RoleB& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 5008 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_RoleC array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_RoleC& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 5008 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_1_RoleD array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_RoleD& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 5008 + os);
    delete[] s;
  }
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7
{
 public:
  mu_1_Message array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 101; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 216 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_9::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_10::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_11::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

class mu_1__type_12
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_12 (const char *n, int os) { set_self(n, os); };
  mu_1__type_12 ( void ) {};
  virtual ~mu_1__type_12 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_12& operator= (const mu_1__type_12& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_12& a, mu_1__type_12& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_12::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_12::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_12::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_12::~mu_1__type_12()
{
}
/*** end array declaration ***/
mu_1__type_12 mu_1__type_12_undefined_var;

class mu_1__type_13
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_13 (const char *n, int os) { set_self(n, os); };
  mu_1__type_13 ( void ) {};
  virtual ~mu_1__type_13 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_13& operator= (const mu_1__type_13& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_13& a, mu_1__type_13& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_13::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_13::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_13::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_13::~mu_1__type_13()
{
}
/*** end array declaration ***/
mu_1__type_13 mu_1__type_13_undefined_var;

const int mu_roleANum = 1;
const int mu_roleBNum = 1;
const int mu_roleCNum = 1;
const int mu_roleDNum = 1;
const int mu_totalFact = 100;
const int mu_msgLength = 5;
const int mu_chanNum = 20;
const int mu_invokeNum = 10;
const int mu_anyAgent = 1;
const int mu_Intruder = 2;
const int mu_UE = 3;
const int mu_SEAF = 4;
const int mu_AUSF = 5;
const int mu_UDM = 6;
const int mu_anyNonce = 7;
const int mu_supi = 8;
const int mu_ue = 9;
const int mu_ue1 = 10;
const int mu_prekey = 11;
const int mu_certa = 12;
const int mu_eapm = 13;
const int mu_bn = 14;
const int mu_ausf = 15;
const int mu_sucm = 16;
const int mu_certc = 17;
const int mu_start = 18;
const int mu_anyNumber = 19;
const int mu_null = 20;
const int mu_agent = 21;
const int mu_nonce = 22;
const int mu_key = 23;
const int mu_aenc = 24;
const int mu_senc = 25;
const int mu_concat = 26;
const int mu_hash = 27;
const int mu_tmp = 28;
const int mu_mod = 29;
const int mu_e = 30;
const int mu_number = 31;
const int mu_PK = 32;
const int mu_SK = 33;
const int mu_Symk = 34;
const int mu_MsgK = 35;
const int mu_A1 = 36;
const int mu_A2 = 37;
const int mu_A3 = 38;
const int mu_A4 = 39;
const int mu_A5 = 40;
const int mu_A6 = 41;
const int mu_A7 = 42;
const int mu_A8 = 43;
const int mu_B1 = 44;
const int mu_B2 = 45;
const int mu_B3 = 46;
const int mu_B4 = 47;
const int mu_B5 = 48;
const int mu_B6 = 49;
const int mu_B7 = 50;
const int mu_B8 = 51;
const int mu_B9 = 52;
const int mu_B10 = 53;
const int mu_B11 = 54;
const int mu_B12 = 55;
const int mu_B13 = 56;
const int mu_B14 = 57;
const int mu_B15 = 58;
const int mu_B16 = 59;
const int mu_C1 = 60;
const int mu_C2 = 61;
const int mu_C3 = 62;
const int mu_C4 = 63;
const int mu_C5 = 64;
const int mu_C6 = 65;
const int mu_C7 = 66;
const int mu_C8 = 67;
const int mu_C9 = 68;
const int mu_C10 = 69;
const int mu_D1 = 70;
const int mu_D2 = 71;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleA("roleA",5040);

/*** Variable declaration ***/
mu_1__type_4 mu_roleB("roleB",10048);

/*** Variable declaration ***/
mu_1__type_5 mu_roleC("roleC",15056);

/*** Variable declaration ***/
mu_1__type_6 mu_roleD("roleD",20064);

/*** Variable declaration ***/
mu_1__type_7 mu_msgs("msgs",25072);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",46888);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",46896);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat1Set("sPat1Set",47712);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",48528);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat2Set("sPat2Set",49344);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",50160);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat3Set("sPat3Set",50976);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",51792);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat4Set("sPat4Set",52608);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",53424);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat5Set("sPat5Set",54240);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",55056);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat6Set("sPat6Set",55872);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",56688);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat7Set("sPat7Set",57504);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",58320);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat8Set("sPat8Set",59136);

/*** Variable declaration ***/
mu_1_msgSet mu_pat9Set("pat9Set",59952);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat9Set("sPat9Set",60768);

/*** Variable declaration ***/
mu_1_msgSet mu_pat10Set("pat10Set",61584);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat10Set("sPat10Set",62400);

/*** Variable declaration ***/
mu_1_msgSet mu_pat11Set("pat11Set",63216);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat11Set("sPat11Set",64032);

/*** Variable declaration ***/
mu_1_msgSet mu_pat12Set("pat12Set",64848);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat12Set("sPat12Set",65664);

/*** Variable declaration ***/
mu_1_msgSet mu_pat13Set("pat13Set",66480);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat13Set("sPat13Set",67296);

/*** Variable declaration ***/
mu_1_msgSet mu_pat14Set("pat14Set",68112);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat14Set("sPat14Set",68928);

/*** Variable declaration ***/
mu_1_msgSet mu_pat15Set("pat15Set",69744);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat15Set("sPat15Set",70560);

/*** Variable declaration ***/
mu_1_msgSet mu_pat16Set("pat16Set",71376);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat16Set("sPat16Set",72192);

/*** Variable declaration ***/
mu_1_msgSet mu_pat17Set("pat17Set",73008);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat17Set("sPat17Set",73824);

/*** Variable declaration ***/
mu_1_msgSet mu_pat18Set("pat18Set",74640);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat18Set("sPat18Set",75456);

/*** Variable declaration ***/
mu_1_msgSet mu_pat19Set("pat19Set",76272);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat19Set("sPat19Set",77088);

/*** Variable declaration ***/
mu_1_msgSet mu_pat20Set("pat20Set",77904);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat20Set("sPat20Set",78720);

/*** Variable declaration ***/
mu_1_msgSet mu_pat21Set("pat21Set",79536);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat21Set("sPat21Set",80352);

/*** Variable declaration ***/
mu_1_msgSet mu_pat22Set("pat22Set",81168);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat22Set("sPat22Set",81984);

/*** Variable declaration ***/
mu_1_msgSet mu_pat23Set("pat23Set",82800);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat23Set("sPat23Set",83616);

/*** Variable declaration ***/
mu_1_msgSet mu_pat24Set("pat24Set",84432);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat24Set("sPat24Set",85248);

/*** Variable declaration ***/
mu_1_msgSet mu_pat25Set("pat25Set",86064);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat25Set("sPat25Set",86880);

/*** Variable declaration ***/
mu_1_msgSet mu_pat26Set("pat26Set",87696);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat26Set("sPat26Set",88512);

/*** Variable declaration ***/
mu_1__type_8 mu_A_known("A_known",89328);

/*** Variable declaration ***/
mu_1__type_9 mu_B_known("B_known",90136);

/*** Variable declaration ***/
mu_1__type_10 mu_C_known("C_known",90944);

/*** Variable declaration ***/
mu_1__type_11 mu_D_known("D_known",91752);

/*** Variable declaration ***/
mu_1__type_12 mu_Spy_known("Spy_known",92560);

/*** Variable declaration ***/
mu_1__type_13 mu_emit("emit",93368);

/*** Variable declaration ***/
mu_1_indexType mu_gnum("gnum",94176);

void mu_get_msgNo(mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",16);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr14;
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
bool mu__boolexpr23;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr23) mu__boolexpr22 = TRUE ;
  else {
bool mu__boolexpr24;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr22 = (mu__boolexpr24) ; 
}
  if (mu__boolexpr22) mu__boolexpr21 = TRUE ;
  else {
bool mu__boolexpr25;
  if (!((mu_msg.mu_msgType) == (mu_tmp))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_msgs[mu_i].mu_tmpPart) == (mu_msg.mu_tmpPart)) ; 
}
  mu__boolexpr21 = (mu__boolexpr25) ; 
}
  if (mu__boolexpr21) mu__boolexpr20 = TRUE ;
  else {
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_msg.mu_msgType) == (mu_mod))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_msgs[mu_i].mu_modMsg1) == (mu_msg.mu_modMsg1)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_msgs[mu_i].mu_modMsg2) == (mu_msg.mu_modMsg2)) ; 
}
  mu__boolexpr20 = (mu__boolexpr26) ; 
}
  if (mu__boolexpr20) mu__boolexpr19 = TRUE ;
  else {
bool mu__boolexpr28;
bool mu__boolexpr29;
  if (!((mu_msg.mu_msgType) == (mu_e))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_msgs[mu_i].mu_expMsg1) == (mu_msg.mu_expMsg1)) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_msgs[mu_i].mu_expMsg2) == (mu_msg.mu_expMsg2)) ; 
}
  mu__boolexpr19 = (mu__boolexpr28) ; 
}
  if (mu__boolexpr19) mu__boolexpr18 = TRUE ;
  else {
bool mu__boolexpr30;
  if (!((mu_msg.mu_msgType) == (mu_number))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_constPart) == (mu_msg.mu_constPart)) ; 
}
  mu__boolexpr18 = (mu__boolexpr30) ; 
}
  if (mu__boolexpr18) mu__boolexpr17 = TRUE ;
  else {
bool mu__boolexpr31;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr31 = FALSE ;
  else {
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_msg.mu_k.mu_encType) != (mu_Symk)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr31 = (mu__boolexpr32) ; 
}
  mu__boolexpr17 = (mu__boolexpr31) ; 
}
  if (mu__boolexpr17) mu__boolexpr16 = TRUE ;
  else {
bool mu__boolexpr34;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr34 = FALSE ;
  else {
bool mu__boolexpr35;
bool mu__boolexpr36;
bool mu__boolexpr37;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msg.mu_k.mu_encType) == (mu_Symk)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_msgs[mu_i].mu_k.mu_ag1) == (mu_msg.mu_k.mu_ag1)) ; 
}
  if (!(mu__boolexpr36)) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msgs[mu_i].mu_k.mu_ag2) == (mu_msg.mu_k.mu_ag2)) ; 
}
  mu__boolexpr34 = (mu__boolexpr35) ; 
}
  mu__boolexpr16 = (mu__boolexpr34) ; 
}
  if (mu__boolexpr16) mu__boolexpr15 = TRUE ;
  else {
bool mu__boolexpr38;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr38 = FALSE ;
  else {
bool mu__boolexpr39;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr38 = (mu__boolexpr39) ; 
}
  mu__boolexpr15 = (mu__boolexpr38) ; 
}
  if (mu__boolexpr15) mu__boolexpr14 = TRUE ;
  else {
bool mu__boolexpr40;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr40 = FALSE ;
  else {
bool mu__boolexpr41;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr40 = (mu__boolexpr41) ; 
}
  mu__boolexpr14 = (mu__boolexpr40) ; 
}
if ( mu__boolexpr14 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr42;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr42 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_44;  mu__while_expr_44 = (mu_j) > (0);
int mu__counter_43 = 0;
while (mu__while_expr_44) {
if ( ++mu__counter_43 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_44 = (mu_j) > (0);
}
};
if ( mu_flag )
{
mu_index = mu_i;
}
}
}
}
};
};
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_printMsg(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

if ( (mu_msg.mu_msgType) == (mu_null) )
{
cout << "null\n";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
cout << ( mu_msg.mu_ag );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
cout << ( mu_msg.mu_noncePart );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_key) )
{
if ( (mu_msg.mu_k.mu_encType) == (mu_PK) )
{
cout << "PK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_SK) )
{
cout << "SK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_Symk) )
{
cout << "SymK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
}
}
}
else
{
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
cout << "aenc{";
mu_printMsg ( mu_msgs[mu_msg.mu_aencMsg] );
cout << "}";
mu_printMsg ( mu_msgs[mu_msg.mu_aencKey] );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
cout << "senc{";
mu_printMsg ( mu_msgs[mu_msg.mu_sencMsg] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_sencKey] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_mod) )
{
cout << "mod{";
mu_printMsg ( mu_msgs[mu_msg.mu_modMsg1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_modMsg2] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_e) )
{
cout << "exp{";
mu_printMsg ( mu_msgs[mu_msg.mu_expMsg1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_expMsg2] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_number) )
{
cout << ( mu_msg.mu_constPart );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_tmp) )
{
cout << "tmp{";
mu_printMsg ( mu_msgs[mu_msg.mu_tmpPart] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
cout << "concat(";
mu_i = 1;
{
  bool mu__while_expr_46;  mu__while_expr_46 = (mu_i) < (mu_msg.mu_length);
int mu__counter_45 = 0;
while (mu__while_expr_46) {
if ( ++mu__counter_45 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_46 = (mu_i) < (mu_msg.mu_length);
}
};
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ")";
}
}
}
}
}
}
}
}
}
}
}
};
/*** end procedure declaration ***/

mu_1_Message mu_inverseKey(mu_1_Message& mu_msgK)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

mu_key_inv.mu_msgType = mu_null;
if ( (mu_msgK.mu_msgType) == (mu_key) )
{
mu_key_inv.mu_msgType = mu_msgK.mu_msgType;
if ( (mu_msgK.mu_k.mu_encType) == (mu_PK) )
{
mu_key_inv.mu_k.mu_encType = mu_SK;
mu_key_inv.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
}
else
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_SK) )
{
mu_key_inv.mu_k.mu_encType = mu_PK;
mu_key_inv.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
}
else
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_Symk) )
{
mu_key_inv.mu_k.mu_encType = mu_Symk;
mu_key_inv.mu_k.mu_ag1 = mu_msgK.mu_k.mu_ag1;
mu_key_inv.mu_k.mu_ag2 = mu_msgK.mu_k.mu_ag2;
}
}
}
}
else
{
if ( (mu_msgK.mu_msgType) != (mu_key) )
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_MsgK) )
{
mu_key_inv.mu_msgType = mu_msgK.mu_msgType;
if ( (mu_msgK.mu_msgType) == (mu_mod) )
{
mu_key_inv = mu_msgs[mu_msgs[mu_msgK.mu_modMsg1].mu_expMsg1];
mu_key_inv.mu_k.mu_encType = mu_MsgK;
}
}
}
}
return mu_key_inv;
	Error.Error("The end of function inverseKey reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct2By11(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr47;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr47 )
{
bool mu__boolexpr48;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr48 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct2By11 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct4By23(const mu_1_indexType& mu_msgNo21,const mu_1_indexType& mu_msgNo32)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr49;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo21))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo32)) ; 
}
if ( mu__boolexpr49 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_aenc;
if (mu_msgNo21.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo21;
if (mu_msgNo32.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo32;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct4By23 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct5By13(const mu_1_indexType& mu_msgNo11,const mu_1_indexType& mu_msgNo32)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr50;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msgNo11))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msgNo32)) ; 
}
if ( mu__boolexpr50 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_aenc;
if (mu_msgNo11.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_msgNo11;
if (mu_msgNo32.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_msgNo32;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct5By13 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct6By1111(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr51;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr51 )
{
bool mu__boolexpr52;
bool mu__boolexpr53;
bool mu__boolexpr54;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr52 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
mu_msgs[mu_index].mu_length = 4;
}
return mu_index;
	Error.Error("The end of function construct6By1111 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct8By111(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr55;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr55 )
{
bool mu__boolexpr56;
bool mu__boolexpr57;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr56 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
mu_msgs[mu_index].mu_length = 3;
}
return mu_index;
	Error.Error("The end of function construct8By111 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct10By5179(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr58;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr58 )
{
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr59 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
mu_msgs[mu_index].mu_length = 4;
}
return mu_index;
	Error.Error("The end of function construct10By5179 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct13By121(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr62;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr62 )
{
bool mu__boolexpr63;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr63 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct13By121 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct18By1617(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr64;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr64 )
{
bool mu__boolexpr65;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr65 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct18By1617 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct23By19202122(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr66;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr66 )
{
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr67 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
mu_msgs[mu_index].mu_length = 4;
}
return mu_index;
	Error.Error("The end of function construct23By19202122 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct25By241(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr70;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr70 )
{
bool mu__boolexpr71;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr71 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct25By241 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct26By1(const mu_1_indexType& mu_msgNo1)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr72;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr72 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct26By1 reached without returning values.");
};
/*** end function declaration ***/

void mu_lookAddPat1(const mu_1_NonceType& mu_supi, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_supi) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_supi.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_supi;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat1(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat1(const mu_1_NonceType& mu_supi, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_74;  mu__while_expr_74 = (mu_i) <= (mu_msg_end);
int mu__counter_73 = 0;
while (mu__while_expr_74) {
if ( ++mu__counter_73 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_supi) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_74 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_supi.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_supi;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat1Set.mu_length = (mu_sPat1Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length].undefine();
else
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat2(const mu_1_NonceType& mu_supi, const mu_1_NonceType& mu_ue, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat1 ( mu_supi, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_ue, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr75;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr75 )
{
bool mu__boolexpr76;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr76 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat2(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr77;
  if (!(mu_flagPart1)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = (mu_flagPart2) ; 
}
if ( mu__boolexpr77 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat2(const mu_1_NonceType& mu_supi, const mu_1_NonceType& mu_ue, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat1 ( mu_supi, mu_i1 );
mu_constructSpat1 ( mu_ue, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_79;  mu__while_expr_79 = (mu_i) <= (mu_msg_end);
int mu__counter_78 = 0;
while (mu__while_expr_79) {
if ( ++mu__counter_78 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr80;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr80 )
{
bool mu__boolexpr81;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr81 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_79 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat2Set.mu_length = (mu_sPat2Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length].undefine();
else
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat3(const mu_1_AgentType& mu_DPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr82;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK))) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_DPk)) ; 
}
if ( mu__boolexpr82 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_PK;
if (mu_DPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_DPk;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
bool mu__boolexpr83;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_msg.mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr83 )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat3(const mu_1_AgentType& mu_DPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_85;  mu__while_expr_85 = (mu_i) <= (mu_msg_end);
int mu__counter_84 = 0;
while (mu__while_expr_85) {
if ( ++mu__counter_84 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr86;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_PK)) ; 
}
if ( mu__boolexpr86 )
{
if ( (mu_msgs[mu_i].mu_k.mu_ag) == (mu_DPk) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_85 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_PK;
if (mu_DPk.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag = mu_DPk;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat3Set.mu_length = (mu_sPat3Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length].undefine();
else
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat4(const mu_1_NonceType& mu_supi, const mu_1_NonceType& mu_ue, const mu_1_AgentType& mu_DPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat2 ( mu_supi, mu_ue, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_DPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr87;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr87 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_aenc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat4(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat2 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr88;
  if (!(mu_flagPart1)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (mu_flagPart2) ; 
}
if ( mu__boolexpr88 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat4(const mu_1_NonceType& mu_supi, const mu_1_NonceType& mu_ue, const mu_1_AgentType& mu_DPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat2 ( mu_supi, mu_ue, mu_i1 );
mu_constructSpat3 ( mu_DPk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_90;  mu__while_expr_90 = (mu_i) <= (mu_msg_end);
int mu__counter_89 = 0;
while (mu__while_expr_90) {
if ( ++mu__counter_89 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr91;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr91 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_90 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_aenc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat4Set.mu_length = (mu_sPat4Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length].undefine();
else
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat5(const mu_1_NonceType& mu_prekey, const mu_1_AgentType& mu_CPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat1 ( mu_prekey, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_CPk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr92;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr92 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_aenc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat5(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_aencMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_aencKey], mu_flagPart2 );
bool mu__boolexpr93;
  if (!(mu_flagPart1)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_flagPart2) ; 
}
if ( mu__boolexpr93 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat5(const mu_1_NonceType& mu_prekey, const mu_1_AgentType& mu_CPk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat1 ( mu_prekey, mu_i1 );
mu_constructSpat3 ( mu_CPk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_95;  mu__while_expr_95 = (mu_i) <= (mu_msg_end);
int mu__counter_94 = 0;
while (mu__while_expr_95) {
if ( ++mu__counter_94 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_aenc) )
{
bool mu__boolexpr96;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_i1))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_msgs[mu_i].mu_aencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr96 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_95 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_aenc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_aencMsg.undefine();
else
  mu_msgs[mu_index].mu_aencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_aencKey.undefine();
else
  mu_msgs[mu_index].mu_aencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat5Set.mu_length = (mu_sPat5Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length].undefine();
else
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat6(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",648);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",864);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",872);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",880);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",888);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",896);

mu_index = 0;
mu_lookAddPat1 ( mu_start, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_ue1, mu_msg2, mu_i2 );
mu_lookAddPat1 ( mu_ausf, mu_msg3, mu_i3 );
mu_lookAddPat1 ( mu_certc, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr97;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr97 )
{
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr98 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat6(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
  if (!(mu_flagPart1)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_flagPart4) ; 
}
if ( mu__boolexpr101 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat6(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",40);

mu_index = 0;
mu_constructSpat1 ( mu_start, mu_i1 );
mu_constructSpat1 ( mu_ue1, mu_i2 );
mu_constructSpat1 ( mu_ausf, mu_i3 );
mu_constructSpat1 ( mu_certc, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_105;  mu__while_expr_105 = (mu_i) <= (mu_msg_end);
int mu__counter_104 = 0;
while (mu__while_expr_105) {
if ( ++mu__counter_104 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr106;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr106 )
{
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr107 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_105 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
mu_sPat6Set.mu_length = (mu_sPat6Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length].undefine();
else
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat7(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat6 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_msg1, mu_i1 );
mu_lookAddPat3 ( mu_ASk, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_hash) )
{
bool mu__boolexpr110;
  if (!((mu_msgs[mu_i].mu_hashMsg) == (mu_i1))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_msgs[mu_i].mu_hashKey) == (mu_i2)) ; 
}
if ( mu__boolexpr110 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_hash;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_hashMsg.undefine();
else
  mu_msgs[mu_index].mu_hashMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_hashKey.undefine();
else
  mu_msgs[mu_index].mu_hashKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat7(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_hash) )
{
mu_isPat6 ( mu_msgs[mu_msg.mu_hashMsg], mu_flagPart1 );
mu_isPat3 ( mu_msgs[mu_msg.mu_hashKey], mu_flagPart2 );
bool mu__boolexpr111;
  if (!(mu_flagPart1)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_flagPart2) ; 
}
if ( mu__boolexpr111 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat7(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_AgentType& mu_ASk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat6 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_i1 );
mu_constructSpat3 ( mu_ASk, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_113;  mu__while_expr_113 = (mu_i) <= (mu_msg_end);
int mu__counter_112 = 0;
while (mu__while_expr_113) {
if ( ++mu__counter_112 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_hash) )
{
bool mu__boolexpr114;
  if (!((mu_msgs[mu_i].mu_hashMsg) == (mu_i1))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_msgs[mu_i].mu_hashKey) == (mu_i2)) ; 
}
if ( mu__boolexpr114 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_113 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_hash;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_hashMsg.undefine();
else
  mu_msgs[mu_index].mu_hashMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_hashKey.undefine();
else
  mu_msgs[mu_index].mu_hashKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat7Set.mu_length = (mu_sPat7Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length].undefine();
else
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat8(const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_prekey, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",648);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",656);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",664);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",672);

mu_index = 0;
mu_lookAddPat1 ( mu_ue1, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_ausf, mu_msg2, mu_i2 );
mu_lookAddPat1 ( mu_prekey, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr115;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr115 )
{
bool mu__boolexpr116;
bool mu__boolexpr117;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr116 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat8(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr118;
bool mu__boolexpr119;
  if (!(mu_flagPart1)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_flagPart3) ; 
}
if ( mu__boolexpr118 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat8(const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_prekey, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

mu_index = 0;
mu_constructSpat1 ( mu_ue1, mu_i1 );
mu_constructSpat1 ( mu_ausf, mu_i2 );
mu_constructSpat1 ( mu_prekey, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_121;  mu__while_expr_121 = (mu_i) <= (mu_msg_end);
int mu__counter_120 = 0;
while (mu__while_expr_121) {
if ( ++mu__counter_120 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr122;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr122 )
{
bool mu__boolexpr123;
bool mu__boolexpr124;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr123 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_121 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
}
mu_sPat8Set.mu_length = (mu_sPat8Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat8Set.mu_content[mu_sPat8Set.mu_length].undefine();
else
  mu_sPat8Set.mu_content[mu_sPat8Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat9(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_NonceType& mu_prekey, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat6 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_msg1, mu_i1 );
mu_lookAddPat8 ( mu_ue1, mu_ausf, mu_prekey, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_hash) )
{
bool mu__boolexpr125;
  if (!((mu_msgs[mu_i].mu_hashMsg) == (mu_i1))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_msgs[mu_i].mu_hashKey) == (mu_i2)) ; 
}
if ( mu__boolexpr125 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_hash;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_hashMsg.undefine();
else
  mu_msgs[mu_index].mu_hashMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_hashKey.undefine();
else
  mu_msgs[mu_index].mu_hashKey = mu_i2;
mu_msgs[mu_i2].mu_k.mu_encType = mu_MsgK;
if (mu_i2.isundefined())
  mu_msgs[mu_i2].mu_k.mu_m.undefine();
else
  mu_msgs[mu_i2].mu_k.mu_m = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat9(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_hash) )
{
mu_isPat6 ( mu_msgs[mu_msg.mu_hashMsg], mu_flagPart1 );
mu_isPat8 ( mu_msgs[mu_msg.mu_hashKey], mu_flagPart2 );
bool mu__boolexpr126;
  if (!(mu_flagPart1)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_flagPart2) ; 
}
if ( mu__boolexpr126 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat9(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_NonceType& mu_prekey, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat6 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_i1 );
mu_constructSpat8 ( mu_ue1, mu_ausf, mu_prekey, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_128;  mu__while_expr_128 = (mu_i) <= (mu_msg_end);
int mu__counter_127 = 0;
while (mu__while_expr_128) {
if ( ++mu__counter_127 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_hash) )
{
bool mu__boolexpr129;
  if (!((mu_msgs[mu_i].mu_hashMsg) == (mu_i1))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_msgs[mu_i].mu_hashKey) == (mu_i2)) ; 
}
if ( mu__boolexpr129 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_128 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_hash;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_hashMsg.undefine();
else
  mu_msgs[mu_index].mu_hashMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_hashKey.undefine();
else
  mu_msgs[mu_index].mu_hashKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat9Set.mu_length = (mu_sPat9Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat9Set.mu_content[mu_sPat9Set.mu_length].undefine();
else
  mu_sPat9Set.mu_content[mu_sPat9Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat10(const mu_1_NonceType& mu_prekey, const mu_1_AgentType& mu_CPk, const mu_1_NonceType& mu_certa, const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",648);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",864);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",872);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",880);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",888);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",896);

mu_index = 0;
mu_lookAddPat5 ( mu_prekey, mu_CPk, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_certa, mu_msg2, mu_i2 );
mu_lookAddPat7 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_ASk, mu_msg3, mu_i3 );
mu_lookAddPat9 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_prekey, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr130;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr130 )
{
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr131 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat10(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat5 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat7 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat9 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!(mu_flagPart1)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = (mu_flagPart4) ; 
}
if ( mu__boolexpr134 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat10(const mu_1_NonceType& mu_prekey, const mu_1_AgentType& mu_CPk, const mu_1_NonceType& mu_certa, const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_AgentType& mu_ASk, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",40);

mu_index = 0;
mu_constructSpat5 ( mu_prekey, mu_CPk, mu_i1 );
mu_constructSpat1 ( mu_certa, mu_i2 );
mu_constructSpat7 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_ASk, mu_i3 );
mu_constructSpat9 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_prekey, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_138;  mu__while_expr_138 = (mu_i) <= (mu_msg_end);
int mu__counter_137 = 0;
while (mu__while_expr_138) {
if ( ++mu__counter_137 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr139;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr139 )
{
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr140 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_138 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
mu_sPat10Set.mu_length = (mu_sPat10Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat10Set.mu_content[mu_sPat10Set.mu_length].undefine();
else
  mu_sPat10Set.mu_content[mu_sPat10Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat11(mu_1_Message& mu_x10, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x10, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat11(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat11(mu_1_Message& mu_x10, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_144;  mu__while_expr_144 = (mu_i) <= (mu_msg_end);
int mu__counter_143 = 0;
while (mu__while_expr_144) {
if ( ++mu__counter_143 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x10.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_144 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x10.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat11Set.mu_length = (mu_sPat11Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat11Set.mu_content[mu_sPat11Set.mu_length].undefine();
else
  mu_sPat11Set.mu_content[mu_sPat11Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat12(mu_1_Message& mu_x1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x1, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat12(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat12(mu_1_Message& mu_x1, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_146;  mu__while_expr_146 = (mu_i) <= (mu_msg_end);
int mu__counter_145 = 0;
while (mu__while_expr_146) {
if ( ++mu__counter_145 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x1.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_146 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x1.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat12Set.mu_length = (mu_sPat12Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat12Set.mu_content[mu_sPat12Set.mu_length].undefine();
else
  mu_sPat12Set.mu_content[mu_sPat12Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat13(mu_1_Message& mu_x1, const mu_1_NonceType& mu_bn, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat12 ( mu_x1, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_bn, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr147;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr147 )
{
bool mu__boolexpr148;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr148 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat13(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat12 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr149;
  if (!(mu_flagPart1)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (mu_flagPart2) ; 
}
if ( mu__boolexpr149 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat13(mu_1_Message& mu_x1, const mu_1_NonceType& mu_bn, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat12 ( mu_x1, mu_i1 );
mu_constructSpat1 ( mu_bn, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_151;  mu__while_expr_151 = (mu_i) <= (mu_msg_end);
int mu__counter_150 = 0;
while (mu__while_expr_151) {
if ( ++mu__counter_150 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr152;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr152 )
{
bool mu__boolexpr153;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr153 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_151 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat13Set.mu_length = (mu_sPat13Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat13Set.mu_content[mu_sPat13Set.mu_length].undefine();
else
  mu_sPat13Set.mu_content[mu_sPat13Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat14(mu_1_Message& mu_x2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x2, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat14(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat14(mu_1_Message& mu_x2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_155;  mu__while_expr_155 = (mu_i) <= (mu_msg_end);
int mu__counter_154 = 0;
while (mu__while_expr_155) {
if ( ++mu__counter_154 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x2.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_155 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x2.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat14Set.mu_length = (mu_sPat14Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat14Set.mu_content[mu_sPat14Set.mu_length].undefine();
else
  mu_sPat14Set.mu_content[mu_sPat14Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat15(mu_1_Message& mu_x3, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x3, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat15(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat15(mu_1_Message& mu_x3, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_157;  mu__while_expr_157 = (mu_i) <= (mu_msg_end);
int mu__counter_156 = 0;
while (mu__while_expr_157) {
if ( ++mu__counter_156 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x3.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_157 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x3.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat15Set.mu_length = (mu_sPat15Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat15Set.mu_content[mu_sPat15Set.mu_length].undefine();
else
  mu_sPat15Set.mu_content[mu_sPat15Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat16(mu_1_Message& mu_x4, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x4, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat16(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat16(mu_1_Message& mu_x4, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_159;  mu__while_expr_159 = (mu_i) <= (mu_msg_end);
int mu__counter_158 = 0;
while (mu__while_expr_159) {
if ( ++mu__counter_158 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x4.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_159 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x4.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat16Set.mu_length = (mu_sPat16Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat16Set.mu_content[mu_sPat16Set.mu_length].undefine();
else
  mu_sPat16Set.mu_content[mu_sPat16Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat17(mu_1_Message& mu_x5, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x5, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat17(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat17(mu_1_Message& mu_x5, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_161;  mu__while_expr_161 = (mu_i) <= (mu_msg_end);
int mu__counter_160 = 0;
while (mu__while_expr_161) {
if ( ++mu__counter_160 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x5.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_161 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x5.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat17Set.mu_length = (mu_sPat17Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat17Set.mu_content[mu_sPat17Set.mu_length].undefine();
else
  mu_sPat17Set.mu_content[mu_sPat17Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat18(mu_1_Message& mu_x4, mu_1_Message& mu_x5, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat16 ( mu_x4, mu_msg1, mu_i1 );
mu_lookAddPat17 ( mu_x5, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr162;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr162 )
{
bool mu__boolexpr163;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr163 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat18(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat16 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat17 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr164;
  if (!(mu_flagPart1)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = (mu_flagPart2) ; 
}
if ( mu__boolexpr164 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat18(mu_1_Message& mu_x4, mu_1_Message& mu_x5, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat16 ( mu_x4, mu_i1 );
mu_constructSpat17 ( mu_x5, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_166;  mu__while_expr_166 = (mu_i) <= (mu_msg_end);
int mu__counter_165 = 0;
while (mu__while_expr_166) {
if ( ++mu__counter_165 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr167;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr167 )
{
bool mu__boolexpr168;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr168 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_166 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat18Set.mu_length = (mu_sPat18Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat18Set.mu_content[mu_sPat18Set.mu_length].undefine();
else
  mu_sPat18Set.mu_content[mu_sPat18Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat19(mu_1_Message& mu_x6, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x6, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat19(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat19(mu_1_Message& mu_x6, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_170;  mu__while_expr_170 = (mu_i) <= (mu_msg_end);
int mu__counter_169 = 0;
while (mu__while_expr_170) {
if ( ++mu__counter_169 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x6.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_170 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x6.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat19Set.mu_length = (mu_sPat19Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat19Set.mu_content[mu_sPat19Set.mu_length].undefine();
else
  mu_sPat19Set.mu_content[mu_sPat19Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat20(mu_1_Message& mu_x7, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x7, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat20(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat20(mu_1_Message& mu_x7, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_172;  mu__while_expr_172 = (mu_i) <= (mu_msg_end);
int mu__counter_171 = 0;
while (mu__while_expr_172) {
if ( ++mu__counter_171 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x7.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_172 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x7.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat20Set.mu_length = (mu_sPat20Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat20Set.mu_content[mu_sPat20Set.mu_length].undefine();
else
  mu_sPat20Set.mu_content[mu_sPat20Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat21(mu_1_Message& mu_x8, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x8, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat21(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat21(mu_1_Message& mu_x8, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_174;  mu__while_expr_174 = (mu_i) <= (mu_msg_end);
int mu__counter_173 = 0;
while (mu__while_expr_174) {
if ( ++mu__counter_173 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x8.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_174 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x8.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat21Set.mu_length = (mu_sPat21Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat21Set.mu_content[mu_sPat21Set.mu_length].undefine();
else
  mu_sPat21Set.mu_content[mu_sPat21Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat22(mu_1_Message& mu_x9, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_x9, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat22(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat22(mu_1_Message& mu_x9, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_176;  mu__while_expr_176 = (mu_i) <= (mu_msg_end);
int mu__counter_175 = 0;
while (mu__while_expr_176) {
if ( ++mu__counter_175 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_x9.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_176 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_x9.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat22Set.mu_length = (mu_sPat22Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat22Set.mu_content[mu_sPat22Set.mu_length].undefine();
else
  mu_sPat22Set.mu_content[mu_sPat22Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat23(mu_1_Message& mu_x6, mu_1_Message& mu_x7, mu_1_Message& mu_x8, mu_1_Message& mu_x9, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",648);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",864);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",872);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",880);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",888);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",896);

mu_index = 0;
mu_lookAddPat19 ( mu_x6, mu_msg1, mu_i1 );
mu_lookAddPat20 ( mu_x7, mu_msg2, mu_i2 );
mu_lookAddPat21 ( mu_x8, mu_msg3, mu_i3 );
mu_lookAddPat22 ( mu_x9, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr177;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr177 )
{
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr178 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat23(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat19 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat20 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat21 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat22 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
  if (!(mu_flagPart1)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = (mu_flagPart4) ; 
}
if ( mu__boolexpr181 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat23(mu_1_Message& mu_x6, mu_1_Message& mu_x7, mu_1_Message& mu_x8, mu_1_Message& mu_x9, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",40);

mu_index = 0;
mu_constructSpat19 ( mu_x6, mu_i1 );
mu_constructSpat20 ( mu_x7, mu_i2 );
mu_constructSpat21 ( mu_x8, mu_i3 );
mu_constructSpat22 ( mu_x9, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_185;  mu__while_expr_185 = (mu_i) <= (mu_msg_end);
int mu__counter_184 = 0;
while (mu__while_expr_185) {
if ( ++mu__counter_184 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr186;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr186 )
{
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr187 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_185 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
mu_sPat23Set.mu_length = (mu_sPat23Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat23Set.mu_content[mu_sPat23Set.mu_length].undefine();
else
  mu_sPat23Set.mu_content[mu_sPat23Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat24(mu_1_Message& mu_m1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_m1, mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat24(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat24(mu_1_Message& mu_m1, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_191;  mu__while_expr_191 = (mu_i) <= (mu_msg_end);
int mu__counter_190 = 0;
while (mu__while_expr_191) {
if ( ++mu__counter_190 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_m1.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_191 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_m1.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat24Set.mu_length = (mu_sPat24Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat24Set.mu_content[mu_sPat24Set.mu_length].undefine();
else
  mu_sPat24Set.mu_content[mu_sPat24Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat25(mu_1_Message& mu_m1, const mu_1_NonceType& mu_bn, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat24 ( mu_m1, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_bn, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr192;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr192 )
{
bool mu__boolexpr193;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr193 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat25(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat24 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr194;
  if (!(mu_flagPart1)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_flagPart2) ; 
}
if ( mu__boolexpr194 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat25(mu_1_Message& mu_m1, const mu_1_NonceType& mu_bn, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat24 ( mu_m1, mu_i1 );
mu_constructSpat1 ( mu_bn, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_196;  mu__while_expr_196 = (mu_i) <= (mu_msg_end);
int mu__counter_195 = 0;
while (mu__while_expr_196) {
if ( ++mu__counter_195 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr197;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr197 )
{
bool mu__boolexpr198;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr198 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_196 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat25Set.mu_length = (mu_sPat25Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat25Set.mu_content[mu_sPat25Set.mu_length].undefine();
else
  mu_sPat25Set.mu_content[mu_sPat25Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat26(const mu_1_NonceType& mu_ue, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",216);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",224);

mu_index = 0;
mu_lookAddPat1 ( mu_ue, mu_msg1, mu_i1 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr199;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr199 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat26(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
if ( mu_flagPart1 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat26(const mu_1_NonceType& mu_ue, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

mu_index = 0;
mu_constructSpat1 ( mu_ue, mu_i1 );
mu_i = 1;
{
  bool mu__while_expr_201;  mu__while_expr_201 = (mu_i) <= (mu_msg_end);
int mu__counter_200 = 0;
while (mu__while_expr_201) {
if ( ++mu__counter_200 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr202;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_msgs[mu_i].mu_length) == (1)) ; 
}
if ( mu__boolexpr202 )
{
if ( (mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_201 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat26Set.mu_length = (mu_sPat26Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat26Set.mu_content[mu_sPat26Set.mu_length].undefine();
else
  mu_sPat26Set.mu_content[mu_sPat26Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_cons1(const mu_1_NonceType& mu_supi, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_supi, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct1(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_supi)
{
mu_supi = mu_msg.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_NonceType& mu_supi, const mu_1_NonceType& mu_ue, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_supi, mu_ue, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct2(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_supi, mu_1_NonceType& mu_ue)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",432);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_supi = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_ue = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_AgentType& mu_DPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_DPk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_NonceType& mu_supi, const mu_1_NonceType& mu_ue, const mu_1_AgentType& mu_DPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_supi, mu_ue, mu_DPk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct4(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_supi, mu_1_NonceType& mu_ue, mu_1_AgentType& mu_DPk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_aencMsg("aencMsg",40);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo1("msgNo1",256);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo2("msgNo2",264);

/*** Variable declaration ***/
mu_1_Message mu_invmsg("invmsg",272);

mu_aencMsg.clear();
mu_get_msgNo ( mu_agmsg, mu_msgNo1 );
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (mu_A_known[mu_msgNo1]) mu__boolexpr205 = TRUE ;
  else {
  mu__boolexpr205 = (mu_B_known[mu_msgNo1]) ; 
}
  if (mu__boolexpr205) mu__boolexpr204 = TRUE ;
  else {
  mu__boolexpr204 = (mu_C_known[mu_msgNo1]) ; 
}
  if (mu__boolexpr204) mu__boolexpr203 = TRUE ;
  else {
  mu__boolexpr203 = (mu_D_known[mu_msgNo1]) ; 
}
if ( mu__boolexpr203 )
{
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_invmsg = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
mu_get_msgNo ( mu_invmsg, mu_msgNo2 );
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
  if (mu_A_known[mu_msgNo2]) mu__boolexpr208 = TRUE ;
  else {
  mu__boolexpr208 = (mu_B_known[mu_msgNo2]) ; 
}
  if (mu__boolexpr208) mu__boolexpr207 = TRUE ;
  else {
  mu__boolexpr207 = (mu_C_known[mu_msgNo2]) ; 
}
  if (mu__boolexpr207) mu__boolexpr206 = TRUE ;
  else {
  mu__boolexpr206 = (mu_D_known[mu_msgNo2]) ; 
}
if ( mu__boolexpr206 )
{
mu_DPk = mu_k1.mu_ag;
mu_aencMsg = mu_msgs[mu_msg.mu_aencMsg];
mu_destruct2 ( mu_agmsg, mu_aencMsg, mu_supi, mu_ue );
}
else
{
mu_supi.clear();
mu_ue.clear();
mu_DPk.clear();
}
}
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_NonceType& mu_prekey, const mu_1_AgentType& mu_CPk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_prekey, mu_CPk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_prekey, mu_1_AgentType& mu_CPk)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgKey("msgKey",40);

/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",256);

/*** Variable declaration ***/
mu_1_Message mu_invmsg("invmsg",472);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo1("msgNo1",688);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo2("msgNo2",696);

mu_msg1.clear();
mu_get_msgNo ( mu_agmsg, mu_msgNo1 );
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
  if (mu_A_known[mu_msgNo1]) mu__boolexpr211 = TRUE ;
  else {
  mu__boolexpr211 = (mu_B_known[mu_msgNo1]) ; 
}
  if (mu__boolexpr211) mu__boolexpr210 = TRUE ;
  else {
  mu__boolexpr210 = (mu_C_known[mu_msgNo1]) ; 
}
  if (mu__boolexpr210) mu__boolexpr209 = TRUE ;
  else {
  mu__boolexpr209 = (mu_D_known[mu_msgNo1]) ; 
}
if ( mu__boolexpr209 )
{
mu_msgKey = mu_msgs[mu_msg.mu_aencKey];
mu_invmsg = mu_inverseKey( mu_msgs[mu_msg.mu_aencKey] );
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
  if (mu_A_known[mu_msgNo2]) mu__boolexpr214 = TRUE ;
  else {
  mu__boolexpr214 = (mu_B_known[mu_msgNo2]) ; 
}
  if (mu__boolexpr214) mu__boolexpr213 = TRUE ;
  else {
  mu__boolexpr213 = (mu_C_known[mu_msgNo2]) ; 
}
  if (mu__boolexpr213) mu__boolexpr212 = TRUE ;
  else {
  mu__boolexpr212 = (mu_D_known[mu_msgNo2]) ; 
}
if ( mu__boolexpr212 )
{
mu_k1 = mu_msgs[mu_msg.mu_aencKey].mu_k;
mu_CPk = mu_k1.mu_ag;
mu_msg1 = mu_msgs[mu_msg.mu_aencMsg];
mu_prekey = mu_msg1.mu_noncePart;
}
else
{
mu_prekey.clear();
mu_CPk.clear();
}
}
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct6(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_start, mu_1_NonceType& mu_ue1, mu_1_NonceType& mu_ausf, mu_1_NonceType& mu_certc)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",648);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",864);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_start = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_ue1 = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_ausf = mu_msgNum3.mu_noncePart;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_certc = mu_msgNum4.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_ASk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons8(const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_prekey, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat8 ( mu_ue1, mu_ausf, mu_prekey, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct8(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_ue1, mu_1_NonceType& mu_ausf, mu_1_NonceType& mu_prekey)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",648);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_ue1 = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_ausf = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_prekey = mu_msgNum3.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons9(const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_NonceType& mu_prekey, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat9 ( mu_start, mu_ue1, mu_ausf, mu_certc, mu_prekey, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons10(const mu_1_NonceType& mu_prekey, const mu_1_AgentType& mu_CPk, const mu_1_NonceType& mu_certa, const mu_1_NonceType& mu_start, const mu_1_NonceType& mu_ue1, const mu_1_NonceType& mu_ausf, const mu_1_NonceType& mu_certc, const mu_1_AgentType& mu_ASk, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat10 ( mu_prekey, mu_CPk, mu_certa, mu_start, mu_ue1, mu_ausf, mu_certc, mu_ASk, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct10(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_prekey, mu_1_AgentType& mu_CPk, mu_1_NonceType& mu_certa, mu_1_NonceType& mu_start, mu_1_NonceType& mu_ue1, mu_1_NonceType& mu_ausf, mu_1_NonceType& mu_certc, mu_1_AgentType& mu_ASk)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",648);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",864);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_destruct5 ( mu_agmsg, mu_msgNum1, mu_prekey, mu_CPk );
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_certa = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons11(mu_1_Message& mu_x10, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat11 ( mu_x10, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct11(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x10)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x10 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons12(mu_1_Message& mu_x1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat12 ( mu_x1, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct12(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x1)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x1 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons13(mu_1_Message& mu_x1, const mu_1_NonceType& mu_bn, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat13 ( mu_x1, mu_bn, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct13(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x1, mu_1_NonceType& mu_bn)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",432);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_x1.mu_msgType = mu_tmp;
mu_x1.mu_tmpPart = mu_msg.mu_concatPart[1];
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_bn = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons14(mu_1_Message& mu_x2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat14 ( mu_x2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct14(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x2)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x2 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons15(mu_1_Message& mu_x3, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat15 ( mu_x3, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct15(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x3)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x3 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons16(mu_1_Message& mu_x4, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat16 ( mu_x4, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct16(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x4)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x4 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons17(mu_1_Message& mu_x5, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat17 ( mu_x5, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct17(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x5)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x5 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons18(mu_1_Message& mu_x4, mu_1_Message& mu_x5, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat18 ( mu_x4, mu_x5, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct18(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x4, mu_1_Message& mu_x5)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",432);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_x4.mu_msgType = mu_tmp;
mu_x4.mu_tmpPart = mu_msg.mu_concatPart[1];
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_x5.mu_msgType = mu_tmp;
mu_x5.mu_tmpPart = mu_msg.mu_concatPart[2];
};
/*** end procedure declaration ***/

void mu_cons19(mu_1_Message& mu_x6, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat19 ( mu_x6, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct19(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x6)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x6 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons20(mu_1_Message& mu_x7, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat20 ( mu_x7, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct20(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x7)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x7 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons21(mu_1_Message& mu_x8, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat21 ( mu_x8, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct21(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x8)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x8 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons22(mu_1_Message& mu_x9, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat22 ( mu_x9, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct22(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x9)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_x9 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons23(mu_1_Message& mu_x6, mu_1_Message& mu_x7, mu_1_Message& mu_x8, mu_1_Message& mu_x9, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat23 ( mu_x6, mu_x7, mu_x8, mu_x9, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct23(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_x6, mu_1_Message& mu_x7, mu_1_Message& mu_x8, mu_1_Message& mu_x9)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",648);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",864);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_x6.mu_msgType = mu_tmp;
mu_x6.mu_tmpPart = mu_msg.mu_concatPart[1];
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_x7.mu_msgType = mu_tmp;
mu_x7.mu_tmpPart = mu_msg.mu_concatPart[2];
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_x8.mu_msgType = mu_tmp;
mu_x8.mu_tmpPart = mu_msg.mu_concatPart[3];
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_x9.mu_msgType = mu_tmp;
mu_x9.mu_tmpPart = mu_msg.mu_concatPart[4];
};
/*** end procedure declaration ***/

void mu_cons24(mu_1_Message& mu_m1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat24 ( mu_m1, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct24(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_m1)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_m1 = mu_msg;
};
/*** end procedure declaration ***/

void mu_cons25(mu_1_Message& mu_m1, const mu_1_NonceType& mu_bn, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat25 ( mu_m1, mu_bn, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct25(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_m1, mu_1_NonceType& mu_bn)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",432);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_m1.mu_msgType = mu_tmp;
mu_m1.mu_tmpPart = mu_msg.mu_concatPart[1];
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_bn = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons26(const mu_1_NonceType& mu_ue, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat26 ( mu_ue, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct26(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_ue)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",216);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_ue = mu_msgNum1.mu_noncePart;
};
/*** end procedure declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 5; mu_i++) {
bool mu__boolexpr215;
  if (!((mu_msgNo) != (0))) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr215 )
{
mu_flag = mu_true;
}
};
};
return mu_flag;
	Error.Error("The end of function exist reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchAgent(mu_1_AgentType& mu_locAg,mu_1_AgentType& mu_Ag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Ag) == (mu_anyAgent) )
{
mu_flag = mu_true;
if (mu_locAg.isundefined())
  mu_Ag.undefine();
else
  mu_Ag = mu_locAg;
}
else
{
if ( (mu_locAg) == (mu_Ag) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchAgent reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchTmp(mu_1_Message& mu_locm,mu_1_Message& mu_m)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

/*** Variable declaration ***/
mu_1_indexType mu_index1("index1",8);

/*** Variable declaration ***/
mu_1_indexType mu_index2("index2",16);

mu_flag = mu_false;
mu_get_msgNo ( mu_m, mu_index2 );
mu_get_msgNo ( mu_locm, mu_index1 );
if ( (mu_m.mu_msgType) == (mu_tmp) )
{
if ( (mu_m.mu_tmpPart) == (0) )
{
mu_flag = mu_true;
mu_m = mu_locm;
}
}
else
{
if ( (mu_index1) == (mu_index2) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchTmp reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchNonce(mu_1_NonceType& mu_locNa,mu_1_NonceType& mu_Na)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Na) == (mu_anyNonce) )
{
mu_flag = mu_true;
if (mu_locNa.isundefined())
  mu_Na.undefine();
else
  mu_Na = mu_locNa;
}
else
{
if ( (mu_locNa) == (mu_Na) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchNonce reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchNumber(mu_1_ConstType& mu_locNm,mu_1_ConstType& mu_Nm)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Nm) == (mu_anyNumber) )
{
mu_flag = mu_true;
if (mu_locNm.isundefined())
  mu_Nm.undefine();
else
  mu_Nm = mu_locNm;
}
else
{
if ( (mu_locNm) == (mu_Nm) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchNumber reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_match(mu_1_Message& mu_m1,mu_1_Message& mu_m2)
{
/*** Variable declaration ***/
mu_0_boolean mu_concatFlag("concatFlag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",16);

if ( (mu_m1.mu_msgType) == (mu_tmp) )
{
return mu_true;
}
else
{
bool mu__boolexpr216;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr216 )
{
return mu_matchAgent( mu_m2.mu_ag, mu_m1.mu_ag );
}
else
{
bool mu__boolexpr217;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr217 )
{
return mu_matchNonce( mu_m2.mu_noncePart, mu_m1.mu_noncePart );
}
else
{
bool mu__boolexpr218;
  if (!((mu_m1.mu_msgType) == (mu_number))) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_m2.mu_msgType) == (mu_number)) ; 
}
if ( mu__boolexpr218 )
{
return mu_matchNumber( mu_m2.mu_constPart, mu_m1.mu_constPart );
}
else
{
bool mu__boolexpr219;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr219 )
{
if ( (mu_m1.mu_k.mu_encType) == (mu_PK) )
{
bool mu__boolexpr220;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr220;
}
else
{
if ( (mu_m1.mu_k.mu_encType) == (mu_SK) )
{
bool mu__boolexpr221;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr221;
}
else
{
if ( (mu_m1.mu_k.mu_encType) == (mu_Symk) )
{
bool mu__boolexpr222;
bool mu__boolexpr223;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_matchAgent( mu_m1.mu_k.mu_ag1, mu_m2.mu_k.mu_ag1 )) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (mu_matchAgent( mu_m1.mu_k.mu_ag2, mu_m2.mu_k.mu_ag2 )) ; 
}
return mu__boolexpr222;
}
}
}
}
else
{
bool mu__boolexpr224;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr224 )
{
bool mu__boolexpr225;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr225;
}
else
{
bool mu__boolexpr226;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr226 )
{
return mu_true;
}
else
{
bool mu__boolexpr227;
  if (!((mu_m1.mu_msgType) == (mu_mod))) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_m2.mu_msgType) == (mu_mod)) ; 
}
if ( mu__boolexpr227 )
{
bool mu__boolexpr228;
  if (!(mu_match( mu_msgs[mu_m1.mu_modMsg1], mu_msgs[mu_m2.mu_modMsg1] ))) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (mu_match( mu_msgs[mu_m1.mu_modMsg2], mu_msgs[mu_m2.mu_modMsg2] )) ; 
}
return mu__boolexpr228;
}
else
{
bool mu__boolexpr229;
  if (!((mu_m1.mu_msgType) == (mu_e))) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_m2.mu_msgType) == (mu_e)) ; 
}
if ( mu__boolexpr229 )
{
bool mu__boolexpr230;
  if (!(mu_match( mu_msgs[mu_m1.mu_expMsg1], mu_msgs[mu_m2.mu_expMsg1] ))) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = (mu_match( mu_msgs[mu_m1.mu_expMsg2], mu_msgs[mu_m2.mu_expMsg2] )) ; 
}
return mu__boolexpr230;
}
else
{
bool mu__boolexpr231;
bool mu__boolexpr232;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr231 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr235;
  if (!((mu_i) > (0))) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_234;  mu__while_expr_234 = mu__boolexpr235;
int mu__counter_233 = 0;
while (mu__while_expr_234) {
if ( ++mu__counter_233 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr236;
  if (!(mu_concatFlag)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr236;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr237;
  if (!((mu_i) > (0))) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (mu_concatFlag) ; 
}
mu__while_expr_234 = mu__boolexpr237;
}
};
return mu_concatFlag;
}
else
{
return mu_false;
}
}
}
}
}
}
}
}
}
}
	Error.Error("The end of function match reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchPat(mu_1_Message& mu_m1,mu_1_msgSet& mu_sPatnSet)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

mu_flag = mu_false;
mu_i = 1;
{
  bool mu__while_expr_239;  mu__while_expr_239 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
int mu__counter_238 = 0;
while (mu__while_expr_239) {
if ( ++mu__counter_238 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( mu_match( mu_msgs[mu_sPatnSet.mu_content[mu_i]], mu_m1 ) )
{
mu_flag = mu_true;
}
mu_i = (mu_i) + (1);
};
mu__while_expr_239 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
}
};
return mu_flag;
	Error.Error("The end of function matchPat reached without returning values.");
};
/*** end function declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_ch.clear();
  mu_roleA.clear();
  mu_roleB.clear();
  mu_roleC.clear();
  mu_roleD.clear();
  mu_msgs.clear();
  mu_msg_end.clear();
  mu_pat1Set.clear();
  mu_sPat1Set.clear();
  mu_pat2Set.clear();
  mu_sPat2Set.clear();
  mu_pat3Set.clear();
  mu_sPat3Set.clear();
  mu_pat4Set.clear();
  mu_sPat4Set.clear();
  mu_pat5Set.clear();
  mu_sPat5Set.clear();
  mu_pat6Set.clear();
  mu_sPat6Set.clear();
  mu_pat7Set.clear();
  mu_sPat7Set.clear();
  mu_pat8Set.clear();
  mu_sPat8Set.clear();
  mu_pat9Set.clear();
  mu_sPat9Set.clear();
  mu_pat10Set.clear();
  mu_sPat10Set.clear();
  mu_pat11Set.clear();
  mu_sPat11Set.clear();
  mu_pat12Set.clear();
  mu_sPat12Set.clear();
  mu_pat13Set.clear();
  mu_sPat13Set.clear();
  mu_pat14Set.clear();
  mu_sPat14Set.clear();
  mu_pat15Set.clear();
  mu_sPat15Set.clear();
  mu_pat16Set.clear();
  mu_sPat16Set.clear();
  mu_pat17Set.clear();
  mu_sPat17Set.clear();
  mu_pat18Set.clear();
  mu_sPat18Set.clear();
  mu_pat19Set.clear();
  mu_sPat19Set.clear();
  mu_pat20Set.clear();
  mu_sPat20Set.clear();
  mu_pat21Set.clear();
  mu_sPat21Set.clear();
  mu_pat22Set.clear();
  mu_sPat22Set.clear();
  mu_pat23Set.clear();
  mu_sPat23Set.clear();
  mu_pat24Set.clear();
  mu_sPat24Set.clear();
  mu_pat25Set.clear();
  mu_sPat25Set.clear();
  mu_pat26Set.clear();
  mu_sPat26Set.clear();
  mu_A_known.clear();
  mu_B_known.clear();
  mu_C_known.clear();
  mu_D_known.clear();
  mu_Spy_known.clear();
  mu_emit.clear();
  mu_gnum.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_roleA.undefine();
  mu_roleB.undefine();
  mu_roleC.undefine();
  mu_roleD.undefine();
  mu_msgs.undefine();
  mu_msg_end.undefine();
  mu_pat1Set.undefine();
  mu_sPat1Set.undefine();
  mu_pat2Set.undefine();
  mu_sPat2Set.undefine();
  mu_pat3Set.undefine();
  mu_sPat3Set.undefine();
  mu_pat4Set.undefine();
  mu_sPat4Set.undefine();
  mu_pat5Set.undefine();
  mu_sPat5Set.undefine();
  mu_pat6Set.undefine();
  mu_sPat6Set.undefine();
  mu_pat7Set.undefine();
  mu_sPat7Set.undefine();
  mu_pat8Set.undefine();
  mu_sPat8Set.undefine();
  mu_pat9Set.undefine();
  mu_sPat9Set.undefine();
  mu_pat10Set.undefine();
  mu_sPat10Set.undefine();
  mu_pat11Set.undefine();
  mu_sPat11Set.undefine();
  mu_pat12Set.undefine();
  mu_sPat12Set.undefine();
  mu_pat13Set.undefine();
  mu_sPat13Set.undefine();
  mu_pat14Set.undefine();
  mu_sPat14Set.undefine();
  mu_pat15Set.undefine();
  mu_sPat15Set.undefine();
  mu_pat16Set.undefine();
  mu_sPat16Set.undefine();
  mu_pat17Set.undefine();
  mu_sPat17Set.undefine();
  mu_pat18Set.undefine();
  mu_sPat18Set.undefine();
  mu_pat19Set.undefine();
  mu_sPat19Set.undefine();
  mu_pat20Set.undefine();
  mu_sPat20Set.undefine();
  mu_pat21Set.undefine();
  mu_sPat21Set.undefine();
  mu_pat22Set.undefine();
  mu_sPat22Set.undefine();
  mu_pat23Set.undefine();
  mu_sPat23Set.undefine();
  mu_pat24Set.undefine();
  mu_sPat24Set.undefine();
  mu_pat25Set.undefine();
  mu_sPat25Set.undefine();
  mu_pat26Set.undefine();
  mu_sPat26Set.undefine();
  mu_A_known.undefine();
  mu_B_known.undefine();
  mu_C_known.undefine();
  mu_D_known.undefine();
  mu_Spy_known.undefine();
  mu_emit.undefine();
  mu_gnum.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_roleA.reset();
  mu_roleB.reset();
  mu_roleC.reset();
  mu_roleD.reset();
  mu_msgs.reset();
  mu_msg_end.reset();
  mu_pat1Set.reset();
  mu_sPat1Set.reset();
  mu_pat2Set.reset();
  mu_sPat2Set.reset();
  mu_pat3Set.reset();
  mu_sPat3Set.reset();
  mu_pat4Set.reset();
  mu_sPat4Set.reset();
  mu_pat5Set.reset();
  mu_sPat5Set.reset();
  mu_pat6Set.reset();
  mu_sPat6Set.reset();
  mu_pat7Set.reset();
  mu_sPat7Set.reset();
  mu_pat8Set.reset();
  mu_sPat8Set.reset();
  mu_pat9Set.reset();
  mu_sPat9Set.reset();
  mu_pat10Set.reset();
  mu_sPat10Set.reset();
  mu_pat11Set.reset();
  mu_sPat11Set.reset();
  mu_pat12Set.reset();
  mu_sPat12Set.reset();
  mu_pat13Set.reset();
  mu_sPat13Set.reset();
  mu_pat14Set.reset();
  mu_sPat14Set.reset();
  mu_pat15Set.reset();
  mu_sPat15Set.reset();
  mu_pat16Set.reset();
  mu_sPat16Set.reset();
  mu_pat17Set.reset();
  mu_sPat17Set.reset();
  mu_pat18Set.reset();
  mu_sPat18Set.reset();
  mu_pat19Set.reset();
  mu_sPat19Set.reset();
  mu_pat20Set.reset();
  mu_sPat20Set.reset();
  mu_pat21Set.reset();
  mu_sPat21Set.reset();
  mu_pat22Set.reset();
  mu_sPat22Set.reset();
  mu_pat23Set.reset();
  mu_sPat23Set.reset();
  mu_pat24Set.reset();
  mu_sPat24Set.reset();
  mu_pat25Set.reset();
  mu_sPat25Set.reset();
  mu_pat26Set.reset();
  mu_sPat26Set.reset();
  mu_A_known.reset();
  mu_B_known.reset();
  mu_C_known.reset();
  mu_D_known.reset();
  mu_Spy_known.reset();
  mu_emit.reset();
  mu_gnum.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print();
  mu_roleA.print();
  mu_roleB.print();
  mu_roleC.print();
  mu_roleD.print();
  mu_msgs.print();
  mu_msg_end.print();
  mu_pat1Set.print();
  mu_sPat1Set.print();
  mu_pat2Set.print();
  mu_sPat2Set.print();
  mu_pat3Set.print();
  mu_sPat3Set.print();
  mu_pat4Set.print();
  mu_sPat4Set.print();
  mu_pat5Set.print();
  mu_sPat5Set.print();
  mu_pat6Set.print();
  mu_sPat6Set.print();
  mu_pat7Set.print();
  mu_sPat7Set.print();
  mu_pat8Set.print();
  mu_sPat8Set.print();
  mu_pat9Set.print();
  mu_sPat9Set.print();
  mu_pat10Set.print();
  mu_sPat10Set.print();
  mu_pat11Set.print();
  mu_sPat11Set.print();
  mu_pat12Set.print();
  mu_sPat12Set.print();
  mu_pat13Set.print();
  mu_sPat13Set.print();
  mu_pat14Set.print();
  mu_sPat14Set.print();
  mu_pat15Set.print();
  mu_sPat15Set.print();
  mu_pat16Set.print();
  mu_sPat16Set.print();
  mu_pat17Set.print();
  mu_sPat17Set.print();
  mu_pat18Set.print();
  mu_sPat18Set.print();
  mu_pat19Set.print();
  mu_sPat19Set.print();
  mu_pat20Set.print();
  mu_sPat20Set.print();
  mu_pat21Set.print();
  mu_sPat21Set.print();
  mu_pat22Set.print();
  mu_sPat22Set.print();
  mu_pat23Set.print();
  mu_sPat23Set.print();
  mu_pat24Set.print();
  mu_sPat24Set.print();
  mu_pat25Set.print();
  mu_sPat25Set.print();
  mu_pat26Set.print();
  mu_sPat26Set.print();
  mu_A_known.print();
  mu_B_known.print();
  mu_C_known.print();
  mu_D_known.print();
  mu_Spy_known.print();
  mu_emit.print();
  mu_gnum.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print_statistic();
  mu_roleA.print_statistic();
  mu_roleB.print_statistic();
  mu_roleC.print_statistic();
  mu_roleD.print_statistic();
  mu_msgs.print_statistic();
  mu_msg_end.print_statistic();
  mu_pat1Set.print_statistic();
  mu_sPat1Set.print_statistic();
  mu_pat2Set.print_statistic();
  mu_sPat2Set.print_statistic();
  mu_pat3Set.print_statistic();
  mu_sPat3Set.print_statistic();
  mu_pat4Set.print_statistic();
  mu_sPat4Set.print_statistic();
  mu_pat5Set.print_statistic();
  mu_sPat5Set.print_statistic();
  mu_pat6Set.print_statistic();
  mu_sPat6Set.print_statistic();
  mu_pat7Set.print_statistic();
  mu_sPat7Set.print_statistic();
  mu_pat8Set.print_statistic();
  mu_sPat8Set.print_statistic();
  mu_pat9Set.print_statistic();
  mu_sPat9Set.print_statistic();
  mu_pat10Set.print_statistic();
  mu_sPat10Set.print_statistic();
  mu_pat11Set.print_statistic();
  mu_sPat11Set.print_statistic();
  mu_pat12Set.print_statistic();
  mu_sPat12Set.print_statistic();
  mu_pat13Set.print_statistic();
  mu_sPat13Set.print_statistic();
  mu_pat14Set.print_statistic();
  mu_sPat14Set.print_statistic();
  mu_pat15Set.print_statistic();
  mu_sPat15Set.print_statistic();
  mu_pat16Set.print_statistic();
  mu_sPat16Set.print_statistic();
  mu_pat17Set.print_statistic();
  mu_sPat17Set.print_statistic();
  mu_pat18Set.print_statistic();
  mu_sPat18Set.print_statistic();
  mu_pat19Set.print_statistic();
  mu_sPat19Set.print_statistic();
  mu_pat20Set.print_statistic();
  mu_sPat20Set.print_statistic();
  mu_pat21Set.print_statistic();
  mu_sPat21Set.print_statistic();
  mu_pat22Set.print_statistic();
  mu_sPat22Set.print_statistic();
  mu_pat23Set.print_statistic();
  mu_sPat23Set.print_statistic();
  mu_pat24Set.print_statistic();
  mu_sPat24Set.print_statistic();
  mu_pat25Set.print_statistic();
  mu_sPat25Set.print_statistic();
  mu_pat26Set.print_statistic();
  mu_sPat26Set.print_statistic();
  mu_A_known.print_statistic();
  mu_B_known.print_statistic();
  mu_C_known.print_statistic();
  mu_D_known.print_statistic();
  mu_Spy_known.print_statistic();
  mu_emit.print_statistic();
  mu_gnum.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_ch.print_diff(prevstate);
    mu_roleA.print_diff(prevstate);
    mu_roleB.print_diff(prevstate);
    mu_roleC.print_diff(prevstate);
    mu_roleD.print_diff(prevstate);
    mu_msgs.print_diff(prevstate);
    mu_msg_end.print_diff(prevstate);
    mu_pat1Set.print_diff(prevstate);
    mu_sPat1Set.print_diff(prevstate);
    mu_pat2Set.print_diff(prevstate);
    mu_sPat2Set.print_diff(prevstate);
    mu_pat3Set.print_diff(prevstate);
    mu_sPat3Set.print_diff(prevstate);
    mu_pat4Set.print_diff(prevstate);
    mu_sPat4Set.print_diff(prevstate);
    mu_pat5Set.print_diff(prevstate);
    mu_sPat5Set.print_diff(prevstate);
    mu_pat6Set.print_diff(prevstate);
    mu_sPat6Set.print_diff(prevstate);
    mu_pat7Set.print_diff(prevstate);
    mu_sPat7Set.print_diff(prevstate);
    mu_pat8Set.print_diff(prevstate);
    mu_sPat8Set.print_diff(prevstate);
    mu_pat9Set.print_diff(prevstate);
    mu_sPat9Set.print_diff(prevstate);
    mu_pat10Set.print_diff(prevstate);
    mu_sPat10Set.print_diff(prevstate);
    mu_pat11Set.print_diff(prevstate);
    mu_sPat11Set.print_diff(prevstate);
    mu_pat12Set.print_diff(prevstate);
    mu_sPat12Set.print_diff(prevstate);
    mu_pat13Set.print_diff(prevstate);
    mu_sPat13Set.print_diff(prevstate);
    mu_pat14Set.print_diff(prevstate);
    mu_sPat14Set.print_diff(prevstate);
    mu_pat15Set.print_diff(prevstate);
    mu_sPat15Set.print_diff(prevstate);
    mu_pat16Set.print_diff(prevstate);
    mu_sPat16Set.print_diff(prevstate);
    mu_pat17Set.print_diff(prevstate);
    mu_sPat17Set.print_diff(prevstate);
    mu_pat18Set.print_diff(prevstate);
    mu_sPat18Set.print_diff(prevstate);
    mu_pat19Set.print_diff(prevstate);
    mu_sPat19Set.print_diff(prevstate);
    mu_pat20Set.print_diff(prevstate);
    mu_sPat20Set.print_diff(prevstate);
    mu_pat21Set.print_diff(prevstate);
    mu_sPat21Set.print_diff(prevstate);
    mu_pat22Set.print_diff(prevstate);
    mu_sPat22Set.print_diff(prevstate);
    mu_pat23Set.print_diff(prevstate);
    mu_sPat23Set.print_diff(prevstate);
    mu_pat24Set.print_diff(prevstate);
    mu_sPat24Set.print_diff(prevstate);
    mu_pat25Set.print_diff(prevstate);
    mu_sPat25Set.print_diff(prevstate);
    mu_pat26Set.print_diff(prevstate);
    mu_sPat26Set.print_diff(prevstate);
    mu_A_known.print_diff(prevstate);
    mu_B_known.print_diff(prevstate);
    mu_C_known.print_diff(prevstate);
    mu_D_known.print_diff(prevstate);
    mu_Spy_known.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
    mu_gnum.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_ch.to_state( newstate );
  mu_roleA.to_state( newstate );
  mu_roleB.to_state( newstate );
  mu_roleC.to_state( newstate );
  mu_roleD.to_state( newstate );
  mu_msgs.to_state( newstate );
  mu_msg_end.to_state( newstate );
  mu_pat1Set.to_state( newstate );
  mu_sPat1Set.to_state( newstate );
  mu_pat2Set.to_state( newstate );
  mu_sPat2Set.to_state( newstate );
  mu_pat3Set.to_state( newstate );
  mu_sPat3Set.to_state( newstate );
  mu_pat4Set.to_state( newstate );
  mu_sPat4Set.to_state( newstate );
  mu_pat5Set.to_state( newstate );
  mu_sPat5Set.to_state( newstate );
  mu_pat6Set.to_state( newstate );
  mu_sPat6Set.to_state( newstate );
  mu_pat7Set.to_state( newstate );
  mu_sPat7Set.to_state( newstate );
  mu_pat8Set.to_state( newstate );
  mu_sPat8Set.to_state( newstate );
  mu_pat9Set.to_state( newstate );
  mu_sPat9Set.to_state( newstate );
  mu_pat10Set.to_state( newstate );
  mu_sPat10Set.to_state( newstate );
  mu_pat11Set.to_state( newstate );
  mu_sPat11Set.to_state( newstate );
  mu_pat12Set.to_state( newstate );
  mu_sPat12Set.to_state( newstate );
  mu_pat13Set.to_state( newstate );
  mu_sPat13Set.to_state( newstate );
  mu_pat14Set.to_state( newstate );
  mu_sPat14Set.to_state( newstate );
  mu_pat15Set.to_state( newstate );
  mu_sPat15Set.to_state( newstate );
  mu_pat16Set.to_state( newstate );
  mu_sPat16Set.to_state( newstate );
  mu_pat17Set.to_state( newstate );
  mu_sPat17Set.to_state( newstate );
  mu_pat18Set.to_state( newstate );
  mu_sPat18Set.to_state( newstate );
  mu_pat19Set.to_state( newstate );
  mu_sPat19Set.to_state( newstate );
  mu_pat20Set.to_state( newstate );
  mu_sPat20Set.to_state( newstate );
  mu_pat21Set.to_state( newstate );
  mu_sPat21Set.to_state( newstate );
  mu_pat22Set.to_state( newstate );
  mu_sPat22Set.to_state( newstate );
  mu_pat23Set.to_state( newstate );
  mu_sPat23Set.to_state( newstate );
  mu_pat24Set.to_state( newstate );
  mu_sPat24Set.to_state( newstate );
  mu_pat25Set.to_state( newstate );
  mu_sPat25Set.to_state( newstate );
  mu_pat26Set.to_state( newstate );
  mu_sPat26Set.to_state( newstate );
  mu_A_known.to_state( newstate );
  mu_B_known.to_state( newstate );
  mu_C_known.to_state( newstate );
  mu_D_known.to_state( newstate );
  mu_Spy_known.to_state( newstate );
  mu_emit.to_state( newstate );
  mu_gnum.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 26, i1:%s", mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_matchPat( mu_msgs[mu_construct26By1( mu_pat1Set.mu_content[mu_i1] )], mu_sPat26Set )) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (!(mu_Spy_known[mu_construct26By1( mu_pat1Set.mu_content[mu_i1] )])) ; 
}
    return mu__boolexpr240;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 6 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (mu_matchPat( mu_msgs[mu_construct26By1( mu_pat1Set.mu_content[mu_i1] )], mu_sPat26Set )) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (!(mu_Spy_known[mu_construct26By1( mu_pat1Set.mu_content[mu_i1] )])) ; 
}
	      if (mu__boolexpr243) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat26\n";
mu_concatMsgNo = mu_construct26By1( mu_pat1Set.mu_content[mu_i1] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat26Set, mu_concatMsgNo )) )
{
mu_pat26Set.mu_length = (mu_pat26Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat26Set.mu_content[mu_pat26Set.mu_length].undefine();
else
  mu_pat26Set.mu_content[mu_pat26Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 26, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
  if (!((mu_i) <= (mu_pat26Set.mu_length))) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_pat26Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (mu_Spy_known[mu_pat26Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (!(mu_Spy_known[mu_msgs[mu_pat26Set.mu_content[mu_i]].mu_concatPart[1]])) ; 
}
    return mu__boolexpr246;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 12 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
  if (!((mu_i) <= (mu_pat26Set.mu_length))) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_pat26Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = (mu_Spy_known[mu_pat26Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (!(mu_Spy_known[mu_msgs[mu_pat26Set.mu_content[mu_i]].mu_concatPart[1]])) ; 
}
	      if (mu__boolexpr249) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 6;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",8);

cout << "rule deconcat26\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat26Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat26Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat26Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 25, i2:%s, i1:%s", mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!((mu_i1) <= (mu_pat24Set.mu_length))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = (mu_Spy_known[mu_pat24Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_matchPat( mu_msgs[mu_construct25By241( mu_pat24Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat25Set )) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = (!(mu_Spy_known[mu_construct25By241( mu_pat24Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr252;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 48 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
  if (!((mu_i1) <= (mu_pat24Set.mu_length))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = (mu_Spy_known[mu_pat24Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_matchPat( mu_msgs[mu_construct25By241( mu_pat24Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat25Set )) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (!(mu_Spy_known[mu_construct25By241( mu_pat24Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr257) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat25\n";
mu_concatMsgNo = mu_construct25By241( mu_pat24Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat25Set, mu_concatMsgNo )) )
{
mu_pat25Set.mu_length = (mu_pat25Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat25Set.mu_content[mu_pat25Set.mu_length].undefine();
else
  mu_pat25Set.mu_content[mu_pat25Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 25, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr262;
bool mu__boolexpr263;
bool mu__boolexpr264;
  if (!((mu_i) <= (mu_pat25Set.mu_length))) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = ((mu_pat25Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr264)) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_Spy_known[mu_pat25Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
bool mu__boolexpr265;
  if (!(mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr262 = (!(mu__boolexpr265)) ; 
}
    return mu__boolexpr262;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 54 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
  if (!((mu_i) <= (mu_pat25Set.mu_length))) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = ((mu_pat25Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = (mu_Spy_known[mu_pat25Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
bool mu__boolexpr269;
  if (!(mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = (mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr266 = (!(mu__boolexpr269)) ; 
}
	      if (mu__boolexpr266) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 48;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat25\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat24 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat24Set, mu_msgPat1 )) )
{
mu_pat24Set.mu_length = (mu_pat24Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat24Set.mu_content[mu_pat24Set.mu_length].undefine();
else
  mu_pat24Set.mu_content[mu_pat24Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat25Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 23, i4:%s, i3:%s, i2:%s, i1:%s", mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
bool mu__boolexpr273;
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
  if (!((mu_i1) <= (mu_pat19Set.mu_length))) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = (mu_Spy_known[mu_pat19Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = ((mu_i2) <= (mu_pat20Set.mu_length)) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = (mu_Spy_known[mu_pat20Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = ((mu_i3) <= (mu_pat21Set.mu_length)) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (mu_Spy_known[mu_pat21Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_i4) <= (mu_pat22Set.mu_length)) ; 
}
  if (!(mu__boolexpr273)) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_Spy_known[mu_pat22Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = (mu_matchPat( mu_msgs[mu_construct23By19202122( mu_pat19Set.mu_content[mu_i1], mu_pat20Set.mu_content[mu_i2], mu_pat21Set.mu_content[mu_i3], mu_pat22Set.mu_content[mu_i4] )], mu_sPat23Set )) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (!(mu_Spy_known[mu_construct23By19202122( mu_pat19Set.mu_content[mu_i1], mu_pat20Set.mu_content[mu_i2], mu_pat21Set.mu_content[mu_i3], mu_pat22Set.mu_content[mu_i4] )])) ; 
}
    return mu__boolexpr270;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 54;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1350 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
  if (!((mu_i1) <= (mu_pat19Set.mu_length))) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (mu_Spy_known[mu_pat19Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = ((mu_i2) <= (mu_pat20Set.mu_length)) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_Spy_known[mu_pat20Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr285)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_i3) <= (mu_pat21Set.mu_length)) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_Spy_known[mu_pat21Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_i4) <= (mu_pat22Set.mu_length)) ; 
}
  if (!(mu__boolexpr282)) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_Spy_known[mu_pat22Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = (mu_matchPat( mu_msgs[mu_construct23By19202122( mu_pat19Set.mu_content[mu_i1], mu_pat20Set.mu_content[mu_i2], mu_pat21Set.mu_content[mu_i3], mu_pat22Set.mu_content[mu_i4] )], mu_sPat23Set )) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (!(mu_Spy_known[mu_construct23By19202122( mu_pat19Set.mu_content[mu_i1], mu_pat20Set.mu_content[mu_i2], mu_pat21Set.mu_content[mu_i3], mu_pat22Set.mu_content[mu_i4] )])) ; 
}
	      if (mu__boolexpr279) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 54;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat23\n";
mu_concatMsgNo = mu_construct23By19202122( mu_pat19Set.mu_content[mu_i1], mu_pat20Set.mu_content[mu_i2], mu_pat21Set.mu_content[mu_i3], mu_pat22Set.mu_content[mu_i4] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat23Set, mu_concatMsgNo )) )
{
mu_pat23Set.mu_length = (mu_pat23Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat23Set.mu_content[mu_pat23Set.mu_length].undefine();
else
  mu_pat23Set.mu_content[mu_pat23Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 23, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr288;
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!((mu_i) <= (mu_pat23Set.mu_length))) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = ((mu_pat23Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_Spy_known[mu_pat23Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!(mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = (mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr288 = (!(mu__boolexpr291)) ; 
}
    return mu__boolexpr288;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1350;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1356 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
  if (!((mu_i) <= (mu_pat23Set.mu_length))) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = ((mu_pat23Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_Spy_known[mu_pat23Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
  if (!(mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = (mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = (mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr294 = (!(mu__boolexpr297)) ; 
}
	      if (mu__boolexpr294) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1350;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",48);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",56);

cout << "rule deconcat23\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat19 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat19Set, mu_msgPat1 )) )
{
mu_pat19Set.mu_length = (mu_pat19Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat19Set.mu_content[mu_pat19Set.mu_length].undefine();
else
  mu_pat19Set.mu_content[mu_pat19Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat20 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat20Set, mu_msgPat2 )) )
{
mu_pat20Set.mu_length = (mu_pat20Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat20Set.mu_content[mu_pat20Set.mu_length].undefine();
else
  mu_pat20Set.mu_content[mu_pat20Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat21 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat21Set, mu_msgPat3 )) )
{
mu_pat21Set.mu_length = (mu_pat21Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat21Set.mu_content[mu_pat21Set.mu_length].undefine();
else
  mu_pat21Set.mu_content[mu_pat21Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[4]]) )
{
mu_Spy_known[mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat23Set.mu_content[mu_i]].mu_concatPart[4];
mu_isPat22 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat22Set, mu_msgPat4 )) )
{
mu_pat22Set.mu_length = (mu_pat22Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat22Set.mu_content[mu_pat22Set.mu_length].undefine();
else
  mu_pat22Set.mu_content[mu_pat22Set.mu_length] = mu_msgPat4;
}
}
}
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 18, i2:%s, i1:%s", mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr300;
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
  if (!((mu_i1) <= (mu_pat16Set.mu_length))) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = ((mu_i2) <= (mu_pat17Set.mu_length)) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (mu_Spy_known[mu_pat17Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (mu_matchPat( mu_msgs[mu_construct18By1617( mu_pat16Set.mu_content[mu_i1], mu_pat17Set.mu_content[mu_i2] )], mu_sPat18Set )) ; 
}
  if (!(mu__boolexpr301)) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (!(mu_Spy_known[mu_construct18By1617( mu_pat16Set.mu_content[mu_i1], mu_pat17Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr300;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1356;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1392 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
bool mu__boolexpr308;
bool mu__boolexpr309;
  if (!((mu_i1) <= (mu_pat16Set.mu_length))) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_i2) <= (mu_pat17Set.mu_length)) ; 
}
  if (!(mu__boolexpr308)) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (mu_Spy_known[mu_pat17Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = (mu_matchPat( mu_msgs[mu_construct18By1617( mu_pat16Set.mu_content[mu_i1], mu_pat17Set.mu_content[mu_i2] )], mu_sPat18Set )) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (!(mu_Spy_known[mu_construct18By1617( mu_pat16Set.mu_content[mu_i1], mu_pat17Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr305) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1356;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat18\n";
mu_concatMsgNo = mu_construct18By1617( mu_pat16Set.mu_content[mu_i1], mu_pat17Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat18Set, mu_concatMsgNo )) )
{
mu_pat18Set.mu_length = (mu_pat18Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat18Set.mu_content[mu_pat18Set.mu_length].undefine();
else
  mu_pat18Set.mu_content[mu_pat18Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 18, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr310;
bool mu__boolexpr311;
bool mu__boolexpr312;
  if (!((mu_i) <= (mu_pat18Set.mu_length))) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_pat18Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_Spy_known[mu_pat18Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr311)) mu__boolexpr310 = FALSE ;
  else {
bool mu__boolexpr313;
  if (!(mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr310 = (!(mu__boolexpr313)) ; 
}
    return mu__boolexpr310;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1392;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1398 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr314;
bool mu__boolexpr315;
bool mu__boolexpr316;
  if (!((mu_i) <= (mu_pat18Set.mu_length))) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = ((mu_pat18Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (mu_Spy_known[mu_pat18Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
bool mu__boolexpr317;
  if (!(mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr314 = (!(mu__boolexpr317)) ; 
}
	      if (mu__boolexpr314) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1392;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat18\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat16 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat16Set, mu_msgPat1 )) )
{
mu_pat16Set.mu_length = (mu_pat16Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat16Set.mu_content[mu_pat16Set.mu_length].undefine();
else
  mu_pat16Set.mu_content[mu_pat16Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat18Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat17 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat17Set, mu_msgPat2 )) )
{
mu_pat17Set.mu_length = (mu_pat17Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat17Set.mu_content[mu_pat17Set.mu_length].undefine();
else
  mu_pat17Set.mu_content[mu_pat17Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 13, i2:%s, i1:%s", mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
  if (!((mu_i1) <= (mu_pat12Set.mu_length))) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_matchPat( mu_msgs[mu_construct13By121( mu_pat12Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat13Set )) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (!(mu_Spy_known[mu_construct13By121( mu_pat12Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr318;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1398;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1434 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
  if (!((mu_i1) <= (mu_pat12Set.mu_length))) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_matchPat( mu_msgs[mu_construct13By121( mu_pat12Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat13Set )) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = (!(mu_Spy_known[mu_construct13By121( mu_pat12Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr323) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1398;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat13\n";
mu_concatMsgNo = mu_construct13By121( mu_pat12Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat13Set, mu_concatMsgNo )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 13, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr328;
bool mu__boolexpr329;
bool mu__boolexpr330;
  if (!((mu_i) <= (mu_pat13Set.mu_length))) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr329)) mu__boolexpr328 = FALSE ;
  else {
bool mu__boolexpr331;
  if (!(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr328 = (!(mu__boolexpr331)) ; 
}
    return mu__boolexpr328;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1434;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1440 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
  if (!((mu_i) <= (mu_pat13Set.mu_length))) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
bool mu__boolexpr335;
  if (!(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr332 = (!(mu__boolexpr335)) ; 
}
	      if (mu__boolexpr332) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1434;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat13\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat12 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat12Set, mu_msgPat1 )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 10, i4:%s, i3:%s, i2:%s, i1:%s", mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
bool mu__boolexpr343;
bool mu__boolexpr344;
  if (!((mu_i1) <= (mu_pat5Set.mu_length))) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr343)) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_i3) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
  mu__boolexpr340 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr340)) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = ((mu_i4) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (mu_matchPat( mu_msgs[mu_construct10By5179( mu_pat5Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat7Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] )], mu_sPat10Set )) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = (!(mu_Spy_known[mu_construct10By5179( mu_pat5Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat7Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] )])) ; 
}
    return mu__boolexpr336;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1440;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 2736 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr345;
bool mu__boolexpr346;
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
bool mu__boolexpr353;
  if (!((mu_i1) <= (mu_pat5Set.mu_length))) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = ((mu_i3) <= (mu_pat7Set.mu_length)) ; 
}
  if (!(mu__boolexpr350)) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_i4) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
  mu__boolexpr347 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr347)) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = (mu_matchPat( mu_msgs[mu_construct10By5179( mu_pat5Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat7Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] )], mu_sPat10Set )) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (!(mu_Spy_known[mu_construct10By5179( mu_pat5Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat7Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] )])) ; 
}
	      if (mu__boolexpr345) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1440;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat10\n";
mu_concatMsgNo = mu_construct10By5179( mu_pat5Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat7Set.mu_content[mu_i3], mu_pat9Set.mu_content[mu_i4] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat10Set, mu_concatMsgNo )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 10, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
  if (!((mu_i) <= (mu_pat10Set.mu_length))) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
bool mu__boolexpr357;
bool mu__boolexpr358;
bool mu__boolexpr359;
  if (!(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr359)) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr354 = (!(mu__boolexpr357)) ; 
}
    return mu__boolexpr354;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2736;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 2742 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
  if (!((mu_i) <= (mu_pat10Set.mu_length))) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
bool mu__boolexpr363;
bool mu__boolexpr364;
bool mu__boolexpr365;
  if (!(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
  mu__boolexpr364 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr364)) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr360 = (!(mu__boolexpr363)) ; 
}
	      if (mu__boolexpr360) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2736;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",48);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",56);

cout << "rule deconcat10\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat5 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat5Set, mu_msgPat1 )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat7 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgPat3 )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[4]]) )
{
mu_Spy_known[mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat10Set.mu_content[mu_i]].mu_concatPart[4];
mu_isPat9 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgPat4 )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgPat4;
}
}
}
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 8, i3:%s, i2:%s, i1:%s", mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr366;
bool mu__boolexpr367;
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
bool mu__boolexpr371;
bool mu__boolexpr372;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr372)) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr371)) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_i3) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
  mu__boolexpr368 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr368)) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_matchPat( mu_msgs[mu_construct8By111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3] )], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr367)) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = (!(mu_Spy_known[mu_construct8By111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3] )])) ; 
}
    return mu__boolexpr366;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2742;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 2958 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
bool mu__boolexpr379;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr379)) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_i3) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_matchPat( mu_msgs[mu_construct8By111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3] )], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (!(mu_Spy_known[mu_construct8By111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3] )])) ; 
}
	      if (mu__boolexpr373) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2742;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat8\n";
mu_concatMsgNo = mu_construct8By111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat8Set, mu_concatMsgNo )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 8, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
bool mu__boolexpr383;
bool mu__boolexpr384;
  if (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = (mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  mu__boolexpr380 = (!(mu__boolexpr383)) ; 
}
    return mu__boolexpr380;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2958;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 2964 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr385;
bool mu__boolexpr386;
bool mu__boolexpr387;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr386)) mu__boolexpr385 = FALSE ;
  else {
bool mu__boolexpr388;
bool mu__boolexpr389;
  if (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = (mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr389)) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = (mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  mu__boolexpr385 = (!(mu__boolexpr388)) ; 
}
	      if (mu__boolexpr385) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2958;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",40);

cout << "rule deconcat8\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat1 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat3 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat3;
}
}
}
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 6, i4:%s, i3:%s, i2:%s, i1:%s", mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr390;
bool mu__boolexpr391;
bool mu__boolexpr392;
bool mu__boolexpr393;
bool mu__boolexpr394;
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
bool mu__boolexpr398;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = ((mu_i3) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr395)) mu__boolexpr394 = FALSE ;
  else {
  mu__boolexpr394 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr394)) mu__boolexpr393 = FALSE ;
  else {
  mu__boolexpr393 = ((mu_i4) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr393)) mu__boolexpr392 = FALSE ;
  else {
  mu__boolexpr392 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr392)) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = (mu_matchPat( mu_msgs[mu_construct6By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] )], mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = (!(mu_Spy_known[mu_construct6By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] )])) ; 
}
    return mu__boolexpr390;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2964;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4260 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr399;
bool mu__boolexpr400;
bool mu__boolexpr401;
bool mu__boolexpr402;
bool mu__boolexpr403;
bool mu__boolexpr404;
bool mu__boolexpr405;
bool mu__boolexpr406;
bool mu__boolexpr407;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
  mu__boolexpr405 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr405)) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = ((mu_i3) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr403)) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = ((mu_i4) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr402)) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (mu_matchPat( mu_msgs[mu_construct6By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] )], mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr400)) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (!(mu_Spy_known[mu_construct6By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] )])) ; 
}
	      if (mu__boolexpr399) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2964;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat6\n";
mu_concatMsgNo = mu_construct6By1111( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat1Set.mu_content[mu_i3], mu_pat1Set.mu_content[mu_i4] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat6Set, mu_concatMsgNo )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 6, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr408;
bool mu__boolexpr409;
bool mu__boolexpr410;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr410)) mu__boolexpr409 = FALSE ;
  else {
  mu__boolexpr409 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr409)) mu__boolexpr408 = FALSE ;
  else {
bool mu__boolexpr411;
bool mu__boolexpr412;
bool mu__boolexpr413;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr413)) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr412)) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr408 = (!(mu__boolexpr411)) ; 
}
    return mu__boolexpr408;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4260;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4266 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr414;
bool mu__boolexpr415;
bool mu__boolexpr416;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr414 = (!(mu__boolexpr417)) ; 
}
	      if (mu__boolexpr414) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4260;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",48);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",56);

cout << "rule deconcat6\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat1 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat3 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4];
mu_isPat1 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat4 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat4;
}
}
}
  };

};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("aencrypt 5, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr420;
bool mu__boolexpr421;
bool mu__boolexpr422;
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr423)) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr422)) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = (mu_matchPat( mu_msgs[mu_construct5By13( mu_pat1Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = (!(mu_Spy_known[mu_construct5By13( mu_pat1Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr420;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4266;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4302 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
bool mu__boolexpr430;
bool mu__boolexpr431;
bool mu__boolexpr432;
bool mu__boolexpr433;
  if (!((mu_i) <= (mu_pat1Set.mu_length))) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
  mu__boolexpr431 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr431)) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = (mu_matchPat( mu_msgs[mu_construct5By13( mu_pat1Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = (!(mu_Spy_known[mu_construct5By13( mu_pat1Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr427) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4266;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",0);

cout << "rule aencrypt5\n";
if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct5By13( mu_pat1Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat5Set, mu_encMsgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
  };

};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("adecrypt 5, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr434;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4302;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4308 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr437;
bool mu__boolexpr438;
bool mu__boolexpr439;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
  mu__boolexpr437 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr437) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4302;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",216);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",224);

cout << "rule adecrypt5\n";
mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_aencMsg;
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
  };

};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("aencrypt 4, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
bool mu__boolexpr446;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr443)) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (mu_matchPat( mu_msgs[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat4Set )) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = (!(mu_Spy_known[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr440;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4308;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4344 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
bool mu__boolexpr453;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = ((mu_j) <= (mu_pat3Set.mu_length)) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = ((mu_pat3Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr450)) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = (mu_Spy_known[mu_pat3Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = (mu_matchPat( mu_msgs[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )], mu_sPat4Set )) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = (!(mu_Spy_known[mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr447) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4308;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",0);

cout << "rule aencrypt4\n";
if ( (mu_msgs[mu_pat3Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_PK) )
{
mu_encMsgNo = mu_construct4By23( mu_pat2Set.mu_content[mu_i], mu_pat3Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat4Set, mu_encMsgNo )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
  };

};
/******************** RuleBase19 ********************/
class RuleBase19
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("adecrypt 4, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr454;
bool mu__boolexpr455;
bool mu__boolexpr456;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
    return mu__boolexpr454;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4344;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4350 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr457;
bool mu__boolexpr458;
bool mu__boolexpr459;
  if (!((mu_i) <= (mu_pat4Set.mu_length))) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = (!(mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg])) ; 
}
	      if (mu__boolexpr457) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4344;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",216);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",224);

cout << "rule adecrypt4\n";
mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencKey] );
if ( (mu_key_inv.mu_k.mu_ag) == (mu_Intruder) )
{
mu_Spy_known[mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat4Set.mu_content[mu_i]].mu_aencMsg;
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flag_pat2 );
if ( mu_flag_pat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase20 ********************/
class RuleBase20
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 2, i2:%s, i1:%s", mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr460;
bool mu__boolexpr461;
bool mu__boolexpr462;
bool mu__boolexpr463;
bool mu__boolexpr464;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr464 = FALSE ;
  else {
  mu__boolexpr464 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr464)) mu__boolexpr463 = FALSE ;
  else {
  mu__boolexpr463 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr463)) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = (mu_matchPat( mu_msgs[mu_construct2By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat2Set )) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = (!(mu_Spy_known[mu_construct2By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr460;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4350;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4386 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr465;
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (mu_matchPat( mu_msgs[mu_construct2By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat2Set )) ; 
}
  if (!(mu__boolexpr466)) mu__boolexpr465 = FALSE ;
  else {
  mu__boolexpr465 = (!(mu_Spy_known[mu_construct2By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr465) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4350;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat2\n";
mu_concatMsgNo = mu_construct2By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat2Set, mu_concatMsgNo )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase21 ********************/
class RuleBase21
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 2, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr470;
bool mu__boolexpr471;
bool mu__boolexpr472;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr471)) mu__boolexpr470 = FALSE ;
  else {
bool mu__boolexpr473;
  if (!(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = (mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr470 = (!(mu__boolexpr473)) ; 
}
    return mu__boolexpr470;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4386;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4392 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr474;
bool mu__boolexpr475;
bool mu__boolexpr476;
  if (!((mu_i) <= (mu_pat2Set.mu_length))) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr475)) mu__boolexpr474 = FALSE ;
  else {
bool mu__boolexpr477;
  if (!(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = (mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr474 = (!(mu__boolexpr477)) ; 
}
	      if (mu__boolexpr474) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4386;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat2\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat2Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase22 ********************/
class RuleBase22
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[4], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr478;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4392;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4398 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
  if (!((mu_ch[4].mu_empty) == (mu_true))) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr481) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4392;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat1Set.mu_content[mu_i]]) )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat1Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat1Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[4].\n";
}
  };

};
/******************** RuleBase23 ********************/
class RuleBase23
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[17], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr484;
bool mu__boolexpr485;
bool mu__boolexpr486;
  if (!((mu_ch[17].mu_empty) == (mu_true))) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
  mu__boolexpr484 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr484;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4398;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4404 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
  if (!((mu_ch[17].mu_empty) == (mu_true))) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr487) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4398;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat1Set.mu_content[mu_i]]) )
{
mu_ch[17].clear();
mu_ch[17].mu_msg = mu_msgs[mu_pat1Set.mu_content[mu_i]];
mu_ch[17].mu_sender = mu_Intruder;
mu_ch[17].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[17].mu_empty = mu_false;
mu_emit[mu_pat1Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[17].\n";
}
  };

};
/******************** RuleBase24 ********************/
class RuleBase24
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[13], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr490;
bool mu__boolexpr491;
bool mu__boolexpr492;
  if (!((mu_ch[13].mu_empty) == (mu_true))) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr492)) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr491)) mu__boolexpr490 = FALSE ;
  else {
  mu__boolexpr490 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr490;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4404;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4410 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr493;
bool mu__boolexpr494;
bool mu__boolexpr495;
  if (!((mu_ch[13].mu_empty) == (mu_true))) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = ((mu_i) <= (mu_pat9Set.mu_length)) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr493) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4404;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat9Set.mu_content[mu_i]]) )
{
mu_ch[13].clear();
mu_ch[13].mu_msg = mu_msgs[mu_pat9Set.mu_content[mu_i]];
mu_ch[13].mu_sender = mu_Intruder;
mu_ch[13].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[13].mu_empty = mu_false;
mu_emit[mu_pat9Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[13].\n";
}
  };

};
/******************** RuleBase25 ********************/
class RuleBase25
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[9], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr496;
bool mu__boolexpr497;
bool mu__boolexpr498;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_i) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr498)) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr496;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4410;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4416 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr499;
bool mu__boolexpr500;
bool mu__boolexpr501;
  if (!((mu_ch[9].mu_empty) == (mu_true))) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = ((mu_i) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr501)) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = ((mu_pat2Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr500)) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr499) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4410;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat2Set.mu_content[mu_i]]) )
{
mu_ch[9].clear();
mu_ch[9].mu_msg = mu_msgs[mu_pat2Set.mu_content[mu_i]];
mu_ch[9].mu_sender = mu_Intruder;
mu_ch[9].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[9].mu_empty = mu_false;
mu_emit[mu_pat2Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[9].\n";
}
  };

};
/******************** RuleBase26 ********************/
class RuleBase26
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[5], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr502;
bool mu__boolexpr503;
bool mu__boolexpr504;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr504)) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr503)) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr502;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4416;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4422 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
  if (!((mu_ch[5].mu_empty) == (mu_true))) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr505) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4416;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat1Set.mu_content[mu_i]]) )
{
mu_ch[5].clear();
mu_ch[5].mu_msg = mu_msgs[mu_pat1Set.mu_content[mu_i]];
mu_ch[5].mu_sender = mu_Intruder;
mu_ch[5].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[5].mu_empty = mu_false;
mu_emit[mu_pat1Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[5].\n";
}
  };

};
/******************** RuleBase27 ********************/
class RuleBase27
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleDNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleDNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr508;
bool mu__boolexpr509;
bool mu__boolexpr510;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = ((mu_i) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr510)) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr508;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4422;
    static mu_1_roleDNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4428 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr511;
bool mu__boolexpr512;
bool mu__boolexpr513;
  if (!((mu_ch[3].mu_empty) == (mu_true))) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = ((mu_i) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr512)) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr511) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4422;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleDNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat13Set.mu_content[mu_i]]) )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat13Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleD[mu_j].mu_D;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat13Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[3].\n";
}
  };

};
/******************** RuleBase28 ********************/
class RuleBase28
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[18], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr514;
bool mu__boolexpr515;
bool mu__boolexpr516;
  if (!((mu_ch[18].mu_empty) == (mu_true))) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr514;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4428;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4434 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
  if (!((mu_ch[18].mu_empty) == (mu_true))) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr517) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4428;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat1Set.mu_content[mu_i]]) )
{
mu_ch[18].clear();
mu_ch[18].mu_msg = mu_msgs[mu_pat1Set.mu_content[mu_i]];
mu_ch[18].mu_sender = mu_Intruder;
mu_ch[18].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[18].mu_empty = mu_false;
mu_emit[mu_pat1Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[18].\n";
}
  };

};
/******************** RuleBase29 ********************/
class RuleBase29
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[16], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr520;
bool mu__boolexpr521;
bool mu__boolexpr522;
  if (!((mu_ch[16].mu_empty) == (mu_true))) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr520;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4434;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4440 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr523;
bool mu__boolexpr524;
bool mu__boolexpr525;
  if (!((mu_ch[16].mu_empty) == (mu_true))) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr524)) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr523) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4434;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat1Set.mu_content[mu_i]]) )
{
mu_ch[16].clear();
mu_ch[16].mu_msg = mu_msgs[mu_pat1Set.mu_content[mu_i]];
mu_ch[16].mu_sender = mu_Intruder;
mu_ch[16].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[16].mu_empty = mu_false;
mu_emit[mu_pat1Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[16].\n";
}
  };

};
/******************** RuleBase30 ********************/
class RuleBase30
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[14], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr526;
bool mu__boolexpr527;
bool mu__boolexpr528;
  if (!((mu_ch[14].mu_empty) == (mu_true))) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_i) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr528)) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr526;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4440;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4446 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr529;
bool mu__boolexpr530;
bool mu__boolexpr531;
  if (!((mu_ch[14].mu_empty) == (mu_true))) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = ((mu_i) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr531)) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr529) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4440;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat11Set.mu_content[mu_i]]) )
{
mu_ch[14].clear();
mu_ch[14].mu_msg = mu_msgs[mu_pat11Set.mu_content[mu_i]];
mu_ch[14].mu_sender = mu_Intruder;
mu_ch[14].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[14].mu_empty = mu_false;
mu_emit[mu_pat11Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[14].\n";
}
  };

};
/******************** RuleBase31 ********************/
class RuleBase31
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[12], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr532;
bool mu__boolexpr533;
bool mu__boolexpr534;
  if (!((mu_ch[12].mu_empty) == (mu_true))) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = ((mu_i) <= (mu_pat23Set.mu_length)) ; 
}
  if (!(mu__boolexpr534)) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = ((mu_pat23Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr533)) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = (mu_Spy_known[mu_pat23Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr532;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4446;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4452 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr535;
bool mu__boolexpr536;
bool mu__boolexpr537;
  if (!((mu_ch[12].mu_empty) == (mu_true))) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_i) <= (mu_pat23Set.mu_length)) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = ((mu_pat23Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr536)) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = (mu_Spy_known[mu_pat23Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr535) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4446;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat23Set.mu_content[mu_i]]) )
{
mu_ch[12].clear();
mu_ch[12].mu_msg = mu_msgs[mu_pat23Set.mu_content[mu_i]];
mu_ch[12].mu_sender = mu_Intruder;
mu_ch[12].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[12].mu_empty = mu_false;
mu_emit[mu_pat23Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[12].\n";
}
  };

};
/******************** RuleBase32 ********************/
class RuleBase32
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[10], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr538;
bool mu__boolexpr539;
bool mu__boolexpr540;
  if (!((mu_ch[10].mu_empty) == (mu_true))) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = ((mu_i) <= (mu_pat18Set.mu_length)) ; 
}
  if (!(mu__boolexpr540)) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = ((mu_pat18Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = (mu_Spy_known[mu_pat18Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr538;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4452;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4458 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr541;
bool mu__boolexpr542;
bool mu__boolexpr543;
  if (!((mu_ch[10].mu_empty) == (mu_true))) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = ((mu_i) <= (mu_pat18Set.mu_length)) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
  mu__boolexpr542 = ((mu_pat18Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr542)) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = (mu_Spy_known[mu_pat18Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr541) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4452;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat18Set.mu_content[mu_i]]) )
{
mu_ch[10].clear();
mu_ch[10].mu_msg = mu_msgs[mu_pat18Set.mu_content[mu_i]];
mu_ch[10].mu_sender = mu_Intruder;
mu_ch[10].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[10].mu_empty = mu_false;
mu_emit[mu_pat18Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[10].\n";
}
  };

};
/******************** RuleBase33 ********************/
class RuleBase33
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[8], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = ((mu_i) <= (mu_pat15Set.mu_length)) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr544;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4458;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4464 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr547;
bool mu__boolexpr548;
bool mu__boolexpr549;
  if (!((mu_ch[8].mu_empty) == (mu_true))) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = ((mu_i) <= (mu_pat15Set.mu_length)) ; 
}
  if (!(mu__boolexpr549)) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr548)) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr547) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4458;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat15Set.mu_content[mu_i]]) )
{
mu_ch[8].clear();
mu_ch[8].mu_msg = mu_msgs[mu_pat15Set.mu_content[mu_i]];
mu_ch[8].mu_sender = mu_Intruder;
mu_ch[8].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[8].mu_empty = mu_false;
mu_emit[mu_pat15Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[8].\n";
}
  };

};
/******************** RuleBase34 ********************/
class RuleBase34
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[6], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr550;
bool mu__boolexpr551;
bool mu__boolexpr552;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = ((mu_i) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr551)) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr550;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4464;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4470 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr553;
bool mu__boolexpr554;
bool mu__boolexpr555;
  if (!((mu_ch[6].mu_empty) == (mu_true))) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = ((mu_i) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr555)) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = ((mu_pat14Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr553) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4464;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat14Set.mu_content[mu_i]]) )
{
mu_ch[6].clear();
mu_ch[6].mu_msg = mu_msgs[mu_pat14Set.mu_content[mu_i]];
mu_ch[6].mu_sender = mu_Intruder;
mu_ch[6].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[6].mu_empty = mu_false;
mu_emit[mu_pat14Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[6].\n";
}
  };

};
/******************** RuleBase35 ********************/
class RuleBase35
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr556;
bool mu__boolexpr557;
bool mu__boolexpr558;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = ((mu_i) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr557)) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr556;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4470;
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4476 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr559;
bool mu__boolexpr560;
bool mu__boolexpr561;
  if (!((mu_ch[2].mu_empty) == (mu_true))) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = ((mu_i) <= (mu_pat13Set.mu_length)) ; 
}
  if (!(mu__boolexpr561)) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr560)) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr559) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4470;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat13Set.mu_content[mu_i]]) )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat13Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleC[mu_j].mu_C;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat13Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[2].\n";
}
  };

};
/******************** RuleBase36 ********************/
class RuleBase36
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[15], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr562;
bool mu__boolexpr563;
bool mu__boolexpr564;
  if (!((mu_ch[15].mu_empty) == (mu_true))) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr564)) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr562;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4476;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4482 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr565;
bool mu__boolexpr566;
bool mu__boolexpr567;
  if (!((mu_ch[15].mu_empty) == (mu_true))) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr566)) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr565) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4476;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat1Set.mu_content[mu_i]]) )
{
mu_ch[15].clear();
mu_ch[15].mu_msg = mu_msgs[mu_pat1Set.mu_content[mu_i]];
mu_ch[15].mu_sender = mu_Intruder;
mu_ch[15].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[15].mu_empty = mu_false;
mu_emit[mu_pat1Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[15].\n";
}
  };

};
/******************** RuleBase37 ********************/
class RuleBase37
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[11], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr568;
bool mu__boolexpr569;
bool mu__boolexpr570;
  if (!((mu_ch[11].mu_empty) == (mu_true))) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = ((mu_i) <= (mu_pat10Set.mu_length)) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr568;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4482;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4488 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr571;
bool mu__boolexpr572;
bool mu__boolexpr573;
  if (!((mu_ch[11].mu_empty) == (mu_true))) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = ((mu_i) <= (mu_pat10Set.mu_length)) ; 
}
  if (!(mu__boolexpr573)) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = ((mu_pat10Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr571) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4482;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat10Set.mu_content[mu_i]]) )
{
mu_ch[11].clear();
mu_ch[11].mu_msg = mu_msgs[mu_pat10Set.mu_content[mu_i]];
mu_ch[11].mu_sender = mu_Intruder;
mu_ch[11].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[11].mu_empty = mu_false;
mu_emit[mu_pat10Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[11].\n";
}
  };

};
/******************** RuleBase38 ********************/
class RuleBase38
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[7], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr574;
bool mu__boolexpr575;
bool mu__boolexpr576;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr576)) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr575)) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr574;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4488;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4494 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr577;
bool mu__boolexpr578;
bool mu__boolexpr579;
  if (!((mu_ch[7].mu_empty) == (mu_true))) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = ((mu_i) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr579)) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = ((mu_pat1Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr578)) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr577) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4488;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat1Set.mu_content[mu_i]]) )
{
mu_ch[7].clear();
mu_ch[7].mu_msg = mu_msgs[mu_pat1Set.mu_content[mu_i]];
mu_ch[7].mu_sender = mu_Intruder;
mu_ch[7].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[7].mu_empty = mu_false;
mu_emit[mu_pat1Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[7].\n";
}
  };

};
/******************** RuleBase39 ********************/
class RuleBase39
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr580;
bool mu__boolexpr581;
bool mu__boolexpr582;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = ((mu_i) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr582)) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr581)) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr580;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4494;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 4500 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr583;
bool mu__boolexpr584;
bool mu__boolexpr585;
  if (!((mu_ch[1].mu_empty) == (mu_true))) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = ((mu_i) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = ((mu_pat4Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr584)) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = (mu_Spy_known[mu_pat4Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr583) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4494;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat4Set.mu_content[mu_i]]) )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat4Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat4Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[1].\n";
}
  };

};
/******************** RuleBase40 ********************/
class RuleBase40
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[4]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr586;
  if (!((mu_ch[4].mu_empty) == (mu_false))) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_ch[4].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr586;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4500;
    while (what_rule < 4501 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr587;
  if (!((mu_ch[4].mu_empty) == (mu_false))) mu__boolexpr587 = FALSE ;
  else {
  mu__boolexpr587 = ((mu_ch[4].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr587) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4500;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[4].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgNo )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[4].\n";
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
}
  };

};
/******************** RuleBase41 ********************/
class RuleBase41
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[17]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr588;
  if (!((mu_ch[17].mu_empty) == (mu_false))) mu__boolexpr588 = FALSE ;
  else {
  mu__boolexpr588 = ((mu_ch[17].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr588;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4501;
    while (what_rule < 4502 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr589;
  if (!((mu_ch[17].mu_empty) == (mu_false))) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = ((mu_ch[17].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr589) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4501;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[17].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgNo )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[17].\n";
mu_ch[17].mu_empty = mu_true;
mu_ch[17].mu_msg.clear();
}
  };

};
/******************** RuleBase42 ********************/
class RuleBase42
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[13]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr590;
  if (!((mu_ch[13].mu_empty) == (mu_false))) mu__boolexpr590 = FALSE ;
  else {
  mu__boolexpr590 = ((mu_ch[13].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr590;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4502;
    while (what_rule < 4503 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr591;
  if (!((mu_ch[13].mu_empty) == (mu_false))) mu__boolexpr591 = FALSE ;
  else {
  mu__boolexpr591 = ((mu_ch[13].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr591) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4502;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[13].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
if ( mu_flag_pat9 )
{
if ( !(mu_exist( mu_pat9Set, mu_msgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[13].\n";
mu_ch[13].mu_empty = mu_true;
mu_ch[13].mu_msg.clear();
}
  };

};
/******************** RuleBase43 ********************/
class RuleBase43
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[9]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr592;
  if (!((mu_ch[9].mu_empty) == (mu_false))) mu__boolexpr592 = FALSE ;
  else {
  mu__boolexpr592 = ((mu_ch[9].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr592;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4503;
    while (what_rule < 4504 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr593;
  if (!((mu_ch[9].mu_empty) == (mu_false))) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = ((mu_ch[9].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr593) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4503;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[9].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat2 ( mu_msg, mu_flag_pat2 );
if ( mu_flag_pat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgNo )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[9].\n";
mu_ch[9].mu_empty = mu_true;
mu_ch[9].mu_msg.clear();
}
  };

};
/******************** RuleBase44 ********************/
class RuleBase44
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[5]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr594;
  if (!((mu_ch[5].mu_empty) == (mu_false))) mu__boolexpr594 = FALSE ;
  else {
  mu__boolexpr594 = ((mu_ch[5].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr594;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4504;
    while (what_rule < 4505 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr595;
  if (!((mu_ch[5].mu_empty) == (mu_false))) mu__boolexpr595 = FALSE ;
  else {
  mu__boolexpr595 = ((mu_ch[5].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr595) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4504;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[5].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgNo )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[5].\n";
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
}
  };

};
/******************** RuleBase45 ********************/
class RuleBase45
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr596;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr596 = FALSE ;
  else {
  mu__boolexpr596 = ((mu_ch[3].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr596;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4505;
    while (what_rule < 4506 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr597;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr597 = FALSE ;
  else {
  mu__boolexpr597 = ((mu_ch[3].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr597) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4505;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat13("flag_pat13",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat13 ( mu_msg, mu_flag_pat13 );
if ( mu_flag_pat13 )
{
if ( !(mu_exist( mu_pat13Set, mu_msgNo )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[3].\n";
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
}
  };

};
/******************** RuleBase46 ********************/
class RuleBase46
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[18]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr598;
  if (!((mu_ch[18].mu_empty) == (mu_false))) mu__boolexpr598 = FALSE ;
  else {
  mu__boolexpr598 = ((mu_ch[18].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr598;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4506;
    while (what_rule < 4507 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr599;
  if (!((mu_ch[18].mu_empty) == (mu_false))) mu__boolexpr599 = FALSE ;
  else {
  mu__boolexpr599 = ((mu_ch[18].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr599) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4506;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[18].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgNo )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[18].\n";
mu_ch[18].mu_empty = mu_true;
mu_ch[18].mu_msg.clear();
}
  };

};
/******************** RuleBase47 ********************/
class RuleBase47
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[16]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr600;
  if (!((mu_ch[16].mu_empty) == (mu_false))) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = ((mu_ch[16].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr600;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4507;
    while (what_rule < 4508 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr601;
  if (!((mu_ch[16].mu_empty) == (mu_false))) mu__boolexpr601 = FALSE ;
  else {
  mu__boolexpr601 = ((mu_ch[16].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr601) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4507;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[16].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgNo )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[16].\n";
mu_ch[16].mu_empty = mu_true;
mu_ch[16].mu_msg.clear();
}
  };

};
/******************** RuleBase48 ********************/
class RuleBase48
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[14]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr602;
  if (!((mu_ch[14].mu_empty) == (mu_false))) mu__boolexpr602 = FALSE ;
  else {
  mu__boolexpr602 = ((mu_ch[14].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr602;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4508;
    while (what_rule < 4509 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr603;
  if (!((mu_ch[14].mu_empty) == (mu_false))) mu__boolexpr603 = FALSE ;
  else {
  mu__boolexpr603 = ((mu_ch[14].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr603) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4508;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[14].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat11 ( mu_msg, mu_flag_pat11 );
if ( mu_flag_pat11 )
{
if ( !(mu_exist( mu_pat11Set, mu_msgNo )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[14].\n";
mu_ch[14].mu_empty = mu_true;
mu_ch[14].mu_msg.clear();
}
  };

};
/******************** RuleBase49 ********************/
class RuleBase49
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[12]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr604;
  if (!((mu_ch[12].mu_empty) == (mu_false))) mu__boolexpr604 = FALSE ;
  else {
  mu__boolexpr604 = ((mu_ch[12].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr604;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4509;
    while (what_rule < 4510 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr605;
  if (!((mu_ch[12].mu_empty) == (mu_false))) mu__boolexpr605 = FALSE ;
  else {
  mu__boolexpr605 = ((mu_ch[12].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr605) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4509;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat23("flag_pat23",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[12].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat23 ( mu_msg, mu_flag_pat23 );
if ( mu_flag_pat23 )
{
if ( !(mu_exist( mu_pat23Set, mu_msgNo )) )
{
mu_pat23Set.mu_length = (mu_pat23Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat23Set.mu_content[mu_pat23Set.mu_length].undefine();
else
  mu_pat23Set.mu_content[mu_pat23Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[12].\n";
mu_ch[12].mu_empty = mu_true;
mu_ch[12].mu_msg.clear();
}
  };

};
/******************** RuleBase50 ********************/
class RuleBase50
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[10]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr606;
  if (!((mu_ch[10].mu_empty) == (mu_false))) mu__boolexpr606 = FALSE ;
  else {
  mu__boolexpr606 = ((mu_ch[10].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr606;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4510;
    while (what_rule < 4511 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr607;
  if (!((mu_ch[10].mu_empty) == (mu_false))) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_ch[10].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr607) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4510;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat18("flag_pat18",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[10].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat18 ( mu_msg, mu_flag_pat18 );
if ( mu_flag_pat18 )
{
if ( !(mu_exist( mu_pat18Set, mu_msgNo )) )
{
mu_pat18Set.mu_length = (mu_pat18Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat18Set.mu_content[mu_pat18Set.mu_length].undefine();
else
  mu_pat18Set.mu_content[mu_pat18Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[10].\n";
mu_ch[10].mu_empty = mu_true;
mu_ch[10].mu_msg.clear();
}
  };

};
/******************** RuleBase51 ********************/
class RuleBase51
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[8]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr608;
  if (!((mu_ch[8].mu_empty) == (mu_false))) mu__boolexpr608 = FALSE ;
  else {
  mu__boolexpr608 = ((mu_ch[8].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr608;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4511;
    while (what_rule < 4512 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr609;
  if (!((mu_ch[8].mu_empty) == (mu_false))) mu__boolexpr609 = FALSE ;
  else {
  mu__boolexpr609 = ((mu_ch[8].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr609) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4511;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat15("flag_pat15",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[8].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat15 ( mu_msg, mu_flag_pat15 );
if ( mu_flag_pat15 )
{
if ( !(mu_exist( mu_pat15Set, mu_msgNo )) )
{
mu_pat15Set.mu_length = (mu_pat15Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat15Set.mu_content[mu_pat15Set.mu_length].undefine();
else
  mu_pat15Set.mu_content[mu_pat15Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[8].\n";
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
}
  };

};
/******************** RuleBase52 ********************/
class RuleBase52
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[6]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr610;
  if (!((mu_ch[6].mu_empty) == (mu_false))) mu__boolexpr610 = FALSE ;
  else {
  mu__boolexpr610 = ((mu_ch[6].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr610;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4512;
    while (what_rule < 4513 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr611;
  if (!((mu_ch[6].mu_empty) == (mu_false))) mu__boolexpr611 = FALSE ;
  else {
  mu__boolexpr611 = ((mu_ch[6].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr611) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4512;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat14("flag_pat14",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[6].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat14 ( mu_msg, mu_flag_pat14 );
if ( mu_flag_pat14 )
{
if ( !(mu_exist( mu_pat14Set, mu_msgNo )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[6].\n";
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
}
  };

};
/******************** RuleBase53 ********************/
class RuleBase53
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr612;
  if (!((mu_ch[2].mu_empty) == (mu_false))) mu__boolexpr612 = FALSE ;
  else {
  mu__boolexpr612 = ((mu_ch[2].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr612;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4513;
    while (what_rule < 4514 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr613;
  if (!((mu_ch[2].mu_empty) == (mu_false))) mu__boolexpr613 = FALSE ;
  else {
  mu__boolexpr613 = ((mu_ch[2].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr613) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4513;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat13("flag_pat13",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat13 ( mu_msg, mu_flag_pat13 );
if ( mu_flag_pat13 )
{
if ( !(mu_exist( mu_pat13Set, mu_msgNo )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[2].\n";
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
}
  };

};
/******************** RuleBase54 ********************/
class RuleBase54
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[15]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr614;
  if (!((mu_ch[15].mu_empty) == (mu_false))) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = ((mu_ch[15].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr614;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4514;
    while (what_rule < 4515 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr615;
  if (!((mu_ch[15].mu_empty) == (mu_false))) mu__boolexpr615 = FALSE ;
  else {
  mu__boolexpr615 = ((mu_ch[15].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr615) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4514;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[15].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgNo )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[15].\n";
mu_ch[15].mu_empty = mu_true;
mu_ch[15].mu_msg.clear();
}
  };

};
/******************** RuleBase55 ********************/
class RuleBase55
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[11]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr616;
  if (!((mu_ch[11].mu_empty) == (mu_false))) mu__boolexpr616 = FALSE ;
  else {
  mu__boolexpr616 = ((mu_ch[11].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr616;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4515;
    while (what_rule < 4516 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr617;
  if (!((mu_ch[11].mu_empty) == (mu_false))) mu__boolexpr617 = FALSE ;
  else {
  mu__boolexpr617 = ((mu_ch[11].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr617) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4515;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat10("flag_pat10",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[11].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat10 ( mu_msg, mu_flag_pat10 );
if ( mu_flag_pat10 )
{
if ( !(mu_exist( mu_pat10Set, mu_msgNo )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[11].\n";
mu_ch[11].mu_empty = mu_true;
mu_ch[11].mu_msg.clear();
}
  };

};
/******************** RuleBase56 ********************/
class RuleBase56
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[7]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr618;
  if (!((mu_ch[7].mu_empty) == (mu_false))) mu__boolexpr618 = FALSE ;
  else {
  mu__boolexpr618 = ((mu_ch[7].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr618;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4516;
    while (what_rule < 4517 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr619;
  if (!((mu_ch[7].mu_empty) == (mu_false))) mu__boolexpr619 = FALSE ;
  else {
  mu__boolexpr619 = ((mu_ch[7].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr619) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4516;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[7].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
if ( mu_flag_pat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgNo )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[7].\n";
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
}
  };

};
/******************** RuleBase57 ********************/
class RuleBase57
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr620;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr620 = FALSE ;
  else {
  mu__boolexpr620 = ((mu_ch[1].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr620;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4517;
    while (what_rule < 4518 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr621;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = ((mu_ch[1].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr621) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4517;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat4("flag_pat4",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[1].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat4 ( mu_msg, mu_flag_pat4 );
if ( mu_flag_pat4 )
{
if ( !(mu_exist( mu_pat4Set, mu_msgNo )) )
{
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[1].\n";
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
}
  };

};
/******************** RuleBase58 ********************/
class RuleBase58
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleD2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr622;
bool mu__boolexpr623;
  if (!((mu_roleD[mu_i].mu_st) == (mu_D2))) mu__boolexpr623 = FALSE ;
  else {
  mu__boolexpr623 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr623)) mu__boolexpr622 = FALSE ;
  else {
  mu__boolexpr622 = (!(mu_roleD[mu_i].mu_commit)) ; 
}
    return mu__boolexpr622;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4518;
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4519 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr624;
bool mu__boolexpr625;
  if (!((mu_roleD[mu_i].mu_st) == (mu_D2))) mu__boolexpr625 = FALSE ;
  else {
  mu__boolexpr625 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr625)) mu__boolexpr624 = FALSE ;
  else {
  mu__boolexpr624 = (!(mu_roleD[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr624) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4518;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons1 ( mu_roleD[mu_i].mu_start, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleD[mu_i].mu_D;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleD[mu_i].mu_st = mu_D1;
cout << "roleD[i] in st2\n";
mu_roleD[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase59 ********************/
class RuleBase59
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleD1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr626;
bool mu__boolexpr627;
  if (!((mu_roleD[mu_i].mu_st) == (mu_D1))) mu__boolexpr627 = FALSE ;
  else {
  mu__boolexpr627 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr627)) mu__boolexpr626 = FALSE ;
  else {
  mu__boolexpr626 = (!(mu_roleD[mu_i].mu_commit)) ; 
}
    return mu__boolexpr626;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4519;
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4520 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr628;
bool mu__boolexpr629;
  if (!((mu_roleD[mu_i].mu_st) == (mu_D1))) mu__boolexpr629 = FALSE ;
  else {
  mu__boolexpr629 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr629)) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = (!(mu_roleD[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr628) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4519;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleDNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat25("flag_pat25",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat25 ( mu_msg, mu_flag_pat25 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleD[mu_i].mu_D;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_D_known[mu_msgNo] = mu_true;
if ( mu_flag_pat25 )
{
mu_destruct25 ( mu_agmsg, mu_msg, mu_roleD[mu_i].mu_locm1, mu_roleD[mu_i].mu_locbn );
bool mu__boolexpr630;
  if (!(mu_matchTmp( mu_roleD[mu_i].mu_locm1, mu_roleD[mu_i].mu_m1 ))) mu__boolexpr630 = FALSE ;
  else {
  mu__boolexpr630 = (mu_matchNonce( mu_roleD[mu_i].mu_locbn, mu_roleD[mu_i].mu_bn )) ; 
}
if ( mu__boolexpr630 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleD[mu_i].mu_st = mu_D2;
}
}
cout << "roleD[i] in st1\n";
  };

};
/******************** RuleBase60 ********************/
class RuleBase60
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC10 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr631;
bool mu__boolexpr632;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C10))) mu__boolexpr632 = FALSE ;
  else {
  mu__boolexpr632 = ((mu_ch[17].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr632)) mu__boolexpr631 = FALSE ;
  else {
  mu__boolexpr631 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr631;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4520;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4521 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr633;
bool mu__boolexpr634;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C10))) mu__boolexpr634 = FALSE ;
  else {
  mu__boolexpr634 = ((mu_ch[17].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr634)) mu__boolexpr633 = FALSE ;
  else {
  mu__boolexpr633 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr633) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4520;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons1 ( mu_roleC[mu_i].mu_sucm, mu_msg, mu_msgNo );
mu_ch[17].mu_empty = mu_false;
mu_ch[17].mu_msg = mu_msg;
mu_ch[17].mu_sender = mu_roleC[mu_i].mu_C;
mu_ch[17].mu_receiver = mu_Intruder;
mu_roleC[mu_i].mu_st = mu_C1;
cout << "roleC[i] in st10\n";
mu_roleC[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase61 ********************/
class RuleBase61
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC9 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr635;
bool mu__boolexpr636;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C9))) mu__boolexpr636 = FALSE ;
  else {
  mu__boolexpr636 = ((mu_ch[16].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr636)) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr635;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4521;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4522 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr637;
bool mu__boolexpr638;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C9))) mu__boolexpr638 = FALSE ;
  else {
  mu__boolexpr638 = ((mu_ch[16].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr638)) mu__boolexpr637 = FALSE ;
  else {
  mu__boolexpr637 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr637) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4521;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[16].mu_msg;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleC[mu_i].mu_C;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_C_known[mu_msgNo] = mu_true;
if ( mu_flag_pat1 )
{
mu_destruct1 ( mu_agmsg, mu_msg, mu_roleC[mu_i].mu_loceapm );
if ( mu_matchNonce( mu_roleC[mu_i].mu_loceapm, mu_roleC[mu_i].mu_eapm ) )
{
mu_ch[16].mu_empty = mu_true;
mu_ch[16].mu_msg.clear();
mu_roleC[mu_i].mu_st = mu_C10;
}
}
cout << "roleC[i] in st9\n";
  };

};
/******************** RuleBase62 ********************/
class RuleBase62
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC8 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr639;
bool mu__boolexpr640;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C8))) mu__boolexpr640 = FALSE ;
  else {
  mu__boolexpr640 = ((mu_ch[13].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr640)) mu__boolexpr639 = FALSE ;
  else {
  mu__boolexpr639 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr639;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4522;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4523 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr641;
bool mu__boolexpr642;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C8))) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = ((mu_ch[13].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = FALSE ;
  else {
  mu__boolexpr641 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr641) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4522;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons9 ( mu_roleC[mu_i].mu_start, mu_roleC[mu_i].mu_ue1, mu_roleC[mu_i].mu_ausf, mu_roleC[mu_i].mu_certc, mu_roleC[mu_i].mu_prekey, mu_msg, mu_msgNo );
mu_ch[13].mu_empty = mu_false;
mu_ch[13].mu_msg = mu_msg;
mu_ch[13].mu_sender = mu_roleC[mu_i].mu_C;
mu_ch[13].mu_receiver = mu_Intruder;
mu_roleC[mu_i].mu_st = mu_C9;
cout << "roleC[i] in st8\n";
  };

};
/******************** RuleBase63 ********************/
class RuleBase63
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC7 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr643;
bool mu__boolexpr644;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C7))) mu__boolexpr644 = FALSE ;
  else {
  mu__boolexpr644 = ((mu_ch[12].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr644)) mu__boolexpr643 = FALSE ;
  else {
  mu__boolexpr643 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr643;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4523;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4524 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr645;
bool mu__boolexpr646;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C7))) mu__boolexpr646 = FALSE ;
  else {
  mu__boolexpr646 = ((mu_ch[12].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr646)) mu__boolexpr645 = FALSE ;
  else {
  mu__boolexpr645 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr645) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4523;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat23("flag_pat23",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[12].mu_msg;
mu_isPat23 ( mu_msg, mu_flag_pat23 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleC[mu_i].mu_C;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_C_known[mu_msgNo] = mu_true;
if ( mu_flag_pat23 )
{
mu_destruct23 ( mu_agmsg, mu_msg, mu_roleC[mu_i].mu_locx6, mu_roleC[mu_i].mu_locx7, mu_roleC[mu_i].mu_locx8, mu_roleC[mu_i].mu_locx9 );
bool mu__boolexpr647;
bool mu__boolexpr648;
bool mu__boolexpr649;
  if (!(mu_matchTmp( mu_roleC[mu_i].mu_locx6, mu_roleC[mu_i].mu_x6 ))) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = (mu_matchTmp( mu_roleC[mu_i].mu_locx7, mu_roleC[mu_i].mu_x7 )) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = FALSE ;
  else {
  mu__boolexpr648 = (mu_matchTmp( mu_roleC[mu_i].mu_locx8, mu_roleC[mu_i].mu_x8 )) ; 
}
  if (!(mu__boolexpr648)) mu__boolexpr647 = FALSE ;
  else {
  mu__boolexpr647 = (mu_matchTmp( mu_roleC[mu_i].mu_locx9, mu_roleC[mu_i].mu_x9 )) ; 
}
if ( mu__boolexpr647 )
{
mu_ch[12].mu_empty = mu_true;
mu_ch[12].mu_msg.clear();
mu_roleC[mu_i].mu_st = mu_C8;
}
}
cout << "roleC[i] in st7\n";
  };

};
/******************** RuleBase64 ********************/
class RuleBase64
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC6 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr650;
bool mu__boolexpr651;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C6))) mu__boolexpr651 = FALSE ;
  else {
  mu__boolexpr651 = ((mu_ch[9].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr651)) mu__boolexpr650 = FALSE ;
  else {
  mu__boolexpr650 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr650;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4524;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4525 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr652;
bool mu__boolexpr653;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C6))) mu__boolexpr653 = FALSE ;
  else {
  mu__boolexpr653 = ((mu_ch[9].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr653)) mu__boolexpr652 = FALSE ;
  else {
  mu__boolexpr652 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr652) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4524;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons2 ( mu_roleC[mu_i].mu_ausf, mu_roleC[mu_i].mu_certc, mu_msg, mu_msgNo );
mu_ch[9].mu_empty = mu_false;
mu_ch[9].mu_msg = mu_msg;
mu_ch[9].mu_sender = mu_roleC[mu_i].mu_C;
mu_ch[9].mu_receiver = mu_Intruder;
mu_roleC[mu_i].mu_st = mu_C7;
cout << "roleC[i] in st6\n";
  };

};
/******************** RuleBase65 ********************/
class RuleBase65
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC5 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr654;
bool mu__boolexpr655;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C5))) mu__boolexpr655 = FALSE ;
  else {
  mu__boolexpr655 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr655)) mu__boolexpr654 = FALSE ;
  else {
  mu__boolexpr654 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr654;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4525;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4526 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr656;
bool mu__boolexpr657;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C5))) mu__boolexpr657 = FALSE ;
  else {
  mu__boolexpr657 = ((mu_ch[8].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr657)) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr656) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4525;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat26("flag_pat26",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[8].mu_msg;
mu_isPat26 ( mu_msg, mu_flag_pat26 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleC[mu_i].mu_C;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_C_known[mu_msgNo] = mu_true;
if ( mu_flag_pat26 )
{
mu_destruct26 ( mu_agmsg, mu_msg, mu_roleC[mu_i].mu_locue );
if ( mu_matchNonce( mu_roleC[mu_i].mu_locue, mu_roleC[mu_i].mu_ue ) )
{
mu_ch[8].mu_empty = mu_true;
mu_ch[8].mu_msg.clear();
mu_roleC[mu_i].mu_st = mu_C6;
}
}
cout << "roleC[i] in st5\n";
  };

};
/******************** RuleBase66 ********************/
class RuleBase66
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr658;
bool mu__boolexpr659;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C4))) mu__boolexpr659 = FALSE ;
  else {
  mu__boolexpr659 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr659)) mu__boolexpr658 = FALSE ;
  else {
  mu__boolexpr658 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr658;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4526;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4527 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr660;
bool mu__boolexpr661;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C4))) mu__boolexpr661 = FALSE ;
  else {
  mu__boolexpr661 = ((mu_ch[5].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr661)) mu__boolexpr660 = FALSE ;
  else {
  mu__boolexpr660 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr660) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4526;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons1 ( mu_roleC[mu_i].mu_start, mu_msg, mu_msgNo );
mu_ch[5].mu_empty = mu_false;
mu_ch[5].mu_msg = mu_msg;
mu_ch[5].mu_sender = mu_roleC[mu_i].mu_C;
mu_ch[5].mu_receiver = mu_Intruder;
mu_roleC[mu_i].mu_st = mu_C5;
cout << "roleC[i] in st4\n";
  };

};
/******************** RuleBase67 ********************/
class RuleBase67
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr662;
bool mu__boolexpr663;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C3))) mu__boolexpr663 = FALSE ;
  else {
  mu__boolexpr663 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr663)) mu__boolexpr662 = FALSE ;
  else {
  mu__boolexpr662 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr662;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4527;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4528 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr664;
bool mu__boolexpr665;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C3))) mu__boolexpr665 = FALSE ;
  else {
  mu__boolexpr665 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr665)) mu__boolexpr664 = FALSE ;
  else {
  mu__boolexpr664 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr664) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4527;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleC[mu_i].mu_C;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_C_known[mu_msgNo] = mu_true;
if ( mu_flag_pat1 )
{
mu_destruct1 ( mu_agmsg, mu_msg, mu_roleC[mu_i].mu_locstart );
if ( mu_matchNonce( mu_roleC[mu_i].mu_locstart, mu_roleC[mu_i].mu_start ) )
{
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
mu_roleC[mu_i].mu_st = mu_C4;
}
}
cout << "roleC[i] in st3\n";
  };

};
/******************** RuleBase68 ********************/
class RuleBase68
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr666;
bool mu__boolexpr667;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C2))) mu__boolexpr667 = FALSE ;
  else {
  mu__boolexpr667 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr667)) mu__boolexpr666 = FALSE ;
  else {
  mu__boolexpr666 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr666;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4528;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4529 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr668;
bool mu__boolexpr669;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C2))) mu__boolexpr669 = FALSE ;
  else {
  mu__boolexpr669 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr669)) mu__boolexpr668 = FALSE ;
  else {
  mu__boolexpr668 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr668) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4528;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons13 ( mu_roleC[mu_i].mu_x1, mu_roleC[mu_i].mu_bn, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleC[mu_i].mu_C;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleC[mu_i].mu_st = mu_C3;
cout << "roleC[i] in st2\n";
  };

};
/******************** RuleBase69 ********************/
class RuleBase69
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleC1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr670;
bool mu__boolexpr671;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C1))) mu__boolexpr671 = FALSE ;
  else {
  mu__boolexpr671 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr671)) mu__boolexpr670 = FALSE ;
  else {
  mu__boolexpr670 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
    return mu__boolexpr670;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4529;
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4530 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr672;
bool mu__boolexpr673;
  if (!((mu_roleC[mu_i].mu_st) == (mu_C1))) mu__boolexpr673 = FALSE ;
  else {
  mu__boolexpr673 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr673)) mu__boolexpr672 = FALSE ;
  else {
  mu__boolexpr672 = (!(mu_roleC[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr672) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4529;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleCNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat25("flag_pat25",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat25 ( mu_msg, mu_flag_pat25 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleC[mu_i].mu_C;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_C_known[mu_msgNo] = mu_true;
if ( mu_flag_pat25 )
{
mu_destruct25 ( mu_agmsg, mu_msg, mu_roleC[mu_i].mu_locm1, mu_roleC[mu_i].mu_locbn );
bool mu__boolexpr674;
  if (!(mu_matchTmp( mu_roleC[mu_i].mu_locm1, mu_roleC[mu_i].mu_m1 ))) mu__boolexpr674 = FALSE ;
  else {
  mu__boolexpr674 = (mu_matchNonce( mu_roleC[mu_i].mu_locbn, mu_roleC[mu_i].mu_bn )) ; 
}
if ( mu__boolexpr674 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleC[mu_i].mu_st = mu_C2;
}
}
cout << "roleC[i] in st1\n";
  };

};
/******************** RuleBase70 ********************/
class RuleBase70
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB16 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr675;
bool mu__boolexpr676;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B16))) mu__boolexpr676 = FALSE ;
  else {
  mu__boolexpr676 = ((mu_ch[18].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr676)) mu__boolexpr675 = FALSE ;
  else {
  mu__boolexpr675 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr675;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4530;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4531 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr677;
bool mu__boolexpr678;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B16))) mu__boolexpr678 = FALSE ;
  else {
  mu__boolexpr678 = ((mu_ch[18].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr678)) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr677) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4530;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons1 ( mu_roleB[mu_i].mu_sucm, mu_msg, mu_msgNo );
mu_ch[18].mu_empty = mu_false;
mu_ch[18].mu_msg = mu_msg;
mu_ch[18].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[18].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B1;
cout << "roleB[i] in st16\n";
mu_roleB[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase71 ********************/
class RuleBase71
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB15 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr679;
bool mu__boolexpr680;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B15))) mu__boolexpr680 = FALSE ;
  else {
  mu__boolexpr680 = ((mu_ch[17].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr680)) mu__boolexpr679 = FALSE ;
  else {
  mu__boolexpr679 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr679;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4531;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4532 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr681;
bool mu__boolexpr682;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B15))) mu__boolexpr682 = FALSE ;
  else {
  mu__boolexpr682 = ((mu_ch[17].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr682)) mu__boolexpr681 = FALSE ;
  else {
  mu__boolexpr681 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr681) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4531;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[17].mu_msg;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat1 )
{
mu_destruct1 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locsucm );
if ( mu_matchNonce( mu_roleB[mu_i].mu_locsucm, mu_roleB[mu_i].mu_sucm ) )
{
mu_ch[17].mu_empty = mu_true;
mu_ch[17].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B16;
}
}
cout << "roleB[i] in st15\n";
  };

};
/******************** RuleBase72 ********************/
class RuleBase72
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB14 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr683;
bool mu__boolexpr684;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B14))) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = ((mu_ch[16].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr684)) mu__boolexpr683 = FALSE ;
  else {
  mu__boolexpr683 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr683;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4532;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4533 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr685;
bool mu__boolexpr686;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B14))) mu__boolexpr686 = FALSE ;
  else {
  mu__boolexpr686 = ((mu_ch[16].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr686)) mu__boolexpr685 = FALSE ;
  else {
  mu__boolexpr685 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr685) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4532;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons1 ( mu_roleB[mu_i].mu_eapm, mu_msg, mu_msgNo );
mu_ch[16].mu_empty = mu_false;
mu_ch[16].mu_msg = mu_msg;
mu_ch[16].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[16].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B15;
cout << "roleB[i] in st14\n";
  };

};
/******************** RuleBase73 ********************/
class RuleBase73
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB13 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr687;
bool mu__boolexpr688;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B13))) mu__boolexpr688 = FALSE ;
  else {
  mu__boolexpr688 = ((mu_ch[15].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr688)) mu__boolexpr687 = FALSE ;
  else {
  mu__boolexpr687 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr687;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4533;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4534 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr689;
bool mu__boolexpr690;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B13))) mu__boolexpr690 = FALSE ;
  else {
  mu__boolexpr690 = ((mu_ch[15].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr690)) mu__boolexpr689 = FALSE ;
  else {
  mu__boolexpr689 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr689) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4533;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[15].mu_msg;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat1 )
{
mu_destruct1 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_loceapm );
if ( mu_matchNonce( mu_roleB[mu_i].mu_loceapm, mu_roleB[mu_i].mu_eapm ) )
{
mu_ch[15].mu_empty = mu_true;
mu_ch[15].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B14;
}
}
cout << "roleB[i] in st13\n";
  };

};
/******************** RuleBase74 ********************/
class RuleBase74
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB12 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr691;
bool mu__boolexpr692;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B12))) mu__boolexpr692 = FALSE ;
  else {
  mu__boolexpr692 = ((mu_ch[14].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr692)) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr691;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4534;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4535 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr693;
bool mu__boolexpr694;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B12))) mu__boolexpr694 = FALSE ;
  else {
  mu__boolexpr694 = ((mu_ch[14].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr694)) mu__boolexpr693 = FALSE ;
  else {
  mu__boolexpr693 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr693) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4534;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons11 ( mu_roleB[mu_i].mu_x10, mu_msg, mu_msgNo );
mu_ch[14].mu_empty = mu_false;
mu_ch[14].mu_msg = mu_msg;
mu_ch[14].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[14].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B13;
cout << "roleB[i] in st12\n";
  };

};
/******************** RuleBase75 ********************/
class RuleBase75
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB11 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr695;
bool mu__boolexpr696;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B11))) mu__boolexpr696 = FALSE ;
  else {
  mu__boolexpr696 = ((mu_ch[13].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr696)) mu__boolexpr695 = FALSE ;
  else {
  mu__boolexpr695 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr695;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4535;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4536 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr697;
bool mu__boolexpr698;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B11))) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = ((mu_ch[13].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = FALSE ;
  else {
  mu__boolexpr697 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr697) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4535;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[13].mu_msg;
mu_isPat11 ( mu_msg, mu_flag_pat11 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat11 )
{
mu_destruct11 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locx10 );
if ( mu_matchTmp( mu_roleB[mu_i].mu_locx10, mu_roleB[mu_i].mu_x10 ) )
{
mu_ch[13].mu_empty = mu_true;
mu_ch[13].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B12;
}
}
cout << "roleB[i] in st11\n";
  };

};
/******************** RuleBase76 ********************/
class RuleBase76
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB10 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr699;
bool mu__boolexpr700;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B10))) mu__boolexpr700 = FALSE ;
  else {
  mu__boolexpr700 = ((mu_ch[12].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr700)) mu__boolexpr699 = FALSE ;
  else {
  mu__boolexpr699 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr699;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4536;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4537 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr701;
bool mu__boolexpr702;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B10))) mu__boolexpr702 = FALSE ;
  else {
  mu__boolexpr702 = ((mu_ch[12].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr702)) mu__boolexpr701 = FALSE ;
  else {
  mu__boolexpr701 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr701) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4536;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons23 ( mu_roleB[mu_i].mu_x6, mu_roleB[mu_i].mu_x7, mu_roleB[mu_i].mu_x8, mu_roleB[mu_i].mu_x9, mu_msg, mu_msgNo );
mu_ch[12].mu_empty = mu_false;
mu_ch[12].mu_msg = mu_msg;
mu_ch[12].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[12].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B11;
cout << "roleB[i] in st10\n";
  };

};
/******************** RuleBase77 ********************/
class RuleBase77
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB9 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr703;
bool mu__boolexpr704;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B9))) mu__boolexpr704 = FALSE ;
  else {
  mu__boolexpr704 = ((mu_ch[11].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr704)) mu__boolexpr703 = FALSE ;
  else {
  mu__boolexpr703 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr703;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4537;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4538 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr705;
bool mu__boolexpr706;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B9))) mu__boolexpr706 = FALSE ;
  else {
  mu__boolexpr706 = ((mu_ch[11].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr706)) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr705) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4537;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat23("flag_pat23",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[11].mu_msg;
mu_isPat23 ( mu_msg, mu_flag_pat23 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat23 )
{
mu_destruct23 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locx6, mu_roleB[mu_i].mu_locx7, mu_roleB[mu_i].mu_locx8, mu_roleB[mu_i].mu_locx9 );
bool mu__boolexpr707;
bool mu__boolexpr708;
bool mu__boolexpr709;
  if (!(mu_matchTmp( mu_roleB[mu_i].mu_locx6, mu_roleB[mu_i].mu_x6 ))) mu__boolexpr709 = FALSE ;
  else {
  mu__boolexpr709 = (mu_matchTmp( mu_roleB[mu_i].mu_locx7, mu_roleB[mu_i].mu_x7 )) ; 
}
  if (!(mu__boolexpr709)) mu__boolexpr708 = FALSE ;
  else {
  mu__boolexpr708 = (mu_matchTmp( mu_roleB[mu_i].mu_locx8, mu_roleB[mu_i].mu_x8 )) ; 
}
  if (!(mu__boolexpr708)) mu__boolexpr707 = FALSE ;
  else {
  mu__boolexpr707 = (mu_matchTmp( mu_roleB[mu_i].mu_locx9, mu_roleB[mu_i].mu_x9 )) ; 
}
if ( mu__boolexpr707 )
{
mu_ch[11].mu_empty = mu_true;
mu_ch[11].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B10;
}
}
cout << "roleB[i] in st9\n";
  };

};
/******************** RuleBase78 ********************/
class RuleBase78
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB8 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr710;
bool mu__boolexpr711;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B8))) mu__boolexpr711 = FALSE ;
  else {
  mu__boolexpr711 = ((mu_ch[10].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr711)) mu__boolexpr710 = FALSE ;
  else {
  mu__boolexpr710 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr710;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4538;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4539 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr712;
bool mu__boolexpr713;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B8))) mu__boolexpr713 = FALSE ;
  else {
  mu__boolexpr713 = ((mu_ch[10].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr713)) mu__boolexpr712 = FALSE ;
  else {
  mu__boolexpr712 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr712) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4538;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons18 ( mu_roleB[mu_i].mu_x4, mu_roleB[mu_i].mu_x5, mu_msg, mu_msgNo );
mu_ch[10].mu_empty = mu_false;
mu_ch[10].mu_msg = mu_msg;
mu_ch[10].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[10].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B9;
cout << "roleB[i] in st8\n";
  };

};
/******************** RuleBase79 ********************/
class RuleBase79
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB7 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr714;
bool mu__boolexpr715;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B7))) mu__boolexpr715 = FALSE ;
  else {
  mu__boolexpr715 = ((mu_ch[9].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr715)) mu__boolexpr714 = FALSE ;
  else {
  mu__boolexpr714 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr714;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4539;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4540 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr716;
bool mu__boolexpr717;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B7))) mu__boolexpr717 = FALSE ;
  else {
  mu__boolexpr717 = ((mu_ch[9].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr717)) mu__boolexpr716 = FALSE ;
  else {
  mu__boolexpr716 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr716) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4539;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat18("flag_pat18",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[9].mu_msg;
mu_isPat18 ( mu_msg, mu_flag_pat18 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat18 )
{
mu_destruct18 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locx4, mu_roleB[mu_i].mu_locx5 );
bool mu__boolexpr718;
  if (!(mu_matchTmp( mu_roleB[mu_i].mu_locx4, mu_roleB[mu_i].mu_x4 ))) mu__boolexpr718 = FALSE ;
  else {
  mu__boolexpr718 = (mu_matchTmp( mu_roleB[mu_i].mu_locx5, mu_roleB[mu_i].mu_x5 )) ; 
}
if ( mu__boolexpr718 )
{
mu_ch[9].mu_empty = mu_true;
mu_ch[9].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B8;
}
}
cout << "roleB[i] in st7\n";
  };

};
/******************** RuleBase80 ********************/
class RuleBase80
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB6 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr719;
bool mu__boolexpr720;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B6))) mu__boolexpr720 = FALSE ;
  else {
  mu__boolexpr720 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr720)) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr719;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4540;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4541 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr721;
bool mu__boolexpr722;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B6))) mu__boolexpr722 = FALSE ;
  else {
  mu__boolexpr722 = ((mu_ch[8].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr722)) mu__boolexpr721 = FALSE ;
  else {
  mu__boolexpr721 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr721) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4540;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons15 ( mu_roleB[mu_i].mu_x3, mu_msg, mu_msgNo );
mu_ch[8].mu_empty = mu_false;
mu_ch[8].mu_msg = mu_msg;
mu_ch[8].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[8].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B7;
cout << "roleB[i] in st6\n";
  };

};
/******************** RuleBase81 ********************/
class RuleBase81
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB5 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr723;
bool mu__boolexpr724;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B5))) mu__boolexpr724 = FALSE ;
  else {
  mu__boolexpr724 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr724)) mu__boolexpr723 = FALSE ;
  else {
  mu__boolexpr723 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr723;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4541;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4542 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr725;
bool mu__boolexpr726;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B5))) mu__boolexpr726 = FALSE ;
  else {
  mu__boolexpr726 = ((mu_ch[7].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr726)) mu__boolexpr725 = FALSE ;
  else {
  mu__boolexpr725 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr725) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4541;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat15("flag_pat15",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[7].mu_msg;
mu_isPat15 ( mu_msg, mu_flag_pat15 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat15 )
{
mu_destruct15 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locx3 );
if ( mu_matchTmp( mu_roleB[mu_i].mu_locx3, mu_roleB[mu_i].mu_x3 ) )
{
mu_ch[7].mu_empty = mu_true;
mu_ch[7].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B6;
}
}
cout << "roleB[i] in st5\n";
  };

};
/******************** RuleBase82 ********************/
class RuleBase82
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr727;
bool mu__boolexpr728;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B4))) mu__boolexpr728 = FALSE ;
  else {
  mu__boolexpr728 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr728)) mu__boolexpr727 = FALSE ;
  else {
  mu__boolexpr727 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr727;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4542;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4543 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr729;
bool mu__boolexpr730;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B4))) mu__boolexpr730 = FALSE ;
  else {
  mu__boolexpr730 = ((mu_ch[6].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr730)) mu__boolexpr729 = FALSE ;
  else {
  mu__boolexpr729 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr729) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4542;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons14 ( mu_roleB[mu_i].mu_x2, mu_msg, mu_msgNo );
mu_ch[6].mu_empty = mu_false;
mu_ch[6].mu_msg = mu_msg;
mu_ch[6].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[6].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B5;
cout << "roleB[i] in st4\n";
  };

};
/******************** RuleBase83 ********************/
class RuleBase83
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr731;
bool mu__boolexpr732;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr732 = FALSE ;
  else {
  mu__boolexpr732 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr732)) mu__boolexpr731 = FALSE ;
  else {
  mu__boolexpr731 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr731;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4543;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4544 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr733;
bool mu__boolexpr734;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr734 = FALSE ;
  else {
  mu__boolexpr734 = ((mu_ch[5].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr734)) mu__boolexpr733 = FALSE ;
  else {
  mu__boolexpr733 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr733) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4543;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat14("flag_pat14",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[5].mu_msg;
mu_isPat14 ( mu_msg, mu_flag_pat14 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat14 )
{
mu_destruct14 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locx2 );
if ( mu_matchTmp( mu_roleB[mu_i].mu_locx2, mu_roleB[mu_i].mu_x2 ) )
{
mu_ch[5].mu_empty = mu_true;
mu_ch[5].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B4;
}
}
cout << "roleB[i] in st3\n";
  };

};
/******************** RuleBase84 ********************/
class RuleBase84
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr735;
bool mu__boolexpr736;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr736 = FALSE ;
  else {
  mu__boolexpr736 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr736)) mu__boolexpr735 = FALSE ;
  else {
  mu__boolexpr735 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr735;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4544;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4545 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr737;
bool mu__boolexpr738;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr738 = FALSE ;
  else {
  mu__boolexpr738 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr738)) mu__boolexpr737 = FALSE ;
  else {
  mu__boolexpr737 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr737) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4544;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons13 ( mu_roleB[mu_i].mu_x1, mu_roleB[mu_i].mu_bn, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B3;
cout << "roleB[i] in st2\n";
  };

};
/******************** RuleBase85 ********************/
class RuleBase85
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr739;
bool mu__boolexpr740;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr740 = FALSE ;
  else {
  mu__boolexpr740 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr740)) mu__boolexpr739 = FALSE ;
  else {
  mu__boolexpr739 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr739;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4545;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4546 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr741;
bool mu__boolexpr742;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr742 = FALSE ;
  else {
  mu__boolexpr742 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr742)) mu__boolexpr741 = FALSE ;
  else {
  mu__boolexpr741 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr741) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4545;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat12 ( mu_msg, mu_flag_pat12 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat12 )
{
mu_destruct12 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locx1 );
if ( mu_matchTmp( mu_roleB[mu_i].mu_locx1, mu_roleB[mu_i].mu_x1 ) )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B2;
}
}
cout << "roleB[i] in st1\n";
  };

};
/******************** RuleBase86 ********************/
class RuleBase86
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA8 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr743;
bool mu__boolexpr744;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A8))) mu__boolexpr744 = FALSE ;
  else {
  mu__boolexpr744 = ((mu_ch[18].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr744)) mu__boolexpr743 = FALSE ;
  else {
  mu__boolexpr743 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr743;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4546;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4547 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr745;
bool mu__boolexpr746;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A8))) mu__boolexpr746 = FALSE ;
  else {
  mu__boolexpr746 = ((mu_ch[18].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr746)) mu__boolexpr745 = FALSE ;
  else {
  mu__boolexpr745 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr745) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4546;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[18].mu_msg;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleA[mu_i].mu_A;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_A_known[mu_msgNo] = mu_true;
if ( mu_flag_pat1 )
{
mu_destruct1 ( mu_agmsg, mu_msg, mu_roleA[mu_i].mu_locsucm );
if ( mu_matchNonce( mu_roleA[mu_i].mu_locsucm, mu_roleA[mu_i].mu_sucm ) )
{
mu_ch[18].mu_empty = mu_true;
mu_ch[18].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A1;
}
}
cout << "roleA[i] in st8\n";
mu_roleA[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase87 ********************/
class RuleBase87
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA7 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr747;
bool mu__boolexpr748;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A7))) mu__boolexpr748 = FALSE ;
  else {
  mu__boolexpr748 = ((mu_ch[15].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr748)) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr747;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4547;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4548 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr749;
bool mu__boolexpr750;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A7))) mu__boolexpr750 = FALSE ;
  else {
  mu__boolexpr750 = ((mu_ch[15].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr750)) mu__boolexpr749 = FALSE ;
  else {
  mu__boolexpr749 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr749) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4547;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons1 ( mu_roleA[mu_i].mu_eapm, mu_msg, mu_msgNo );
mu_ch[15].mu_empty = mu_false;
mu_ch[15].mu_msg = mu_msg;
mu_ch[15].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[15].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A8;
cout << "roleA[i] in st7\n";
  };

};
/******************** RuleBase88 ********************/
class RuleBase88
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA6 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr751;
bool mu__boolexpr752;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A6))) mu__boolexpr752 = FALSE ;
  else {
  mu__boolexpr752 = ((mu_ch[14].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr752)) mu__boolexpr751 = FALSE ;
  else {
  mu__boolexpr751 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr751;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4548;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4549 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr753;
bool mu__boolexpr754;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A6))) mu__boolexpr754 = FALSE ;
  else {
  mu__boolexpr754 = ((mu_ch[14].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr754)) mu__boolexpr753 = FALSE ;
  else {
  mu__boolexpr753 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr753) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4548;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[14].mu_msg;
mu_isPat11 ( mu_msg, mu_flag_pat11 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleA[mu_i].mu_A;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_A_known[mu_msgNo] = mu_true;
if ( mu_flag_pat11 )
{
mu_destruct11 ( mu_agmsg, mu_msg, mu_roleA[mu_i].mu_locx10 );
if ( mu_matchTmp( mu_roleA[mu_i].mu_locx10, mu_roleA[mu_i].mu_x10 ) )
{
mu_ch[14].mu_empty = mu_true;
mu_ch[14].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A7;
}
}
cout << "roleA[i] in st6\n";
  };

};
/******************** RuleBase89 ********************/
class RuleBase89
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA5 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr755;
bool mu__boolexpr756;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A5))) mu__boolexpr756 = FALSE ;
  else {
  mu__boolexpr756 = ((mu_ch[11].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr756)) mu__boolexpr755 = FALSE ;
  else {
  mu__boolexpr755 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr755;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4549;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4550 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr757;
bool mu__boolexpr758;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A5))) mu__boolexpr758 = FALSE ;
  else {
  mu__boolexpr758 = ((mu_ch[11].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr758)) mu__boolexpr757 = FALSE ;
  else {
  mu__boolexpr757 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr757) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4549;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons10 ( mu_roleA[mu_i].mu_prekey, mu_roleA[mu_i].mu_C, mu_roleA[mu_i].mu_certa, mu_roleA[mu_i].mu_start, mu_roleA[mu_i].mu_ue1, mu_roleA[mu_i].mu_ausf, mu_roleA[mu_i].mu_certc, mu_roleA[mu_i].mu_A, mu_msg, mu_msgNo );
mu_ch[11].mu_empty = mu_false;
mu_ch[11].mu_msg = mu_msg;
mu_ch[11].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[11].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A6;
cout << "roleA[i] in st5\n";
  };

};
/******************** RuleBase90 ********************/
class RuleBase90
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr759;
bool mu__boolexpr760;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A4))) mu__boolexpr760 = FALSE ;
  else {
  mu__boolexpr760 = ((mu_ch[10].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr760)) mu__boolexpr759 = FALSE ;
  else {
  mu__boolexpr759 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr759;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4550;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4551 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr761;
bool mu__boolexpr762;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A4))) mu__boolexpr762 = FALSE ;
  else {
  mu__boolexpr762 = ((mu_ch[10].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr762)) mu__boolexpr761 = FALSE ;
  else {
  mu__boolexpr761 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr761) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4550;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat2("flag_pat2",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[10].mu_msg;
mu_isPat2 ( mu_msg, mu_flag_pat2 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleA[mu_i].mu_A;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_A_known[mu_msgNo] = mu_true;
if ( mu_flag_pat2 )
{
mu_destruct2 ( mu_agmsg, mu_msg, mu_roleA[mu_i].mu_locausf, mu_roleA[mu_i].mu_loccertc );
bool mu__boolexpr763;
  if (!(mu_matchNonce( mu_roleA[mu_i].mu_locausf, mu_roleA[mu_i].mu_ausf ))) mu__boolexpr763 = FALSE ;
  else {
  mu__boolexpr763 = (mu_matchNonce( mu_roleA[mu_i].mu_loccertc, mu_roleA[mu_i].mu_certc )) ; 
}
if ( mu__boolexpr763 )
{
mu_ch[10].mu_empty = mu_true;
mu_ch[10].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A5;
}
}
cout << "roleA[i] in st4\n";
  };

};
/******************** RuleBase91 ********************/
class RuleBase91
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr764;
bool mu__boolexpr765;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr765 = FALSE ;
  else {
  mu__boolexpr765 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr765)) mu__boolexpr764 = FALSE ;
  else {
  mu__boolexpr764 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr764;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4551;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4552 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr766;
bool mu__boolexpr767;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A3))) mu__boolexpr767 = FALSE ;
  else {
  mu__boolexpr767 = ((mu_ch[7].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr767)) mu__boolexpr766 = FALSE ;
  else {
  mu__boolexpr766 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr766) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4551;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons1 ( mu_roleA[mu_i].mu_ue1, mu_msg, mu_msgNo );
mu_ch[7].mu_empty = mu_false;
mu_ch[7].mu_msg = mu_msg;
mu_ch[7].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[7].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A4;
cout << "roleA[i] in st3\n";
  };

};
/******************** RuleBase92 ********************/
class RuleBase92
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr768;
bool mu__boolexpr769;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr769 = FALSE ;
  else {
  mu__boolexpr769 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr769)) mu__boolexpr768 = FALSE ;
  else {
  mu__boolexpr768 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr768;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4552;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4553 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr770;
bool mu__boolexpr771;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr771 = FALSE ;
  else {
  mu__boolexpr771 = ((mu_ch[6].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr771)) mu__boolexpr770 = FALSE ;
  else {
  mu__boolexpr770 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr770) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4552;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat1("flag_pat1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[6].mu_msg;
mu_isPat1 ( mu_msg, mu_flag_pat1 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleA[mu_i].mu_A;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_A_known[mu_msgNo] = mu_true;
if ( mu_flag_pat1 )
{
mu_destruct1 ( mu_agmsg, mu_msg, mu_roleA[mu_i].mu_locstart );
if ( mu_matchNonce( mu_roleA[mu_i].mu_locstart, mu_roleA[mu_i].mu_start ) )
{
mu_ch[6].mu_empty = mu_true;
mu_ch[6].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A3;
}
}
cout << "roleA[i] in st2\n";
  };

};
/******************** RuleBase93 ********************/
class RuleBase93
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr772;
bool mu__boolexpr773;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr773 = FALSE ;
  else {
  mu__boolexpr773 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr773)) mu__boolexpr772 = FALSE ;
  else {
  mu__boolexpr772 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr772;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4553;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 4554 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr774;
bool mu__boolexpr775;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr775 = FALSE ;
  else {
  mu__boolexpr775 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr775)) mu__boolexpr774 = FALSE ;
  else {
  mu__boolexpr774 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr774) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4553;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons4 ( mu_roleA[mu_i].mu_supi, mu_roleA[mu_i].mu_ue, mu_roleA[mu_i].mu_D, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A2;
cout << "roleA[i] in st1\n";
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
  RuleBase19 R19;
  RuleBase20 R20;
  RuleBase21 R21;
  RuleBase22 R22;
  RuleBase23 R23;
  RuleBase24 R24;
  RuleBase25 R25;
  RuleBase26 R26;
  RuleBase27 R27;
  RuleBase28 R28;
  RuleBase29 R29;
  RuleBase30 R30;
  RuleBase31 R31;
  RuleBase32 R32;
  RuleBase33 R33;
  RuleBase34 R34;
  RuleBase35 R35;
  RuleBase36 R36;
  RuleBase37 R37;
  RuleBase38 R38;
  RuleBase39 R39;
  RuleBase40 R40;
  RuleBase41 R41;
  RuleBase42 R42;
  RuleBase43 R43;
  RuleBase44 R44;
  RuleBase45 R45;
  RuleBase46 R46;
  RuleBase47 R47;
  RuleBase48 R48;
  RuleBase49 R49;
  RuleBase50 R50;
  RuleBase51 R51;
  RuleBase52 R52;
  RuleBase53 R53;
  RuleBase54 R54;
  RuleBase55 R55;
  RuleBase56 R56;
  RuleBase57 R57;
  RuleBase58 R58;
  RuleBase59 R59;
  RuleBase60 R60;
  RuleBase61 R61;
  RuleBase62 R62;
  RuleBase63 R63;
  RuleBase64 R64;
  RuleBase65 R65;
  RuleBase66 R66;
  RuleBase67 R67;
  RuleBase68 R68;
  RuleBase69 R69;
  RuleBase70 R70;
  RuleBase71 R71;
  RuleBase72 R72;
  RuleBase73 R73;
  RuleBase74 R74;
  RuleBase75 R75;
  RuleBase76 R76;
  RuleBase77 R77;
  RuleBase78 R78;
  RuleBase79 R79;
  RuleBase80 R80;
  RuleBase81 R81;
  RuleBase82 R82;
  RuleBase83 R83;
  RuleBase84 R84;
  RuleBase85 R85;
  RuleBase86 R86;
  RuleBase87 R87;
  RuleBase88 R88;
  RuleBase89 R89;
  RuleBase90 R90;
  RuleBase91 R91;
  RuleBase92 R92;
  RuleBase93 R93;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<6)
    { R0.NextRule(what_rule);
      if (what_rule<6) return; }
  if (what_rule>=6 && what_rule<12)
    { R1.NextRule(what_rule);
      if (what_rule<12) return; }
  if (what_rule>=12 && what_rule<48)
    { R2.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<54)
    { R3.NextRule(what_rule);
      if (what_rule<54) return; }
  if (what_rule>=54 && what_rule<1350)
    { R4.NextRule(what_rule);
      if (what_rule<1350) return; }
  if (what_rule>=1350 && what_rule<1356)
    { R5.NextRule(what_rule);
      if (what_rule<1356) return; }
  if (what_rule>=1356 && what_rule<1392)
    { R6.NextRule(what_rule);
      if (what_rule<1392) return; }
  if (what_rule>=1392 && what_rule<1398)
    { R7.NextRule(what_rule);
      if (what_rule<1398) return; }
  if (what_rule>=1398 && what_rule<1434)
    { R8.NextRule(what_rule);
      if (what_rule<1434) return; }
  if (what_rule>=1434 && what_rule<1440)
    { R9.NextRule(what_rule);
      if (what_rule<1440) return; }
  if (what_rule>=1440 && what_rule<2736)
    { R10.NextRule(what_rule);
      if (what_rule<2736) return; }
  if (what_rule>=2736 && what_rule<2742)
    { R11.NextRule(what_rule);
      if (what_rule<2742) return; }
  if (what_rule>=2742 && what_rule<2958)
    { R12.NextRule(what_rule);
      if (what_rule<2958) return; }
  if (what_rule>=2958 && what_rule<2964)
    { R13.NextRule(what_rule);
      if (what_rule<2964) return; }
  if (what_rule>=2964 && what_rule<4260)
    { R14.NextRule(what_rule);
      if (what_rule<4260) return; }
  if (what_rule>=4260 && what_rule<4266)
    { R15.NextRule(what_rule);
      if (what_rule<4266) return; }
  if (what_rule>=4266 && what_rule<4302)
    { R16.NextRule(what_rule);
      if (what_rule<4302) return; }
  if (what_rule>=4302 && what_rule<4308)
    { R17.NextRule(what_rule);
      if (what_rule<4308) return; }
  if (what_rule>=4308 && what_rule<4344)
    { R18.NextRule(what_rule);
      if (what_rule<4344) return; }
  if (what_rule>=4344 && what_rule<4350)
    { R19.NextRule(what_rule);
      if (what_rule<4350) return; }
  if (what_rule>=4350 && what_rule<4386)
    { R20.NextRule(what_rule);
      if (what_rule<4386) return; }
  if (what_rule>=4386 && what_rule<4392)
    { R21.NextRule(what_rule);
      if (what_rule<4392) return; }
  if (what_rule>=4392 && what_rule<4398)
    { R22.NextRule(what_rule);
      if (what_rule<4398) return; }
  if (what_rule>=4398 && what_rule<4404)
    { R23.NextRule(what_rule);
      if (what_rule<4404) return; }
  if (what_rule>=4404 && what_rule<4410)
    { R24.NextRule(what_rule);
      if (what_rule<4410) return; }
  if (what_rule>=4410 && what_rule<4416)
    { R25.NextRule(what_rule);
      if (what_rule<4416) return; }
  if (what_rule>=4416 && what_rule<4422)
    { R26.NextRule(what_rule);
      if (what_rule<4422) return; }
  if (what_rule>=4422 && what_rule<4428)
    { R27.NextRule(what_rule);
      if (what_rule<4428) return; }
  if (what_rule>=4428 && what_rule<4434)
    { R28.NextRule(what_rule);
      if (what_rule<4434) return; }
  if (what_rule>=4434 && what_rule<4440)
    { R29.NextRule(what_rule);
      if (what_rule<4440) return; }
  if (what_rule>=4440 && what_rule<4446)
    { R30.NextRule(what_rule);
      if (what_rule<4446) return; }
  if (what_rule>=4446 && what_rule<4452)
    { R31.NextRule(what_rule);
      if (what_rule<4452) return; }
  if (what_rule>=4452 && what_rule<4458)
    { R32.NextRule(what_rule);
      if (what_rule<4458) return; }
  if (what_rule>=4458 && what_rule<4464)
    { R33.NextRule(what_rule);
      if (what_rule<4464) return; }
  if (what_rule>=4464 && what_rule<4470)
    { R34.NextRule(what_rule);
      if (what_rule<4470) return; }
  if (what_rule>=4470 && what_rule<4476)
    { R35.NextRule(what_rule);
      if (what_rule<4476) return; }
  if (what_rule>=4476 && what_rule<4482)
    { R36.NextRule(what_rule);
      if (what_rule<4482) return; }
  if (what_rule>=4482 && what_rule<4488)
    { R37.NextRule(what_rule);
      if (what_rule<4488) return; }
  if (what_rule>=4488 && what_rule<4494)
    { R38.NextRule(what_rule);
      if (what_rule<4494) return; }
  if (what_rule>=4494 && what_rule<4500)
    { R39.NextRule(what_rule);
      if (what_rule<4500) return; }
  if (what_rule>=4500 && what_rule<4501)
    { R40.NextRule(what_rule);
      if (what_rule<4501) return; }
  if (what_rule>=4501 && what_rule<4502)
    { R41.NextRule(what_rule);
      if (what_rule<4502) return; }
  if (what_rule>=4502 && what_rule<4503)
    { R42.NextRule(what_rule);
      if (what_rule<4503) return; }
  if (what_rule>=4503 && what_rule<4504)
    { R43.NextRule(what_rule);
      if (what_rule<4504) return; }
  if (what_rule>=4504 && what_rule<4505)
    { R44.NextRule(what_rule);
      if (what_rule<4505) return; }
  if (what_rule>=4505 && what_rule<4506)
    { R45.NextRule(what_rule);
      if (what_rule<4506) return; }
  if (what_rule>=4506 && what_rule<4507)
    { R46.NextRule(what_rule);
      if (what_rule<4507) return; }
  if (what_rule>=4507 && what_rule<4508)
    { R47.NextRule(what_rule);
      if (what_rule<4508) return; }
  if (what_rule>=4508 && what_rule<4509)
    { R48.NextRule(what_rule);
      if (what_rule<4509) return; }
  if (what_rule>=4509 && what_rule<4510)
    { R49.NextRule(what_rule);
      if (what_rule<4510) return; }
  if (what_rule>=4510 && what_rule<4511)
    { R50.NextRule(what_rule);
      if (what_rule<4511) return; }
  if (what_rule>=4511 && what_rule<4512)
    { R51.NextRule(what_rule);
      if (what_rule<4512) return; }
  if (what_rule>=4512 && what_rule<4513)
    { R52.NextRule(what_rule);
      if (what_rule<4513) return; }
  if (what_rule>=4513 && what_rule<4514)
    { R53.NextRule(what_rule);
      if (what_rule<4514) return; }
  if (what_rule>=4514 && what_rule<4515)
    { R54.NextRule(what_rule);
      if (what_rule<4515) return; }
  if (what_rule>=4515 && what_rule<4516)
    { R55.NextRule(what_rule);
      if (what_rule<4516) return; }
  if (what_rule>=4516 && what_rule<4517)
    { R56.NextRule(what_rule);
      if (what_rule<4517) return; }
  if (what_rule>=4517 && what_rule<4518)
    { R57.NextRule(what_rule);
      if (what_rule<4518) return; }
  if (what_rule>=4518 && what_rule<4519)
    { R58.NextRule(what_rule);
      if (what_rule<4519) return; }
  if (what_rule>=4519 && what_rule<4520)
    { R59.NextRule(what_rule);
      if (what_rule<4520) return; }
  if (what_rule>=4520 && what_rule<4521)
    { R60.NextRule(what_rule);
      if (what_rule<4521) return; }
  if (what_rule>=4521 && what_rule<4522)
    { R61.NextRule(what_rule);
      if (what_rule<4522) return; }
  if (what_rule>=4522 && what_rule<4523)
    { R62.NextRule(what_rule);
      if (what_rule<4523) return; }
  if (what_rule>=4523 && what_rule<4524)
    { R63.NextRule(what_rule);
      if (what_rule<4524) return; }
  if (what_rule>=4524 && what_rule<4525)
    { R64.NextRule(what_rule);
      if (what_rule<4525) return; }
  if (what_rule>=4525 && what_rule<4526)
    { R65.NextRule(what_rule);
      if (what_rule<4526) return; }
  if (what_rule>=4526 && what_rule<4527)
    { R66.NextRule(what_rule);
      if (what_rule<4527) return; }
  if (what_rule>=4527 && what_rule<4528)
    { R67.NextRule(what_rule);
      if (what_rule<4528) return; }
  if (what_rule>=4528 && what_rule<4529)
    { R68.NextRule(what_rule);
      if (what_rule<4529) return; }
  if (what_rule>=4529 && what_rule<4530)
    { R69.NextRule(what_rule);
      if (what_rule<4530) return; }
  if (what_rule>=4530 && what_rule<4531)
    { R70.NextRule(what_rule);
      if (what_rule<4531) return; }
  if (what_rule>=4531 && what_rule<4532)
    { R71.NextRule(what_rule);
      if (what_rule<4532) return; }
  if (what_rule>=4532 && what_rule<4533)
    { R72.NextRule(what_rule);
      if (what_rule<4533) return; }
  if (what_rule>=4533 && what_rule<4534)
    { R73.NextRule(what_rule);
      if (what_rule<4534) return; }
  if (what_rule>=4534 && what_rule<4535)
    { R74.NextRule(what_rule);
      if (what_rule<4535) return; }
  if (what_rule>=4535 && what_rule<4536)
    { R75.NextRule(what_rule);
      if (what_rule<4536) return; }
  if (what_rule>=4536 && what_rule<4537)
    { R76.NextRule(what_rule);
      if (what_rule<4537) return; }
  if (what_rule>=4537 && what_rule<4538)
    { R77.NextRule(what_rule);
      if (what_rule<4538) return; }
  if (what_rule>=4538 && what_rule<4539)
    { R78.NextRule(what_rule);
      if (what_rule<4539) return; }
  if (what_rule>=4539 && what_rule<4540)
    { R79.NextRule(what_rule);
      if (what_rule<4540) return; }
  if (what_rule>=4540 && what_rule<4541)
    { R80.NextRule(what_rule);
      if (what_rule<4541) return; }
  if (what_rule>=4541 && what_rule<4542)
    { R81.NextRule(what_rule);
      if (what_rule<4542) return; }
  if (what_rule>=4542 && what_rule<4543)
    { R82.NextRule(what_rule);
      if (what_rule<4543) return; }
  if (what_rule>=4543 && what_rule<4544)
    { R83.NextRule(what_rule);
      if (what_rule<4544) return; }
  if (what_rule>=4544 && what_rule<4545)
    { R84.NextRule(what_rule);
      if (what_rule<4545) return; }
  if (what_rule>=4545 && what_rule<4546)
    { R85.NextRule(what_rule);
      if (what_rule<4546) return; }
  if (what_rule>=4546 && what_rule<4547)
    { R86.NextRule(what_rule);
      if (what_rule<4547) return; }
  if (what_rule>=4547 && what_rule<4548)
    { R87.NextRule(what_rule);
      if (what_rule<4548) return; }
  if (what_rule>=4548 && what_rule<4549)
    { R88.NextRule(what_rule);
      if (what_rule<4549) return; }
  if (what_rule>=4549 && what_rule<4550)
    { R89.NextRule(what_rule);
      if (what_rule<4550) return; }
  if (what_rule>=4550 && what_rule<4551)
    { R90.NextRule(what_rule);
      if (what_rule<4551) return; }
  if (what_rule>=4551 && what_rule<4552)
    { R91.NextRule(what_rule);
      if (what_rule<4552) return; }
  if (what_rule>=4552 && what_rule<4553)
    { R92.NextRule(what_rule);
      if (what_rule<4553) return; }
  if (what_rule>=4553 && what_rule<4554)
    { R93.NextRule(what_rule);
      if (what_rule<4554) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=5) return R0.Condition(r-0);
  if (r>=6 && r<=11) return R1.Condition(r-6);
  if (r>=12 && r<=47) return R2.Condition(r-12);
  if (r>=48 && r<=53) return R3.Condition(r-48);
  if (r>=54 && r<=1349) return R4.Condition(r-54);
  if (r>=1350 && r<=1355) return R5.Condition(r-1350);
  if (r>=1356 && r<=1391) return R6.Condition(r-1356);
  if (r>=1392 && r<=1397) return R7.Condition(r-1392);
  if (r>=1398 && r<=1433) return R8.Condition(r-1398);
  if (r>=1434 && r<=1439) return R9.Condition(r-1434);
  if (r>=1440 && r<=2735) return R10.Condition(r-1440);
  if (r>=2736 && r<=2741) return R11.Condition(r-2736);
  if (r>=2742 && r<=2957) return R12.Condition(r-2742);
  if (r>=2958 && r<=2963) return R13.Condition(r-2958);
  if (r>=2964 && r<=4259) return R14.Condition(r-2964);
  if (r>=4260 && r<=4265) return R15.Condition(r-4260);
  if (r>=4266 && r<=4301) return R16.Condition(r-4266);
  if (r>=4302 && r<=4307) return R17.Condition(r-4302);
  if (r>=4308 && r<=4343) return R18.Condition(r-4308);
  if (r>=4344 && r<=4349) return R19.Condition(r-4344);
  if (r>=4350 && r<=4385) return R20.Condition(r-4350);
  if (r>=4386 && r<=4391) return R21.Condition(r-4386);
  if (r>=4392 && r<=4397) return R22.Condition(r-4392);
  if (r>=4398 && r<=4403) return R23.Condition(r-4398);
  if (r>=4404 && r<=4409) return R24.Condition(r-4404);
  if (r>=4410 && r<=4415) return R25.Condition(r-4410);
  if (r>=4416 && r<=4421) return R26.Condition(r-4416);
  if (r>=4422 && r<=4427) return R27.Condition(r-4422);
  if (r>=4428 && r<=4433) return R28.Condition(r-4428);
  if (r>=4434 && r<=4439) return R29.Condition(r-4434);
  if (r>=4440 && r<=4445) return R30.Condition(r-4440);
  if (r>=4446 && r<=4451) return R31.Condition(r-4446);
  if (r>=4452 && r<=4457) return R32.Condition(r-4452);
  if (r>=4458 && r<=4463) return R33.Condition(r-4458);
  if (r>=4464 && r<=4469) return R34.Condition(r-4464);
  if (r>=4470 && r<=4475) return R35.Condition(r-4470);
  if (r>=4476 && r<=4481) return R36.Condition(r-4476);
  if (r>=4482 && r<=4487) return R37.Condition(r-4482);
  if (r>=4488 && r<=4493) return R38.Condition(r-4488);
  if (r>=4494 && r<=4499) return R39.Condition(r-4494);
  if (r>=4500 && r<=4500) return R40.Condition(r-4500);
  if (r>=4501 && r<=4501) return R41.Condition(r-4501);
  if (r>=4502 && r<=4502) return R42.Condition(r-4502);
  if (r>=4503 && r<=4503) return R43.Condition(r-4503);
  if (r>=4504 && r<=4504) return R44.Condition(r-4504);
  if (r>=4505 && r<=4505) return R45.Condition(r-4505);
  if (r>=4506 && r<=4506) return R46.Condition(r-4506);
  if (r>=4507 && r<=4507) return R47.Condition(r-4507);
  if (r>=4508 && r<=4508) return R48.Condition(r-4508);
  if (r>=4509 && r<=4509) return R49.Condition(r-4509);
  if (r>=4510 && r<=4510) return R50.Condition(r-4510);
  if (r>=4511 && r<=4511) return R51.Condition(r-4511);
  if (r>=4512 && r<=4512) return R52.Condition(r-4512);
  if (r>=4513 && r<=4513) return R53.Condition(r-4513);
  if (r>=4514 && r<=4514) return R54.Condition(r-4514);
  if (r>=4515 && r<=4515) return R55.Condition(r-4515);
  if (r>=4516 && r<=4516) return R56.Condition(r-4516);
  if (r>=4517 && r<=4517) return R57.Condition(r-4517);
  if (r>=4518 && r<=4518) return R58.Condition(r-4518);
  if (r>=4519 && r<=4519) return R59.Condition(r-4519);
  if (r>=4520 && r<=4520) return R60.Condition(r-4520);
  if (r>=4521 && r<=4521) return R61.Condition(r-4521);
  if (r>=4522 && r<=4522) return R62.Condition(r-4522);
  if (r>=4523 && r<=4523) return R63.Condition(r-4523);
  if (r>=4524 && r<=4524) return R64.Condition(r-4524);
  if (r>=4525 && r<=4525) return R65.Condition(r-4525);
  if (r>=4526 && r<=4526) return R66.Condition(r-4526);
  if (r>=4527 && r<=4527) return R67.Condition(r-4527);
  if (r>=4528 && r<=4528) return R68.Condition(r-4528);
  if (r>=4529 && r<=4529) return R69.Condition(r-4529);
  if (r>=4530 && r<=4530) return R70.Condition(r-4530);
  if (r>=4531 && r<=4531) return R71.Condition(r-4531);
  if (r>=4532 && r<=4532) return R72.Condition(r-4532);
  if (r>=4533 && r<=4533) return R73.Condition(r-4533);
  if (r>=4534 && r<=4534) return R74.Condition(r-4534);
  if (r>=4535 && r<=4535) return R75.Condition(r-4535);
  if (r>=4536 && r<=4536) return R76.Condition(r-4536);
  if (r>=4537 && r<=4537) return R77.Condition(r-4537);
  if (r>=4538 && r<=4538) return R78.Condition(r-4538);
  if (r>=4539 && r<=4539) return R79.Condition(r-4539);
  if (r>=4540 && r<=4540) return R80.Condition(r-4540);
  if (r>=4541 && r<=4541) return R81.Condition(r-4541);
  if (r>=4542 && r<=4542) return R82.Condition(r-4542);
  if (r>=4543 && r<=4543) return R83.Condition(r-4543);
  if (r>=4544 && r<=4544) return R84.Condition(r-4544);
  if (r>=4545 && r<=4545) return R85.Condition(r-4545);
  if (r>=4546 && r<=4546) return R86.Condition(r-4546);
  if (r>=4547 && r<=4547) return R87.Condition(r-4547);
  if (r>=4548 && r<=4548) return R88.Condition(r-4548);
  if (r>=4549 && r<=4549) return R89.Condition(r-4549);
  if (r>=4550 && r<=4550) return R90.Condition(r-4550);
  if (r>=4551 && r<=4551) return R91.Condition(r-4551);
  if (r>=4552 && r<=4552) return R92.Condition(r-4552);
  if (r>=4553 && r<=4553) return R93.Condition(r-4553);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=5) { R0.Code(r-0); return; } 
  if (r>=6 && r<=11) { R1.Code(r-6); return; } 
  if (r>=12 && r<=47) { R2.Code(r-12); return; } 
  if (r>=48 && r<=53) { R3.Code(r-48); return; } 
  if (r>=54 && r<=1349) { R4.Code(r-54); return; } 
  if (r>=1350 && r<=1355) { R5.Code(r-1350); return; } 
  if (r>=1356 && r<=1391) { R6.Code(r-1356); return; } 
  if (r>=1392 && r<=1397) { R7.Code(r-1392); return; } 
  if (r>=1398 && r<=1433) { R8.Code(r-1398); return; } 
  if (r>=1434 && r<=1439) { R9.Code(r-1434); return; } 
  if (r>=1440 && r<=2735) { R10.Code(r-1440); return; } 
  if (r>=2736 && r<=2741) { R11.Code(r-2736); return; } 
  if (r>=2742 && r<=2957) { R12.Code(r-2742); return; } 
  if (r>=2958 && r<=2963) { R13.Code(r-2958); return; } 
  if (r>=2964 && r<=4259) { R14.Code(r-2964); return; } 
  if (r>=4260 && r<=4265) { R15.Code(r-4260); return; } 
  if (r>=4266 && r<=4301) { R16.Code(r-4266); return; } 
  if (r>=4302 && r<=4307) { R17.Code(r-4302); return; } 
  if (r>=4308 && r<=4343) { R18.Code(r-4308); return; } 
  if (r>=4344 && r<=4349) { R19.Code(r-4344); return; } 
  if (r>=4350 && r<=4385) { R20.Code(r-4350); return; } 
  if (r>=4386 && r<=4391) { R21.Code(r-4386); return; } 
  if (r>=4392 && r<=4397) { R22.Code(r-4392); return; } 
  if (r>=4398 && r<=4403) { R23.Code(r-4398); return; } 
  if (r>=4404 && r<=4409) { R24.Code(r-4404); return; } 
  if (r>=4410 && r<=4415) { R25.Code(r-4410); return; } 
  if (r>=4416 && r<=4421) { R26.Code(r-4416); return; } 
  if (r>=4422 && r<=4427) { R27.Code(r-4422); return; } 
  if (r>=4428 && r<=4433) { R28.Code(r-4428); return; } 
  if (r>=4434 && r<=4439) { R29.Code(r-4434); return; } 
  if (r>=4440 && r<=4445) { R30.Code(r-4440); return; } 
  if (r>=4446 && r<=4451) { R31.Code(r-4446); return; } 
  if (r>=4452 && r<=4457) { R32.Code(r-4452); return; } 
  if (r>=4458 && r<=4463) { R33.Code(r-4458); return; } 
  if (r>=4464 && r<=4469) { R34.Code(r-4464); return; } 
  if (r>=4470 && r<=4475) { R35.Code(r-4470); return; } 
  if (r>=4476 && r<=4481) { R36.Code(r-4476); return; } 
  if (r>=4482 && r<=4487) { R37.Code(r-4482); return; } 
  if (r>=4488 && r<=4493) { R38.Code(r-4488); return; } 
  if (r>=4494 && r<=4499) { R39.Code(r-4494); return; } 
  if (r>=4500 && r<=4500) { R40.Code(r-4500); return; } 
  if (r>=4501 && r<=4501) { R41.Code(r-4501); return; } 
  if (r>=4502 && r<=4502) { R42.Code(r-4502); return; } 
  if (r>=4503 && r<=4503) { R43.Code(r-4503); return; } 
  if (r>=4504 && r<=4504) { R44.Code(r-4504); return; } 
  if (r>=4505 && r<=4505) { R45.Code(r-4505); return; } 
  if (r>=4506 && r<=4506) { R46.Code(r-4506); return; } 
  if (r>=4507 && r<=4507) { R47.Code(r-4507); return; } 
  if (r>=4508 && r<=4508) { R48.Code(r-4508); return; } 
  if (r>=4509 && r<=4509) { R49.Code(r-4509); return; } 
  if (r>=4510 && r<=4510) { R50.Code(r-4510); return; } 
  if (r>=4511 && r<=4511) { R51.Code(r-4511); return; } 
  if (r>=4512 && r<=4512) { R52.Code(r-4512); return; } 
  if (r>=4513 && r<=4513) { R53.Code(r-4513); return; } 
  if (r>=4514 && r<=4514) { R54.Code(r-4514); return; } 
  if (r>=4515 && r<=4515) { R55.Code(r-4515); return; } 
  if (r>=4516 && r<=4516) { R56.Code(r-4516); return; } 
  if (r>=4517 && r<=4517) { R57.Code(r-4517); return; } 
  if (r>=4518 && r<=4518) { R58.Code(r-4518); return; } 
  if (r>=4519 && r<=4519) { R59.Code(r-4519); return; } 
  if (r>=4520 && r<=4520) { R60.Code(r-4520); return; } 
  if (r>=4521 && r<=4521) { R61.Code(r-4521); return; } 
  if (r>=4522 && r<=4522) { R62.Code(r-4522); return; } 
  if (r>=4523 && r<=4523) { R63.Code(r-4523); return; } 
  if (r>=4524 && r<=4524) { R64.Code(r-4524); return; } 
  if (r>=4525 && r<=4525) { R65.Code(r-4525); return; } 
  if (r>=4526 && r<=4526) { R66.Code(r-4526); return; } 
  if (r>=4527 && r<=4527) { R67.Code(r-4527); return; } 
  if (r>=4528 && r<=4528) { R68.Code(r-4528); return; } 
  if (r>=4529 && r<=4529) { R69.Code(r-4529); return; } 
  if (r>=4530 && r<=4530) { R70.Code(r-4530); return; } 
  if (r>=4531 && r<=4531) { R71.Code(r-4531); return; } 
  if (r>=4532 && r<=4532) { R72.Code(r-4532); return; } 
  if (r>=4533 && r<=4533) { R73.Code(r-4533); return; } 
  if (r>=4534 && r<=4534) { R74.Code(r-4534); return; } 
  if (r>=4535 && r<=4535) { R75.Code(r-4535); return; } 
  if (r>=4536 && r<=4536) { R76.Code(r-4536); return; } 
  if (r>=4537 && r<=4537) { R77.Code(r-4537); return; } 
  if (r>=4538 && r<=4538) { R78.Code(r-4538); return; } 
  if (r>=4539 && r<=4539) { R79.Code(r-4539); return; } 
  if (r>=4540 && r<=4540) { R80.Code(r-4540); return; } 
  if (r>=4541 && r<=4541) { R81.Code(r-4541); return; } 
  if (r>=4542 && r<=4542) { R82.Code(r-4542); return; } 
  if (r>=4543 && r<=4543) { R83.Code(r-4543); return; } 
  if (r>=4544 && r<=4544) { R84.Code(r-4544); return; } 
  if (r>=4545 && r<=4545) { R85.Code(r-4545); return; } 
  if (r>=4546 && r<=4546) { R86.Code(r-4546); return; } 
  if (r>=4547 && r<=4547) { R87.Code(r-4547); return; } 
  if (r>=4548 && r<=4548) { R88.Code(r-4548); return; } 
  if (r>=4549 && r<=4549) { R89.Code(r-4549); return; } 
  if (r>=4550 && r<=4550) { R90.Code(r-4550); return; } 
  if (r>=4551 && r<=4551) { R91.Code(r-4551); return; } 
  if (r>=4552 && r<=4552) { R92.Code(r-4552); return; } 
  if (r>=4553 && r<=4553) { R93.Code(r-4553); return; } 
}
int Priority(unsigned short r)
{
  if (r<=5) { return R0.Priority(); } 
  if (r>=6 && r<=11) { return R1.Priority(); } 
  if (r>=12 && r<=47) { return R2.Priority(); } 
  if (r>=48 && r<=53) { return R3.Priority(); } 
  if (r>=54 && r<=1349) { return R4.Priority(); } 
  if (r>=1350 && r<=1355) { return R5.Priority(); } 
  if (r>=1356 && r<=1391) { return R6.Priority(); } 
  if (r>=1392 && r<=1397) { return R7.Priority(); } 
  if (r>=1398 && r<=1433) { return R8.Priority(); } 
  if (r>=1434 && r<=1439) { return R9.Priority(); } 
  if (r>=1440 && r<=2735) { return R10.Priority(); } 
  if (r>=2736 && r<=2741) { return R11.Priority(); } 
  if (r>=2742 && r<=2957) { return R12.Priority(); } 
  if (r>=2958 && r<=2963) { return R13.Priority(); } 
  if (r>=2964 && r<=4259) { return R14.Priority(); } 
  if (r>=4260 && r<=4265) { return R15.Priority(); } 
  if (r>=4266 && r<=4301) { return R16.Priority(); } 
  if (r>=4302 && r<=4307) { return R17.Priority(); } 
  if (r>=4308 && r<=4343) { return R18.Priority(); } 
  if (r>=4344 && r<=4349) { return R19.Priority(); } 
  if (r>=4350 && r<=4385) { return R20.Priority(); } 
  if (r>=4386 && r<=4391) { return R21.Priority(); } 
  if (r>=4392 && r<=4397) { return R22.Priority(); } 
  if (r>=4398 && r<=4403) { return R23.Priority(); } 
  if (r>=4404 && r<=4409) { return R24.Priority(); } 
  if (r>=4410 && r<=4415) { return R25.Priority(); } 
  if (r>=4416 && r<=4421) { return R26.Priority(); } 
  if (r>=4422 && r<=4427) { return R27.Priority(); } 
  if (r>=4428 && r<=4433) { return R28.Priority(); } 
  if (r>=4434 && r<=4439) { return R29.Priority(); } 
  if (r>=4440 && r<=4445) { return R30.Priority(); } 
  if (r>=4446 && r<=4451) { return R31.Priority(); } 
  if (r>=4452 && r<=4457) { return R32.Priority(); } 
  if (r>=4458 && r<=4463) { return R33.Priority(); } 
  if (r>=4464 && r<=4469) { return R34.Priority(); } 
  if (r>=4470 && r<=4475) { return R35.Priority(); } 
  if (r>=4476 && r<=4481) { return R36.Priority(); } 
  if (r>=4482 && r<=4487) { return R37.Priority(); } 
  if (r>=4488 && r<=4493) { return R38.Priority(); } 
  if (r>=4494 && r<=4499) { return R39.Priority(); } 
  if (r>=4500 && r<=4500) { return R40.Priority(); } 
  if (r>=4501 && r<=4501) { return R41.Priority(); } 
  if (r>=4502 && r<=4502) { return R42.Priority(); } 
  if (r>=4503 && r<=4503) { return R43.Priority(); } 
  if (r>=4504 && r<=4504) { return R44.Priority(); } 
  if (r>=4505 && r<=4505) { return R45.Priority(); } 
  if (r>=4506 && r<=4506) { return R46.Priority(); } 
  if (r>=4507 && r<=4507) { return R47.Priority(); } 
  if (r>=4508 && r<=4508) { return R48.Priority(); } 
  if (r>=4509 && r<=4509) { return R49.Priority(); } 
  if (r>=4510 && r<=4510) { return R50.Priority(); } 
  if (r>=4511 && r<=4511) { return R51.Priority(); } 
  if (r>=4512 && r<=4512) { return R52.Priority(); } 
  if (r>=4513 && r<=4513) { return R53.Priority(); } 
  if (r>=4514 && r<=4514) { return R54.Priority(); } 
  if (r>=4515 && r<=4515) { return R55.Priority(); } 
  if (r>=4516 && r<=4516) { return R56.Priority(); } 
  if (r>=4517 && r<=4517) { return R57.Priority(); } 
  if (r>=4518 && r<=4518) { return R58.Priority(); } 
  if (r>=4519 && r<=4519) { return R59.Priority(); } 
  if (r>=4520 && r<=4520) { return R60.Priority(); } 
  if (r>=4521 && r<=4521) { return R61.Priority(); } 
  if (r>=4522 && r<=4522) { return R62.Priority(); } 
  if (r>=4523 && r<=4523) { return R63.Priority(); } 
  if (r>=4524 && r<=4524) { return R64.Priority(); } 
  if (r>=4525 && r<=4525) { return R65.Priority(); } 
  if (r>=4526 && r<=4526) { return R66.Priority(); } 
  if (r>=4527 && r<=4527) { return R67.Priority(); } 
  if (r>=4528 && r<=4528) { return R68.Priority(); } 
  if (r>=4529 && r<=4529) { return R69.Priority(); } 
  if (r>=4530 && r<=4530) { return R70.Priority(); } 
  if (r>=4531 && r<=4531) { return R71.Priority(); } 
  if (r>=4532 && r<=4532) { return R72.Priority(); } 
  if (r>=4533 && r<=4533) { return R73.Priority(); } 
  if (r>=4534 && r<=4534) { return R74.Priority(); } 
  if (r>=4535 && r<=4535) { return R75.Priority(); } 
  if (r>=4536 && r<=4536) { return R76.Priority(); } 
  if (r>=4537 && r<=4537) { return R77.Priority(); } 
  if (r>=4538 && r<=4538) { return R78.Priority(); } 
  if (r>=4539 && r<=4539) { return R79.Priority(); } 
  if (r>=4540 && r<=4540) { return R80.Priority(); } 
  if (r>=4541 && r<=4541) { return R81.Priority(); } 
  if (r>=4542 && r<=4542) { return R82.Priority(); } 
  if (r>=4543 && r<=4543) { return R83.Priority(); } 
  if (r>=4544 && r<=4544) { return R84.Priority(); } 
  if (r>=4545 && r<=4545) { return R85.Priority(); } 
  if (r>=4546 && r<=4546) { return R86.Priority(); } 
  if (r>=4547 && r<=4547) { return R87.Priority(); } 
  if (r>=4548 && r<=4548) { return R88.Priority(); } 
  if (r>=4549 && r<=4549) { return R89.Priority(); } 
  if (r>=4550 && r<=4550) { return R90.Priority(); } 
  if (r>=4551 && r<=4551) { return R91.Priority(); } 
  if (r>=4552 && r<=4552) { return R92.Priority(); } 
  if (r>=4553 && r<=4553) { return R93.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=5) return R0.Name(r-0);
  if (r>=6 && r<=11) return R1.Name(r-6);
  if (r>=12 && r<=47) return R2.Name(r-12);
  if (r>=48 && r<=53) return R3.Name(r-48);
  if (r>=54 && r<=1349) return R4.Name(r-54);
  if (r>=1350 && r<=1355) return R5.Name(r-1350);
  if (r>=1356 && r<=1391) return R6.Name(r-1356);
  if (r>=1392 && r<=1397) return R7.Name(r-1392);
  if (r>=1398 && r<=1433) return R8.Name(r-1398);
  if (r>=1434 && r<=1439) return R9.Name(r-1434);
  if (r>=1440 && r<=2735) return R10.Name(r-1440);
  if (r>=2736 && r<=2741) return R11.Name(r-2736);
  if (r>=2742 && r<=2957) return R12.Name(r-2742);
  if (r>=2958 && r<=2963) return R13.Name(r-2958);
  if (r>=2964 && r<=4259) return R14.Name(r-2964);
  if (r>=4260 && r<=4265) return R15.Name(r-4260);
  if (r>=4266 && r<=4301) return R16.Name(r-4266);
  if (r>=4302 && r<=4307) return R17.Name(r-4302);
  if (r>=4308 && r<=4343) return R18.Name(r-4308);
  if (r>=4344 && r<=4349) return R19.Name(r-4344);
  if (r>=4350 && r<=4385) return R20.Name(r-4350);
  if (r>=4386 && r<=4391) return R21.Name(r-4386);
  if (r>=4392 && r<=4397) return R22.Name(r-4392);
  if (r>=4398 && r<=4403) return R23.Name(r-4398);
  if (r>=4404 && r<=4409) return R24.Name(r-4404);
  if (r>=4410 && r<=4415) return R25.Name(r-4410);
  if (r>=4416 && r<=4421) return R26.Name(r-4416);
  if (r>=4422 && r<=4427) return R27.Name(r-4422);
  if (r>=4428 && r<=4433) return R28.Name(r-4428);
  if (r>=4434 && r<=4439) return R29.Name(r-4434);
  if (r>=4440 && r<=4445) return R30.Name(r-4440);
  if (r>=4446 && r<=4451) return R31.Name(r-4446);
  if (r>=4452 && r<=4457) return R32.Name(r-4452);
  if (r>=4458 && r<=4463) return R33.Name(r-4458);
  if (r>=4464 && r<=4469) return R34.Name(r-4464);
  if (r>=4470 && r<=4475) return R35.Name(r-4470);
  if (r>=4476 && r<=4481) return R36.Name(r-4476);
  if (r>=4482 && r<=4487) return R37.Name(r-4482);
  if (r>=4488 && r<=4493) return R38.Name(r-4488);
  if (r>=4494 && r<=4499) return R39.Name(r-4494);
  if (r>=4500 && r<=4500) return R40.Name(r-4500);
  if (r>=4501 && r<=4501) return R41.Name(r-4501);
  if (r>=4502 && r<=4502) return R42.Name(r-4502);
  if (r>=4503 && r<=4503) return R43.Name(r-4503);
  if (r>=4504 && r<=4504) return R44.Name(r-4504);
  if (r>=4505 && r<=4505) return R45.Name(r-4505);
  if (r>=4506 && r<=4506) return R46.Name(r-4506);
  if (r>=4507 && r<=4507) return R47.Name(r-4507);
  if (r>=4508 && r<=4508) return R48.Name(r-4508);
  if (r>=4509 && r<=4509) return R49.Name(r-4509);
  if (r>=4510 && r<=4510) return R50.Name(r-4510);
  if (r>=4511 && r<=4511) return R51.Name(r-4511);
  if (r>=4512 && r<=4512) return R52.Name(r-4512);
  if (r>=4513 && r<=4513) return R53.Name(r-4513);
  if (r>=4514 && r<=4514) return R54.Name(r-4514);
  if (r>=4515 && r<=4515) return R55.Name(r-4515);
  if (r>=4516 && r<=4516) return R56.Name(r-4516);
  if (r>=4517 && r<=4517) return R57.Name(r-4517);
  if (r>=4518 && r<=4518) return R58.Name(r-4518);
  if (r>=4519 && r<=4519) return R59.Name(r-4519);
  if (r>=4520 && r<=4520) return R60.Name(r-4520);
  if (r>=4521 && r<=4521) return R61.Name(r-4521);
  if (r>=4522 && r<=4522) return R62.Name(r-4522);
  if (r>=4523 && r<=4523) return R63.Name(r-4523);
  if (r>=4524 && r<=4524) return R64.Name(r-4524);
  if (r>=4525 && r<=4525) return R65.Name(r-4525);
  if (r>=4526 && r<=4526) return R66.Name(r-4526);
  if (r>=4527 && r<=4527) return R67.Name(r-4527);
  if (r>=4528 && r<=4528) return R68.Name(r-4528);
  if (r>=4529 && r<=4529) return R69.Name(r-4529);
  if (r>=4530 && r<=4530) return R70.Name(r-4530);
  if (r>=4531 && r<=4531) return R71.Name(r-4531);
  if (r>=4532 && r<=4532) return R72.Name(r-4532);
  if (r>=4533 && r<=4533) return R73.Name(r-4533);
  if (r>=4534 && r<=4534) return R74.Name(r-4534);
  if (r>=4535 && r<=4535) return R75.Name(r-4535);
  if (r>=4536 && r<=4536) return R76.Name(r-4536);
  if (r>=4537 && r<=4537) return R77.Name(r-4537);
  if (r>=4538 && r<=4538) return R78.Name(r-4538);
  if (r>=4539 && r<=4539) return R79.Name(r-4539);
  if (r>=4540 && r<=4540) return R80.Name(r-4540);
  if (r>=4541 && r<=4541) return R81.Name(r-4541);
  if (r>=4542 && r<=4542) return R82.Name(r-4542);
  if (r>=4543 && r<=4543) return R83.Name(r-4543);
  if (r>=4544 && r<=4544) return R84.Name(r-4544);
  if (r>=4545 && r<=4545) return R85.Name(r-4545);
  if (r>=4546 && r<=4546) return R86.Name(r-4546);
  if (r>=4547 && r<=4547) return R87.Name(r-4547);
  if (r>=4548 && r<=4548) return R88.Name(r-4548);
  if (r>=4549 && r<=4549) return R89.Name(r-4549);
  if (r>=4550 && r<=4550) return R90.Name(r-4550);
  if (r>=4551 && r<=4551) return R91.Name(r-4551);
  if (r>=4552 && r<=4552) return R92.Name(r-4552);
  if (r>=4553 && r<=4553) return R93.Name(r-4553);
  return NULL;
}
};
const unsigned numrules = 4554;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 4554


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
mu_roleA[1].mu_A = mu_UE;
mu_roleA[1].mu_B = mu_SEAF;
mu_roleA[1].mu_supi = mu_supi;
mu_roleA[1].mu_ue = mu_ue;
mu_roleA[1].mu_ue1 = mu_ue1;
mu_roleA[1].mu_prekey = mu_prekey;
mu_roleA[1].mu_certa = mu_certa;
mu_roleA[1].mu_eapm = mu_eapm;
mu_roleA[1].mu_st = mu_A1;
mu_roleA[1].mu_commit = mu_false;
mu_roleA[1].mu_bn = mu_anyNonce;
mu_roleA[1].mu_ausf = mu_anyNonce;
mu_roleA[1].mu_sucm = mu_anyNonce;
mu_roleA[1].mu_certc = mu_anyNonce;
mu_roleA[1].mu_start = mu_anyNonce;
mu_roleA[1].mu_C = mu_anyAgent;
mu_roleA[1].mu_D = mu_anyAgent;
mu_roleA[1].mu_x10.mu_msgType = mu_tmp;
mu_roleA[1].mu_x10.mu_tmpPart = 0;
mu_roleA[1].mu_x1.mu_msgType = mu_tmp;
mu_roleA[1].mu_x1.mu_tmpPart = 0;
mu_roleA[1].mu_x2.mu_msgType = mu_tmp;
mu_roleA[1].mu_x2.mu_tmpPart = 0;
mu_roleA[1].mu_x3.mu_msgType = mu_tmp;
mu_roleA[1].mu_x3.mu_tmpPart = 0;
mu_roleA[1].mu_x4.mu_msgType = mu_tmp;
mu_roleA[1].mu_x4.mu_tmpPart = 0;
mu_roleA[1].mu_x5.mu_msgType = mu_tmp;
mu_roleA[1].mu_x5.mu_tmpPart = 0;
mu_roleA[1].mu_x6.mu_msgType = mu_tmp;
mu_roleA[1].mu_x6.mu_tmpPart = 0;
mu_roleA[1].mu_x7.mu_msgType = mu_tmp;
mu_roleA[1].mu_x7.mu_tmpPart = 0;
mu_roleA[1].mu_x8.mu_msgType = mu_tmp;
mu_roleA[1].mu_x8.mu_tmpPart = 0;
mu_roleA[1].mu_x9.mu_msgType = mu_tmp;
mu_roleA[1].mu_x9.mu_tmpPart = 0;
mu_roleA[1].mu_m1.mu_msgType = mu_tmp;
mu_roleA[1].mu_m1.mu_tmpPart = 0;
mu_roleB[1].mu_A = mu_UE;
mu_roleB[1].mu_B = mu_SEAF;
mu_roleB[1].mu_C = mu_AUSF;
mu_roleB[1].mu_bn = mu_bn;
mu_roleB[1].mu_st = mu_B1;
mu_roleB[1].mu_commit = mu_false;
mu_roleB[1].mu_supi = mu_anyNonce;
mu_roleB[1].mu_ue = mu_anyNonce;
mu_roleB[1].mu_ue1 = mu_anyNonce;
mu_roleB[1].mu_prekey = mu_anyNonce;
mu_roleB[1].mu_certa = mu_anyNonce;
mu_roleB[1].mu_eapm = mu_anyNonce;
mu_roleB[1].mu_ausf = mu_anyNonce;
mu_roleB[1].mu_sucm = mu_anyNonce;
mu_roleB[1].mu_certc = mu_anyNonce;
mu_roleB[1].mu_start = mu_anyNonce;
mu_roleB[1].mu_D = mu_anyAgent;
mu_roleB[1].mu_x10.mu_msgType = mu_tmp;
mu_roleB[1].mu_x10.mu_tmpPart = 0;
mu_roleB[1].mu_x1.mu_msgType = mu_tmp;
mu_roleB[1].mu_x1.mu_tmpPart = 0;
mu_roleB[1].mu_x2.mu_msgType = mu_tmp;
mu_roleB[1].mu_x2.mu_tmpPart = 0;
mu_roleB[1].mu_x3.mu_msgType = mu_tmp;
mu_roleB[1].mu_x3.mu_tmpPart = 0;
mu_roleB[1].mu_x4.mu_msgType = mu_tmp;
mu_roleB[1].mu_x4.mu_tmpPart = 0;
mu_roleB[1].mu_x5.mu_msgType = mu_tmp;
mu_roleB[1].mu_x5.mu_tmpPart = 0;
mu_roleB[1].mu_x6.mu_msgType = mu_tmp;
mu_roleB[1].mu_x6.mu_tmpPart = 0;
mu_roleB[1].mu_x7.mu_msgType = mu_tmp;
mu_roleB[1].mu_x7.mu_tmpPart = 0;
mu_roleB[1].mu_x8.mu_msgType = mu_tmp;
mu_roleB[1].mu_x8.mu_tmpPart = 0;
mu_roleB[1].mu_x9.mu_msgType = mu_tmp;
mu_roleB[1].mu_x9.mu_tmpPart = 0;
mu_roleB[1].mu_m1.mu_msgType = mu_tmp;
mu_roleB[1].mu_m1.mu_tmpPart = 0;
mu_roleC[1].mu_B = mu_SEAF;
mu_roleC[1].mu_C = mu_AUSF;
mu_roleC[1].mu_D = mu_UDM;
mu_roleC[1].mu_ausf = mu_ausf;
mu_roleC[1].mu_sucm = mu_sucm;
mu_roleC[1].mu_certc = mu_certc;
mu_roleC[1].mu_st = mu_C1;
mu_roleC[1].mu_commit = mu_false;
mu_roleC[1].mu_supi = mu_anyNonce;
mu_roleC[1].mu_ue = mu_anyNonce;
mu_roleC[1].mu_ue1 = mu_anyNonce;
mu_roleC[1].mu_prekey = mu_anyNonce;
mu_roleC[1].mu_certa = mu_anyNonce;
mu_roleC[1].mu_eapm = mu_anyNonce;
mu_roleC[1].mu_bn = mu_anyNonce;
mu_roleC[1].mu_start = mu_anyNonce;
mu_roleC[1].mu_A = mu_anyAgent;
mu_roleC[1].mu_x10.mu_msgType = mu_tmp;
mu_roleC[1].mu_x10.mu_tmpPart = 0;
mu_roleC[1].mu_x1.mu_msgType = mu_tmp;
mu_roleC[1].mu_x1.mu_tmpPart = 0;
mu_roleC[1].mu_x2.mu_msgType = mu_tmp;
mu_roleC[1].mu_x2.mu_tmpPart = 0;
mu_roleC[1].mu_x3.mu_msgType = mu_tmp;
mu_roleC[1].mu_x3.mu_tmpPart = 0;
mu_roleC[1].mu_x4.mu_msgType = mu_tmp;
mu_roleC[1].mu_x4.mu_tmpPart = 0;
mu_roleC[1].mu_x5.mu_msgType = mu_tmp;
mu_roleC[1].mu_x5.mu_tmpPart = 0;
mu_roleC[1].mu_x6.mu_msgType = mu_tmp;
mu_roleC[1].mu_x6.mu_tmpPart = 0;
mu_roleC[1].mu_x7.mu_msgType = mu_tmp;
mu_roleC[1].mu_x7.mu_tmpPart = 0;
mu_roleC[1].mu_x8.mu_msgType = mu_tmp;
mu_roleC[1].mu_x8.mu_tmpPart = 0;
mu_roleC[1].mu_x9.mu_msgType = mu_tmp;
mu_roleC[1].mu_x9.mu_tmpPart = 0;
mu_roleC[1].mu_m1.mu_msgType = mu_tmp;
mu_roleC[1].mu_m1.mu_tmpPart = 0;
mu_roleD[1].mu_C = mu_AUSF;
mu_roleD[1].mu_D = mu_UDM;
mu_roleD[1].mu_start = mu_start;
mu_roleD[1].mu_st = mu_D1;
mu_roleD[1].mu_commit = mu_false;
mu_roleD[1].mu_supi = mu_anyNonce;
mu_roleD[1].mu_ue = mu_anyNonce;
mu_roleD[1].mu_ue1 = mu_anyNonce;
mu_roleD[1].mu_prekey = mu_anyNonce;
mu_roleD[1].mu_certa = mu_anyNonce;
mu_roleD[1].mu_eapm = mu_anyNonce;
mu_roleD[1].mu_bn = mu_anyNonce;
mu_roleD[1].mu_ausf = mu_anyNonce;
mu_roleD[1].mu_sucm = mu_anyNonce;
mu_roleD[1].mu_certc = mu_anyNonce;
mu_roleD[1].mu_A = mu_anyAgent;
mu_roleD[1].mu_B = mu_anyAgent;
mu_roleD[1].mu_x10.mu_msgType = mu_tmp;
mu_roleD[1].mu_x10.mu_tmpPart = 0;
mu_roleD[1].mu_x1.mu_msgType = mu_tmp;
mu_roleD[1].mu_x1.mu_tmpPart = 0;
mu_roleD[1].mu_x2.mu_msgType = mu_tmp;
mu_roleD[1].mu_x2.mu_tmpPart = 0;
mu_roleD[1].mu_x3.mu_msgType = mu_tmp;
mu_roleD[1].mu_x3.mu_tmpPart = 0;
mu_roleD[1].mu_x4.mu_msgType = mu_tmp;
mu_roleD[1].mu_x4.mu_tmpPart = 0;
mu_roleD[1].mu_x5.mu_msgType = mu_tmp;
mu_roleD[1].mu_x5.mu_tmpPart = 0;
mu_roleD[1].mu_x6.mu_msgType = mu_tmp;
mu_roleD[1].mu_x6.mu_tmpPart = 0;
mu_roleD[1].mu_x7.mu_msgType = mu_tmp;
mu_roleD[1].mu_x7.mu_tmpPart = 0;
mu_roleD[1].mu_x8.mu_msgType = mu_tmp;
mu_roleD[1].mu_x8.mu_tmpPart = 0;
mu_roleD[1].mu_x9.mu_msgType = mu_tmp;
mu_roleD[1].mu_x9.mu_tmpPart = 0;
mu_roleD[1].mu_m1.mu_msgType = mu_tmp;
mu_roleD[1].mu_m1.mu_tmpPart = 0;
{
for(int mu_i = 0; mu_i <= 20; mu_i++) {
mu_ch[mu_i].mu_empty = mu_true;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
mu_msgs[mu_i].mu_length = 0;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_pat1Set.mu_content[mu_i] = 0;
mu_sPat1Set.mu_content[mu_i] = 0;
mu_pat2Set.mu_content[mu_i] = 0;
mu_sPat2Set.mu_content[mu_i] = 0;
mu_pat3Set.mu_content[mu_i] = 0;
mu_sPat3Set.mu_content[mu_i] = 0;
mu_pat4Set.mu_content[mu_i] = 0;
mu_sPat4Set.mu_content[mu_i] = 0;
mu_pat5Set.mu_content[mu_i] = 0;
mu_sPat5Set.mu_content[mu_i] = 0;
mu_pat6Set.mu_content[mu_i] = 0;
mu_sPat6Set.mu_content[mu_i] = 0;
mu_pat7Set.mu_content[mu_i] = 0;
mu_sPat7Set.mu_content[mu_i] = 0;
mu_pat8Set.mu_content[mu_i] = 0;
mu_sPat8Set.mu_content[mu_i] = 0;
mu_pat9Set.mu_content[mu_i] = 0;
mu_sPat9Set.mu_content[mu_i] = 0;
mu_pat10Set.mu_content[mu_i] = 0;
mu_sPat10Set.mu_content[mu_i] = 0;
mu_pat11Set.mu_content[mu_i] = 0;
mu_sPat11Set.mu_content[mu_i] = 0;
mu_pat12Set.mu_content[mu_i] = 0;
mu_sPat12Set.mu_content[mu_i] = 0;
mu_pat13Set.mu_content[mu_i] = 0;
mu_sPat13Set.mu_content[mu_i] = 0;
mu_pat14Set.mu_content[mu_i] = 0;
mu_sPat14Set.mu_content[mu_i] = 0;
mu_pat15Set.mu_content[mu_i] = 0;
mu_sPat15Set.mu_content[mu_i] = 0;
mu_pat16Set.mu_content[mu_i] = 0;
mu_sPat16Set.mu_content[mu_i] = 0;
mu_pat17Set.mu_content[mu_i] = 0;
mu_sPat17Set.mu_content[mu_i] = 0;
mu_pat18Set.mu_content[mu_i] = 0;
mu_sPat18Set.mu_content[mu_i] = 0;
mu_pat19Set.mu_content[mu_i] = 0;
mu_sPat19Set.mu_content[mu_i] = 0;
mu_pat20Set.mu_content[mu_i] = 0;
mu_sPat20Set.mu_content[mu_i] = 0;
mu_pat21Set.mu_content[mu_i] = 0;
mu_sPat21Set.mu_content[mu_i] = 0;
mu_pat22Set.mu_content[mu_i] = 0;
mu_sPat22Set.mu_content[mu_i] = 0;
mu_pat23Set.mu_content[mu_i] = 0;
mu_sPat23Set.mu_content[mu_i] = 0;
mu_pat24Set.mu_content[mu_i] = 0;
mu_sPat24Set.mu_content[mu_i] = 0;
mu_pat25Set.mu_content[mu_i] = 0;
mu_sPat25Set.mu_content[mu_i] = 0;
mu_pat26Set.mu_content[mu_i] = 0;
mu_sPat26Set.mu_content[mu_i] = 0;
mu_pat1Set.mu_length = 0;
mu_sPat1Set.mu_length = 0;
mu_pat2Set.mu_length = 0;
mu_sPat2Set.mu_length = 0;
mu_pat3Set.mu_length = 0;
mu_sPat3Set.mu_length = 0;
mu_pat4Set.mu_length = 0;
mu_sPat4Set.mu_length = 0;
mu_pat5Set.mu_length = 0;
mu_sPat5Set.mu_length = 0;
mu_pat6Set.mu_length = 0;
mu_sPat6Set.mu_length = 0;
mu_pat7Set.mu_length = 0;
mu_sPat7Set.mu_length = 0;
mu_pat8Set.mu_length = 0;
mu_sPat8Set.mu_length = 0;
mu_pat9Set.mu_length = 0;
mu_sPat9Set.mu_length = 0;
mu_pat10Set.mu_length = 0;
mu_sPat10Set.mu_length = 0;
mu_pat11Set.mu_length = 0;
mu_sPat11Set.mu_length = 0;
mu_pat12Set.mu_length = 0;
mu_sPat12Set.mu_length = 0;
mu_pat13Set.mu_length = 0;
mu_sPat13Set.mu_length = 0;
mu_pat14Set.mu_length = 0;
mu_sPat14Set.mu_length = 0;
mu_pat15Set.mu_length = 0;
mu_sPat15Set.mu_length = 0;
mu_pat16Set.mu_length = 0;
mu_sPat16Set.mu_length = 0;
mu_pat17Set.mu_length = 0;
mu_sPat17Set.mu_length = 0;
mu_pat18Set.mu_length = 0;
mu_sPat18Set.mu_length = 0;
mu_pat19Set.mu_length = 0;
mu_sPat19Set.mu_length = 0;
mu_pat20Set.mu_length = 0;
mu_sPat20Set.mu_length = 0;
mu_pat21Set.mu_length = 0;
mu_sPat21Set.mu_length = 0;
mu_pat22Set.mu_length = 0;
mu_sPat22Set.mu_length = 0;
mu_pat23Set.mu_length = 0;
mu_sPat23Set.mu_length = 0;
mu_pat24Set.mu_length = 0;
mu_sPat24Set.mu_length = 0;
mu_pat25Set.mu_length = 0;
mu_sPat25Set.mu_length = 0;
mu_pat26Set.mu_length = 0;
mu_sPat26Set.mu_length = 0;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_A_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_B_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_C_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_D_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_Intruder;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_SK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleA[mu_i].mu_A;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
mu_A_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleA[mu_i].mu_A;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_SK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_A_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleB[mu_i].mu_B;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
mu_B_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleB[mu_i].mu_B;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_SK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_B_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleC[mu_i].mu_C;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
mu_C_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleC[mu_i].mu_C;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_SK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_C_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleD[mu_i].mu_D;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_PK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
mu_D_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag = mu_roleD[mu_i].mu_D;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_SK;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msg_end;
mu_D_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat4 ( mu_roleB[mu_i].mu_supi, mu_roleB[mu_i].mu_ue, mu_roleB[mu_i].mu_D, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat1 ( mu_roleB[mu_i].mu_ue1, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat10 ( mu_roleB[mu_i].mu_prekey, mu_roleB[mu_i].mu_C, mu_roleB[mu_i].mu_certa, mu_roleB[mu_i].mu_start, mu_roleB[mu_i].mu_ue1, mu_roleB[mu_i].mu_ausf, mu_roleB[mu_i].mu_certc, mu_roleB[mu_i].mu_A, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat1 ( mu_roleB[mu_i].mu_eapm, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat13 ( mu_roleC[mu_i].mu_x1, mu_roleC[mu_i].mu_bn, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat14 ( mu_roleA[mu_i].mu_x2, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat15 ( mu_roleC[mu_i].mu_x3, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat18 ( mu_roleA[mu_i].mu_x4, mu_roleA[mu_i].mu_x5, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat23 ( mu_roleC[mu_i].mu_x6, mu_roleC[mu_i].mu_x7, mu_roleC[mu_i].mu_x8, mu_roleC[mu_i].mu_x9, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat11 ( mu_roleA[mu_i].mu_x10, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat1 ( mu_roleC[mu_i].mu_eapm, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat1 ( mu_roleA[mu_i].mu_sucm, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat13 ( mu_roleD[mu_i].mu_x1, mu_roleD[mu_i].mu_bn, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat1 ( mu_roleB[mu_i].mu_start, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat2 ( mu_roleB[mu_i].mu_ausf, mu_roleB[mu_i].mu_certc, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat9 ( mu_roleB[mu_i].mu_start, mu_roleB[mu_i].mu_ue1, mu_roleB[mu_i].mu_ausf, mu_roleB[mu_i].mu_certc, mu_roleB[mu_i].mu_prekey, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat1 ( mu_roleC[mu_i].mu_sucm, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat1 ( mu_roleC[mu_i].mu_start, mu_gnum );
};
};
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_776() // Invariant "secrecy1"
{
bool mu__quant777; 
mu__quant777 = TRUE;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr778;
bool mu__boolexpr779;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr779 = FALSE ;
  else {
  mu__boolexpr779 = ((mu_msgs[mu_i].mu_noncePart) == (mu_prekey)) ; 
}
  if (!(mu__boolexpr779)) mu__boolexpr778 = TRUE ;
  else {
  mu__boolexpr778 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr778) )
  { mu__quant777 = FALSE; break; }
};
};
return mu__quant777;
};

bool mu__condition_780() // Condition for Rule "secrecy1"
{
  return mu__invariant_776( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"secrecy1", &mu__condition_780, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
emit:NoScalarset
Spy_known:NoScalarset
D_known:NoScalarset
C_known:NoScalarset
B_known:NoScalarset
A_known:NoScalarset
sPat26Set:NoScalarset
sPat25Set:NoScalarset
sPat24Set:NoScalarset
sPat23Set:NoScalarset
sPat22Set:NoScalarset
sPat21Set:NoScalarset
sPat20Set:NoScalarset
sPat19Set:NoScalarset
sPat18Set:NoScalarset
sPat17Set:NoScalarset
sPat16Set:NoScalarset
sPat15Set:NoScalarset
sPat14Set:NoScalarset
sPat13Set:NoScalarset
sPat12Set:NoScalarset
sPat11Set:NoScalarset
sPat10Set:NoScalarset
sPat9Set:NoScalarset
sPat8Set:NoScalarset
sPat7Set:NoScalarset
sPat6Set:NoScalarset
sPat5Set:NoScalarset
sPat4Set:NoScalarset
sPat3Set:NoScalarset
sPat2Set:NoScalarset
sPat1Set:NoScalarset
msg_end:NoScalarset
ch:NoScalarset
roleA:NoScalarset
roleB:NoScalarset
roleC:NoScalarset
roleD:NoScalarset
msgs:NoScalarset
pat1Set:NoScalarset
pat2Set:NoScalarset
pat3Set:NoScalarset
pat4Set:NoScalarset
pat5Set:NoScalarset
pat6Set:NoScalarset
pat7Set:NoScalarset
pat8Set:NoScalarset
pat9Set:NoScalarset
pat10Set:NoScalarset
pat11Set:NoScalarset
pat12Set:NoScalarset
pat13Set:NoScalarset
pat14Set:NoScalarset
pat15Set:NoScalarset
pat16Set:NoScalarset
pat17Set:NoScalarset
pat18Set:NoScalarset
pat19Set:NoScalarset
pat20Set:NoScalarset
pat21Set:NoScalarset
pat22Set:NoScalarset
pat23Set:NoScalarset
pat24Set:NoScalarset
pat25Set:NoScalarset
pat26Set:NoScalarset
gnum:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_emit.MultisetSort();
        mu_Spy_known.MultisetSort();
        mu_D_known.MultisetSort();
        mu_C_known.MultisetSort();
        mu_B_known.MultisetSort();
        mu_A_known.MultisetSort();
        mu_sPat26Set.MultisetSort();
        mu_sPat25Set.MultisetSort();
        mu_sPat24Set.MultisetSort();
        mu_sPat23Set.MultisetSort();
        mu_sPat22Set.MultisetSort();
        mu_sPat21Set.MultisetSort();
        mu_sPat20Set.MultisetSort();
        mu_sPat19Set.MultisetSort();
        mu_sPat18Set.MultisetSort();
        mu_sPat17Set.MultisetSort();
        mu_sPat16Set.MultisetSort();
        mu_sPat15Set.MultisetSort();
        mu_sPat14Set.MultisetSort();
        mu_sPat13Set.MultisetSort();
        mu_sPat12Set.MultisetSort();
        mu_sPat11Set.MultisetSort();
        mu_sPat10Set.MultisetSort();
        mu_sPat9Set.MultisetSort();
        mu_sPat8Set.MultisetSort();
        mu_sPat7Set.MultisetSort();
        mu_sPat6Set.MultisetSort();
        mu_sPat5Set.MultisetSort();
        mu_sPat4Set.MultisetSort();
        mu_sPat3Set.MultisetSort();
        mu_sPat2Set.MultisetSort();
        mu_sPat1Set.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_ch.MultisetSort();
        mu_roleA.MultisetSort();
        mu_roleB.MultisetSort();
        mu_roleC.MultisetSort();
        mu_roleD.MultisetSort();
        mu_msgs.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat6Set.MultisetSort();
        mu_pat7Set.MultisetSort();
        mu_pat8Set.MultisetSort();
        mu_pat9Set.MultisetSort();
        mu_pat10Set.MultisetSort();
        mu_pat11Set.MultisetSort();
        mu_pat12Set.MultisetSort();
        mu_pat13Set.MultisetSort();
        mu_pat14Set.MultisetSort();
        mu_pat15Set.MultisetSort();
        mu_pat16Set.MultisetSort();
        mu_pat17Set.MultisetSort();
        mu_pat18Set.MultisetSort();
        mu_pat19Set.MultisetSort();
        mu_pat20Set.MultisetSort();
        mu_pat21Set.MultisetSort();
        mu_pat22Set.MultisetSort();
        mu_pat23Set.MultisetSort();
        mu_pat24Set.MultisetSort();
        mu_pat25Set.MultisetSort();
        mu_pat26Set.MultisetSort();
        mu_gnum.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_indexType::Permute(PermSet& Perm, int i) {};
void mu_1_indexType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indexType::Canonicalize(PermSet& Perm) {};
void mu_1_indexType::SimpleLimit(PermSet& Perm) {};
void mu_1_indexType::ArrayLimit(PermSet& Perm) {};
void mu_1_indexType::Limit(PermSet& Perm) {};
void mu_1_indexType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleANums::Permute(PermSet& Perm, int i) {};
void mu_1_roleANums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleANums::Canonicalize(PermSet& Perm) {};
void mu_1_roleANums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleANums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleANums::Limit(PermSet& Perm) {};
void mu_1_roleANums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleBNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleBNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleBNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleBNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleBNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleBNums::Limit(PermSet& Perm) {};
void mu_1_roleBNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleCNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleCNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleCNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleCNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleCNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleCNums::Limit(PermSet& Perm) {};
void mu_1_roleCNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleDNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleDNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleDNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleDNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleDNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleDNums::Limit(PermSet& Perm) {};
void mu_1_roleDNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgLen::Permute(PermSet& Perm, int i) {};
void mu_1_msgLen::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgLen::Canonicalize(PermSet& Perm) {};
void mu_1_msgLen::SimpleLimit(PermSet& Perm) {};
void mu_1_msgLen::ArrayLimit(PermSet& Perm) {};
void mu_1_msgLen::Limit(PermSet& Perm) {};
void mu_1_msgLen::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_chanNums::Permute(PermSet& Perm, int i) {};
void mu_1_chanNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chanNums::Canonicalize(PermSet& Perm) {};
void mu_1_chanNums::SimpleLimit(PermSet& Perm) {};
void mu_1_chanNums::ArrayLimit(PermSet& Perm) {};
void mu_1_chanNums::Limit(PermSet& Perm) {};
void mu_1_chanNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_invokeNums::Permute(PermSet& Perm, int i) {};
void mu_1_invokeNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_invokeNums::Canonicalize(PermSet& Perm) {};
void mu_1_invokeNums::SimpleLimit(PermSet& Perm) {};
void mu_1_invokeNums::ArrayLimit(PermSet& Perm) {};
void mu_1_invokeNums::Limit(PermSet& Perm) {};
void mu_1_invokeNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_AgentType::Permute(PermSet& Perm, int i) {};
void mu_1_AgentType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AgentType::Canonicalize(PermSet& Perm) {};
void mu_1_AgentType::SimpleLimit(PermSet& Perm) {};
void mu_1_AgentType::ArrayLimit(PermSet& Perm) {};
void mu_1_AgentType::Limit(PermSet& Perm) {};
void mu_1_AgentType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NonceType::Permute(PermSet& Perm, int i) {};
void mu_1_NonceType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NonceType::Canonicalize(PermSet& Perm) {};
void mu_1_NonceType::SimpleLimit(PermSet& Perm) {};
void mu_1_NonceType::ArrayLimit(PermSet& Perm) {};
void mu_1_NonceType::Limit(PermSet& Perm) {};
void mu_1_NonceType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ConstType::Permute(PermSet& Perm, int i) {};
void mu_1_ConstType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ConstType::Canonicalize(PermSet& Perm) {};
void mu_1_ConstType::SimpleLimit(PermSet& Perm) {};
void mu_1_ConstType::ArrayLimit(PermSet& Perm) {};
void mu_1_ConstType::Limit(PermSet& Perm) {};
void mu_1_ConstType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MsgType::Permute(PermSet& Perm, int i) {};
void mu_1_MsgType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MsgType::Canonicalize(PermSet& Perm) {};
void mu_1_MsgType::SimpleLimit(PermSet& Perm) {};
void mu_1_MsgType::ArrayLimit(PermSet& Perm) {};
void mu_1_MsgType::Limit(PermSet& Perm) {};
void mu_1_MsgType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_EncryptType::Permute(PermSet& Perm, int i) {};
void mu_1_EncryptType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_EncryptType::Canonicalize(PermSet& Perm) {};
void mu_1_EncryptType::SimpleLimit(PermSet& Perm) {};
void mu_1_EncryptType::ArrayLimit(PermSet& Perm) {};
void mu_1_EncryptType::Limit(PermSet& Perm) {};
void mu_1_EncryptType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_KeyType::Permute(PermSet& Perm, int i)
{
};
void mu_1_KeyType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_KeyType::Canonicalize(PermSet& Perm)
{
};
void mu_1_KeyType::SimpleLimit(PermSet& Perm){}
void mu_1_KeyType::ArrayLimit(PermSet& Perm){}
void mu_1_KeyType::Limit(PermSet& Perm)
{
};
void mu_1_KeyType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_AStatus::Permute(PermSet& Perm, int i) {};
void mu_1_AStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AStatus::Canonicalize(PermSet& Perm) {};
void mu_1_AStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_AStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_AStatus::Limit(PermSet& Perm) {};
void mu_1_AStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_BStatus::Permute(PermSet& Perm, int i) {};
void mu_1_BStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_BStatus::Canonicalize(PermSet& Perm) {};
void mu_1_BStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_BStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_BStatus::Limit(PermSet& Perm) {};
void mu_1_BStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_CStatus::Permute(PermSet& Perm, int i) {};
void mu_1_CStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_CStatus::Canonicalize(PermSet& Perm) {};
void mu_1_CStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_CStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_CStatus::Limit(PermSet& Perm) {};
void mu_1_CStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_DStatus::Permute(PermSet& Perm, int i) {};
void mu_1_DStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_DStatus::Canonicalize(PermSet& Perm) {};
void mu_1_DStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_DStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_DStatus::Limit(PermSet& Perm) {};
void mu_1_DStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<6; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm){}
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu_1_Channel::Permute(PermSet& Perm, int i)
{
};
void mu_1_Channel::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Channel::Canonicalize(PermSet& Perm)
{
};
void mu_1_Channel::SimpleLimit(PermSet& Perm){}
void mu_1_Channel::ArrayLimit(PermSet& Perm){}
void mu_1_Channel::Limit(PermSet& Perm)
{
};
void mu_1_Channel::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleA::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleA::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleA::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleA::SimpleLimit(PermSet& Perm){}
void mu_1_RoleA::ArrayLimit(PermSet& Perm){}
void mu_1_RoleA::Limit(PermSet& Perm)
{
};
void mu_1_RoleA::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleB::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleB::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleB::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleB::SimpleLimit(PermSet& Perm){}
void mu_1_RoleB::ArrayLimit(PermSet& Perm){}
void mu_1_RoleB::Limit(PermSet& Perm)
{
};
void mu_1_RoleB::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleC::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleC::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleC::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleC::SimpleLimit(PermSet& Perm){}
void mu_1_RoleC::ArrayLimit(PermSet& Perm){}
void mu_1_RoleC::Limit(PermSet& Perm)
{
};
void mu_1_RoleC::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleD::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleD::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleD::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleD::SimpleLimit(PermSet& Perm){}
void mu_1_RoleD::ArrayLimit(PermSet& Perm){}
void mu_1_RoleD::Limit(PermSet& Perm)
{
};
void mu_1_RoleD::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_msgSet::Permute(PermSet& Perm, int i)
{
};
void mu_1_msgSet::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_msgSet::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgSet::SimpleLimit(PermSet& Perm){}
void mu_1_msgSet::ArrayLimit(PermSet& Perm){}
void mu_1_msgSet::Limit(PermSet& Perm)
{
};
void mu_1_msgSet::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<21; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm){};
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm) {}
void mu_1__type_11::Limit(PermSet& Perm){}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_12::Permute(PermSet& Perm, int i)
{
  static mu_1__type_12 temp("Permute_mu_1__type_12",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_12::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_12::Canonicalize(PermSet& Perm){};
void mu_1__type_12::SimpleLimit(PermSet& Perm){}
void mu_1__type_12::ArrayLimit(PermSet& Perm) {}
void mu_1__type_12::Limit(PermSet& Perm){}
void mu_1__type_12::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_13::Permute(PermSet& Perm, int i)
{
  static mu_1__type_13 temp("Permute_mu_1__type_13",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_13::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_13::Canonicalize(PermSet& Perm){};
void mu_1__type_13::SimpleLimit(PermSet& Perm){}
void mu_1__type_13::ArrayLimit(PermSet& Perm) {}
void mu_1__type_13::Limit(PermSet& Perm){}
void mu_1__type_13::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_emit.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_D_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_D_known.MultisetSort();
              mu_C_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_C_known.MultisetSort();
              mu_B_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_B_known.MultisetSort();
              mu_A_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_A_known.MultisetSort();
              mu_sPat26Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat26Set.MultisetSort();
              mu_sPat25Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat25Set.MultisetSort();
              mu_sPat24Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat24Set.MultisetSort();
              mu_sPat23Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat23Set.MultisetSort();
              mu_sPat22Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat22Set.MultisetSort();
              mu_sPat21Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat21Set.MultisetSort();
              mu_sPat20Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat20Set.MultisetSort();
              mu_sPat19Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat19Set.MultisetSort();
              mu_sPat18Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat18Set.MultisetSort();
              mu_sPat17Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat17Set.MultisetSort();
              mu_sPat16Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat16Set.MultisetSort();
              mu_sPat15Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat15Set.MultisetSort();
              mu_sPat14Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat14Set.MultisetSort();
              mu_sPat13Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat13Set.MultisetSort();
              mu_sPat12Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat12Set.MultisetSort();
              mu_sPat11Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat11Set.MultisetSort();
              mu_sPat10Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat10Set.MultisetSort();
              mu_sPat9Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat9Set.MultisetSort();
              mu_sPat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
              mu_sPat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
              mu_msg_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleA.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleB.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_roleC.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleC.MultisetSort();
              mu_roleD.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleD.MultisetSort();
              mu_msgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat9Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat10Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat11Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat12Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat13Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat14Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
              mu_pat15Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
              mu_pat16Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat16Set.MultisetSort();
              mu_pat17Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat17Set.MultisetSort();
              mu_pat18Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat18Set.MultisetSort();
              mu_pat19Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat19Set.MultisetSort();
              mu_pat20Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat20Set.MultisetSort();
              mu_pat21Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat21Set.MultisetSort();
              mu_pat22Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat22Set.MultisetSort();
              mu_pat23Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat23Set.MultisetSort();
              mu_pat24Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat24Set.MultisetSort();
              mu_pat25Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat25Set.MultisetSort();
              mu_pat26Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat26Set.MultisetSort();
              mu_gnum.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_emit.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_emit.MultisetSort();
          mu_Spy_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Spy_known.MultisetSort();
          mu_D_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_D_known.MultisetSort();
          mu_C_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_C_known.MultisetSort();
          mu_B_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_B_known.MultisetSort();
          mu_A_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_A_known.MultisetSort();
          mu_sPat26Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat26Set.MultisetSort();
          mu_sPat25Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat25Set.MultisetSort();
          mu_sPat24Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat24Set.MultisetSort();
          mu_sPat23Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat23Set.MultisetSort();
          mu_sPat22Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat22Set.MultisetSort();
          mu_sPat21Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat21Set.MultisetSort();
          mu_sPat20Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat20Set.MultisetSort();
          mu_sPat19Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat19Set.MultisetSort();
          mu_sPat18Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat18Set.MultisetSort();
          mu_sPat17Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat17Set.MultisetSort();
          mu_sPat16Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat16Set.MultisetSort();
          mu_sPat15Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat15Set.MultisetSort();
          mu_sPat14Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat14Set.MultisetSort();
          mu_sPat13Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat13Set.MultisetSort();
          mu_sPat12Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat12Set.MultisetSort();
          mu_sPat11Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat11Set.MultisetSort();
          mu_sPat10Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat10Set.MultisetSort();
          mu_sPat9Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat9Set.MultisetSort();
          mu_sPat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat8Set.MultisetSort();
          mu_sPat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat7Set.MultisetSort();
          mu_sPat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat6Set.MultisetSort();
          mu_sPat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat5Set.MultisetSort();
          mu_sPat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat4Set.MultisetSort();
          mu_sPat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat3Set.MultisetSort();
          mu_sPat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat2Set.MultisetSort();
          mu_sPat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat1Set.MultisetSort();
          mu_msg_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg_end.MultisetSort();
          mu_ch.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ch.MultisetSort();
          mu_roleA.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleA.MultisetSort();
          mu_roleB.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleB.MultisetSort();
          mu_roleC.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleC.MultisetSort();
          mu_roleD.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleD.MultisetSort();
          mu_msgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msgs.MultisetSort();
          mu_pat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat1Set.MultisetSort();
          mu_pat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat2Set.MultisetSort();
          mu_pat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat3Set.MultisetSort();
          mu_pat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat4Set.MultisetSort();
          mu_pat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat5Set.MultisetSort();
          mu_pat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat6Set.MultisetSort();
          mu_pat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat7Set.MultisetSort();
          mu_pat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat8Set.MultisetSort();
          mu_pat9Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat9Set.MultisetSort();
          mu_pat10Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat10Set.MultisetSort();
          mu_pat11Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat11Set.MultisetSort();
          mu_pat12Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat12Set.MultisetSort();
          mu_pat13Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat13Set.MultisetSort();
          mu_pat14Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat14Set.MultisetSort();
          mu_pat15Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat15Set.MultisetSort();
          mu_pat16Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat16Set.MultisetSort();
          mu_pat17Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat17Set.MultisetSort();
          mu_pat18Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat18Set.MultisetSort();
          mu_pat19Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat19Set.MultisetSort();
          mu_pat20Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat20Set.MultisetSort();
          mu_pat21Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat21Set.MultisetSort();
          mu_pat22Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat22Set.MultisetSort();
          mu_pat23Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat23Set.MultisetSort();
          mu_pat24Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat24Set.MultisetSort();
          mu_pat25Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat25Set.MultisetSort();
          mu_pat26Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat26Set.MultisetSort();
          mu_gnum.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_gnum.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_emit.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_D_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_D_known.MultisetSort();
              mu_C_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_C_known.MultisetSort();
              mu_B_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_B_known.MultisetSort();
              mu_A_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_A_known.MultisetSort();
              mu_sPat26Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat26Set.MultisetSort();
              mu_sPat25Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat25Set.MultisetSort();
              mu_sPat24Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat24Set.MultisetSort();
              mu_sPat23Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat23Set.MultisetSort();
              mu_sPat22Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat22Set.MultisetSort();
              mu_sPat21Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat21Set.MultisetSort();
              mu_sPat20Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat20Set.MultisetSort();
              mu_sPat19Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat19Set.MultisetSort();
              mu_sPat18Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat18Set.MultisetSort();
              mu_sPat17Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat17Set.MultisetSort();
              mu_sPat16Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat16Set.MultisetSort();
              mu_sPat15Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat15Set.MultisetSort();
              mu_sPat14Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat14Set.MultisetSort();
              mu_sPat13Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat13Set.MultisetSort();
              mu_sPat12Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat12Set.MultisetSort();
              mu_sPat11Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat11Set.MultisetSort();
              mu_sPat10Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat10Set.MultisetSort();
              mu_sPat9Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat9Set.MultisetSort();
              mu_sPat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
              mu_sPat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
              mu_msg_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleA.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleB.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_roleC.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleC.MultisetSort();
              mu_roleD.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleD.MultisetSort();
              mu_msgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat9Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat10Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat11Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat12Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat13Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat14Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
              mu_pat15Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
              mu_pat16Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat16Set.MultisetSort();
              mu_pat17Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat17Set.MultisetSort();
              mu_pat18Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat18Set.MultisetSort();
              mu_pat19Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat19Set.MultisetSort();
              mu_pat20Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat20Set.MultisetSort();
              mu_pat21Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat21Set.MultisetSort();
              mu_pat22Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat22Set.MultisetSort();
              mu_pat23Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat23Set.MultisetSort();
              mu_pat24Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat24Set.MultisetSort();
              mu_pat25Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat25Set.MultisetSort();
              mu_pat26Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat26Set.MultisetSort();
              mu_gnum.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_emit.MultisetSort();
      mu_Spy_known.MultisetSort();
      mu_D_known.MultisetSort();
      mu_C_known.MultisetSort();
      mu_B_known.MultisetSort();
      mu_A_known.MultisetSort();
      mu_sPat26Set.MultisetSort();
      mu_sPat25Set.MultisetSort();
      mu_sPat24Set.MultisetSort();
      mu_sPat23Set.MultisetSort();
      mu_sPat22Set.MultisetSort();
      mu_sPat21Set.MultisetSort();
      mu_sPat20Set.MultisetSort();
      mu_sPat19Set.MultisetSort();
      mu_sPat18Set.MultisetSort();
      mu_sPat17Set.MultisetSort();
      mu_sPat16Set.MultisetSort();
      mu_sPat15Set.MultisetSort();
      mu_sPat14Set.MultisetSort();
      mu_sPat13Set.MultisetSort();
      mu_sPat12Set.MultisetSort();
      mu_sPat11Set.MultisetSort();
      mu_sPat10Set.MultisetSort();
      mu_sPat9Set.MultisetSort();
      mu_sPat8Set.MultisetSort();
      mu_sPat7Set.MultisetSort();
      mu_sPat6Set.MultisetSort();
      mu_sPat5Set.MultisetSort();
      mu_sPat4Set.MultisetSort();
      mu_sPat3Set.MultisetSort();
      mu_sPat2Set.MultisetSort();
      mu_sPat1Set.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_ch.MultisetSort();
      mu_roleA.MultisetSort();
      mu_roleB.MultisetSort();
      mu_roleC.MultisetSort();
      mu_roleD.MultisetSort();
      mu_msgs.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat6Set.MultisetSort();
      mu_pat7Set.MultisetSort();
      mu_pat8Set.MultisetSort();
      mu_pat9Set.MultisetSort();
      mu_pat10Set.MultisetSort();
      mu_pat11Set.MultisetSort();
      mu_pat12Set.MultisetSort();
      mu_pat13Set.MultisetSort();
      mu_pat14Set.MultisetSort();
      mu_pat15Set.MultisetSort();
      mu_pat16Set.MultisetSort();
      mu_pat17Set.MultisetSort();
      mu_pat18Set.MultisetSort();
      mu_pat19Set.MultisetSort();
      mu_pat20Set.MultisetSort();
      mu_pat21Set.MultisetSort();
      mu_pat22Set.MultisetSort();
      mu_pat23Set.MultisetSort();
      mu_pat24Set.MultisetSort();
      mu_pat25Set.MultisetSort();
      mu_pat26Set.MultisetSort();
      mu_gnum.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_emit.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_emit.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Spy_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Spy_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_D_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_D_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_C_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_C_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_B_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_B_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_A_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_A_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat26Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat26Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat25Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat25Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat24Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat24Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat23Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat23Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat22Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat22Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat21Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat21Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat20Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat20Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat19Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat19Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat18Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat18Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat17Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat17Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat16Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat16Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat15Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat15Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat14Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat14Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat13Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat13Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat12Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat12Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat11Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat11Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat10Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat10Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat9Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat9Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat8Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat1Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ch.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ch.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleA.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleA.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleB.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleB.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleC.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleC.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleD.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleD.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msgs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msgs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat1Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat8Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat9Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat9Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat10Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat10Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat11Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat11Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat12Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat12Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat13Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat13Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat14Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat14Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat15Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat15Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat16Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat16Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat17Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat17Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat18Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat18Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat19Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat19Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat20Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat20Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat21Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat21Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat22Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat22Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat23Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat23Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat24Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat24Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat25Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat25Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat26Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat26Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_gnum.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_gnum.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
