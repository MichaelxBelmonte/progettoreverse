// Function: TSocket_open
// Address: 00adcfd0
// Size: 972 bytes
// Class: TSocket
// String references:
//   "%d"
//   "TSocket::open() getaddrinfo() "

void TSocket_open(char *param_1,uint64_t param_2,uint64_t param_3,addrinfo **param_4)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  uint64_t *puVar4;
  uint32_t extraout_var;
  char *pcVar6;
  void*puVar7;
  addrinfo *paVar8;
  char *pcVar9;
  void *pvVar10;
  ulong uVar11;
  string *psVar12;
  int64_t *this_ptr;
  size_t sVar13;
  uint32_t uVar14;
  byte local_d0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  void*local_a8;
  uint64_t uStack_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  void *local_80;
  string *local_78;
  uint64_t local_70;
  char *local_68;
  uint64_t uStack_60;
  void*local_58;
  int64_t local_50;
  uint64_t local_48;
  void*local_40;
  char *local_38;
  void*puVar5;
  
  uVar14 = (uint32_t)((uint64_t)param_3 >> 0x20);
  sVar13 = (size_t)param_3;
  cVar1 = (**(code **)(*this_ptr + 0x10))();
  if (cVar1 != '\0') {
    return;
  }
  psVar12 = (string *)(uint64_t)*(uint *)(this_ptr + 4);
  if (0xffff < *(uint *)(this_ptr + 4)) {
    puVar7 = (void*)___cxa_allocate_exception();
    local_a8 = operator_new((ulong)param_1);
    local_b8 = g_023d4f00;
    uStack_b0 = _UNK_023d4f08;
    local_a8[2] = 0x696c61766e692073;
    local_a8[1] = 0x692074726f702064;
    *local_a8 = 0x6569666963657053;
    *(void*)(local_a8 + 3) = 100;
    *puVar7 = &g_02517278;
    uVar14 = std::string::string((string *)0x6569666963657053,psVar12);
    *puVar7 = &g_0252c498;
    *(void*)(puVar7 + 4) = 5;
                        ___cxa_throw(uVar14,FUN_00953b70);
  }
  local_50 = 0;
  local_a8 = (void*)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_b0 = 1;
  local_b8 = 0x401;
  _sprintf(param_1,(char *)psVar12);
  paVar8 = (addrinfo *)&local_50;
  iVar2 = _getaddrinfo((char *)paVar8,(char *)&local_b8,(addrinfo *)CONCAT44(uVar14,sVar13),param_4)
  ;
  if (iVar2 == 0) {
    if (local_50 != 0) {
      TSocket_open();
    }
    _freeaddrinfo(paVar8);
    return;
  }
  FUN_00adb250();
  puVar4 = (uint64_t *)std::string::insert((ulong)paVar8,"TSocket::open() getaddrinfo() ");
  local_58 = (void*)puVar4[2];
  pcVar9 = (char *)*puVar4;
  uStack_60 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  local_68 = pcVar9;
  _gai_strerror((int)pcVar9);
  sVar3 = _strlen(pcVar9);
  puVar5 = (void*)CONCAT44(extraout_var,sVar3);
  if ((void*)0xffffffffffffffef < puVar5) {
                        std::__basic_string_common<true>::__throw_length_error();
  }
  if ((void*)((int64_t)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pcVar6 = operator_new((ulong)pcVar9);
    local_48 = (uint64_t)(puVar5 + 0x10) & 0xfffffffffffffff0 | 1;
    local_40 = puVar5;
    local_38 = pcVar6;
  }
  else {
    local_48 = CONCAT71(local_48._1_7_,(char)sVar3 * '\x02');
    pcVar6 = (char *)((int64_t)&local_48 + 1);
    if (puVar5 == (void*)0x0) goto LAB_00add27e;
  }
  _memcpy(pcVar9,puVar5,sVar13);
LAB_00add27e:
  pcVar6[(int64_t)puVar5] = '\0';
  if ((local_48 & 1) == 0) {
    uVar11 = (ulong)((byte)local_48 >> 1);
  }
  else {
    uVar11 = (ulong)local_40;
  }
  puVar7 = (void*)std::string::append(pcVar9,uVar11);
  local_70 = puVar7[2];
  pvVar10 = (void *)*puVar7;
  psVar12 = (string *)puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  local_80 = pvVar10;
  local_78 = psVar12;
  if ((local_48 & 1) != 0) {
    operator_delete(pvVar10);
  }
  if (((uint64_t)local_68 & 1) != 0) {
    operator_delete(pvVar10);
  }
  if ((local_d0 & 1) == 0) {
    uVar11 = (ulong)pvVar10;
  }
  else {
    operator_delete(pvVar10);
    uVar11 = (ulong)pvVar10;
  }
  (*g_02754b00)();
  (**(code **)(*this_ptr + 0x28))();
  puVar7 = (void*)___cxa_allocate_exception();
  local_58 = operator_new(uVar11);
  local_68 = (char *)g_023d4fc0;
  uStack_60 = _UNK_023d4fc8;
  local_58[4] = 0x74656b636f732074;
  local_58[3] = 0x6e65696c6320726f;
  local_58[2] = 0x662074736f682065;
  local_58[1] = 0x766c6f7365722074;
  *local_58 = 0x6f6e20646c756f43;
  *(void*)(local_58 + 5) = 0x2e;
  *puVar7 = &g_02517278;
  uVar14 = std::string::string((string *)0x6f6e20646c756f43,psVar12);
  *puVar7 = &g_0252c498;
  *(void*)(puVar7 + 4) = 1;
                      ___cxa_throw(uVar14,FUN_00953b70);
}

