// ===================================================================
// TSocket — Complete reconstructed pseudocode
// 20 functions
// ===================================================================


// ============================================================
// 00adb8e0
// ============================================================
// Function: TSocket_open
// Address: 00adb8e0
// Size: 4355 bytes
// Class: TSocket
// String references:
//   "TSocket::open() Abstract Namespace Domain sockets only supported on linux: "
//   "TSocket::open() socket() "
//   "TSocket::open() THRIFT_FCNTL() "
//   "TSocket::open() THRIFT_FCNTL "
//   "TSocket::open() Unix Domain socket path too long"
//   "TSocket::open() connect() "
//   "TSocket::open() getsockopt() "
//   "TSocket::open() error on socket (after THRIFT_POLL) "
//   "TSocket::open() timed out "
//   "TSocket::open() THRIFT_POLL() "
//   "TSocket::setGenericTimeout() setsockopt() "

void TSocket_open(ulong param_1,uint64_t param_2,int param_3,void *param_4)

{
  byte bVar1;
  uint64_t uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  void*puVar7;
  uint *puVar8;
  void*puVar9;
  ulong uVar10;
  uint64_t uVar11;
  void *pvVar12;
  string *psVar13;
  string *psVar14;
  int64_t arg1;
  int64_t *this_ptr;
  socklen_t sVar15;
  uint32_t uVar16;
  uint32_t local_d0;
  int local_cc;
  byte local_c8;
  undefined7 uStackY_c7;
  uint8_t uStackY_c0;
  undefined7 uStackY_bf;
  uint8_t in_stack_ffffffffffffff48;
  uint8_t in_stack_ffffffffffffff49;
  uint16_t in_stack_ffffffffffffff4a;
  uint32_t in_stack_ffffffffffffff4c;
  byte local_a8;
  uint8_t uStack_a7;
  char cStack_a6;
  uint8_t uStack_a5;
  uint32_t uStack_a4;
  uint8_t uStack_a0;
  uint8_t uStack_9f;
  uint16_t uStack_9e;
  uint8_t uStack_9c;
  uint8_t uStack_9b;
  uint16_t uStack_9a;
  uint8_t uStack_98;
  uint8_t uStack_97;
  uint16_t uStack_96;
  uint8_t uStack_94;
  uint8_t uStack_93;
  uint8_t uStack_92;
  uint8_t uStack_91;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  cVar3 = (**(code **)(*this_ptr + 0x10))();
  if (cVar3 != '\0') goto LAB_00adbe58;
  if ((*(byte *)(this_ptr + 5) & 1) == 0) {
    if (*(byte *)(this_ptr + 5) >> 1 == 0) goto LAB_00adbb7a;
LAB_00adb92f:
    iVar4 = _socket(param_1,0,param_3);
    *(int *)(this_ptr + 8) = iVar4;
  }
  else {
    if (this_ptr[6] != 0) goto LAB_00adb92f;
LAB_00adbb7a:
    iVar4 = _socket(param_1,*(int *)(arg1 + 0xc),param_3);
    *(int *)(this_ptr + 8) = iVar4;
  }
  if (iVar4 == -1) {
    piVar6 = ___error();
    iVar4 = *piVar6;
    FUN_00adb250();
    puVar7 = (void*)std::string::insert(param_1,"TSocket::open() socket() ");
    uVar2 = puVar7[2];
    uStack_98 = (uint8_t)uVar2;
    uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
    uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
    uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
    uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
    uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
    uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
    pvVar12 = (void *)*puVar7;
    uVar2 = puVar7[1];
    uStack_a0 = (uint8_t)uVar2;
    uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
    uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
    uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
    uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
    uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
    local_a8 = (byte)pvVar12;
    uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
    cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
    uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
    uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_00ad1610(pvVar12,iVar4);
    if ((local_a8 & 1) != 0) {
      operator_delete(pvVar12);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(pvVar12);
    }
    ___cxa_allocate_exception();
    local_a8 = 0x10;
    uStack_a7 = 0x73;
    cStack_a6 = 0x6f;
    uStack_a5 = 99;
    uStack_a4 = 0x2874656b;
    uStack_a0 = 0x29;
    uStack_9f = 0;
    uVar16 = FUN_00adac50(iVar4,&local_a8);
                        ___cxa_throw(uVar16,FUN_00953b70);
  }
  uVar5 = *(uint *)((int64_t)this_ptr + 0x94);
  if (0 < (int)uVar5) {
    uVar11 = (uint64_t)uVar5 / 1000;
    local_a8 = (byte)uVar11;
    uStack_a7 = (uint8_t)(uVar11 >> 8);
    cStack_a6 = (char)(uVar11 >> 0x10);
    uStack_a5 = 0;
    uStack_a4 = 0;
    iVar4 = (uVar5 % 1000) * 1000;
    uStack_a0 = (uint8_t)iVar4;
    uStack_9f = (uint8_t)((uint)iVar4 >> 8);
    uStack_9e = (uint16_t)((uint)iVar4 >> 0x10);
    iVar4 = _setsockopt((int)&local_a8,0x1005,0x10,param_4,
                        CONCAT22(in_stack_ffffffffffffff4a,
                                 CONCAT11(in_stack_ffffffffffffff49,in_stack_ffffffffffffff48)));
    if (iVar4 == -1) {
      ___error();
      FUN_00ad1610();
    }
    *(uint *)((int64_t)this_ptr + 0x94) = uVar5;
  }
  uVar5 = *(uint *)(this_ptr + 0x13);
  if (0 < (int)uVar5) {
    if ((int)this_ptr[8] != -1) {
      uVar11 = (uint64_t)uVar5 / 1000;
      local_a8 = (byte)uVar11;
      uStack_a7 = (uint8_t)(uVar11 >> 8);
      cStack_a6 = (char)(uVar11 >> 0x10);
      uStack_a5 = 0;
      uStack_a4 = 0;
      iVar4 = (uVar5 % 1000) * 1000;
      uStack_a0 = (uint8_t)iVar4;
      uStack_9f = (uint8_t)((uint)iVar4 >> 8);
      uStack_9e = (uint16_t)((uint)iVar4 >> 0x10);
      iVar4 = _setsockopt((int)&local_a8,0x1006,0x10,param_4,
                          CONCAT22(in_stack_ffffffffffffff4a,
                                   CONCAT11(in_stack_ffffffffffffff49,in_stack_ffffffffffffff48)));
      if (iVar4 == -1) {
        ___error();
        FUN_00ad1610();
      }
    }
    *(uint *)(this_ptr + 0x13) = uVar5;
  }
  if (*(char *)((int64_t)this_ptr + 0x9c) != '\0') {
    FUN_00adcb90();
  }
  FUN_00adccc0();
  FUN_00adce00();
  local_a8 = 1;
  uStack_a7 = 0;
  cStack_a6 = '\0';
  uStack_a5 = 0;
  sVar15 = 4;
  uVar10 = (ulong)&local_a8;
  _setsockopt(uVar10,0x1022,4,param_4,
              CONCAT22(in_stack_ffffffffffffff4a,
                       CONCAT11(in_stack_ffffffffffffff49,in_stack_ffffffffffffff48)));
  uVar5 = _fcntl(uVar10,0);
  if ((int)this_ptr[0x12] < 1) {
    iVar4 = _fcntl(uVar10,uVar5 & 0xfffffffb);
    if (iVar4 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      FUN_00adb250();
      puVar7 = (void*)std::string::insert(uVar10,"TSocket::open() THRIFT_FCNTL ");
      uVar2 = puVar7[2];
      uStack_98 = (uint8_t)uVar2;
      uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
      uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (uint8_t)uVar2;
      uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
      cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
      uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      FUN_00ad1610(pvVar12,iVar4);
      if ((local_a8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      ___cxa_allocate_exception();
      local_a8 = 0x2a;
      uStack_a7 = 0x54;
      cStack_a6 = 0x48;
      uStack_a5 = 0x52;
      uStack_a4 = 0x5f544649;
      uStack_a0 = 0x46;
      uStack_9f = 0x43;
      uStack_9e = 0x544e;
      uStack_9c = 0x4c;
      uStack_9b = 0x28;
      uStack_9a = 0x2029;
      uStack_98 = 0x66;
      uStack_97 = 0x61;
      uStack_96 = 0x6c69;
      uStack_94 = 0x65;
      uStack_93 = 100;
      uStack_92 = 0;
      uVar16 = FUN_00adac50(iVar4,&local_a8);
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
  }
  else {
    iVar4 = _fcntl(uVar10,uVar5 | 4);
    if (iVar4 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      FUN_00adb250();
      puVar7 = (void*)std::string::insert(uVar10,"TSocket::open() THRIFT_FCNTL() ");
      uVar2 = puVar7[2];
      uStack_98 = (uint8_t)uVar2;
      uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
      uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (uint8_t)uVar2;
      uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
      cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
      uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      FUN_00ad1610(pvVar12,iVar4);
      if ((local_a8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      ___cxa_allocate_exception();
      local_a8 = 0x2a;
      uStack_a7 = 0x54;
      cStack_a6 = 0x48;
      uStack_a5 = 0x52;
      uStack_a4 = 0x5f544649;
      uStack_a0 = 0x46;
      uStack_9f = 0x43;
      uStack_9e = 0x544e;
      uStack_9c = 0x4c;
      uStack_9b = 0x28;
      uStack_9a = 0x2029;
      uStack_98 = 0x66;
      uStack_97 = 0x61;
      uStack_96 = 0x6c69;
      uStack_94 = 0x65;
      uStack_93 = 100;
      uStack_92 = 0;
      uVar16 = FUN_00adac50(iVar4,&local_a8);
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
  }
  bVar1 = *(byte *)(this_ptr + 5);
  if ((bVar1 & 1) == 0) {
    pvVar12 = (void *)(uint64_t)(bVar1 >> 1);
    if (pvVar12 == (void *)0x0) goto LAB_00adbc59;
LAB_00adbc43:
    if ((bVar1 & 1) == 0) {
      pvVar12 = (void *)(uint64_t)(bVar1 >> 1);
      uVar11 = (uint64_t)(bVar1 >> 1);
    }
    else {
      uVar11 = this_ptr[6];
    }
    if (&section_00000068 < (section *)(uVar11 + 1)) {
      puVar8 = (uint *)___error();
      uVar10 = (ulong)pvVar12;
      psVar13 = (string *)(uint64_t)*puVar8;
      FUN_00ad1610();
      puVar7 = (void*)___cxa_allocate_exception();
      puVar9 = operator_new(uVar10);
      uStack_98 = SUB81(puVar9,0);
      uStack_97 = (uint8_t)((uint64_t)puVar9 >> 8);
      uStack_96 = (uint16_t)((uint64_t)puVar9 >> 0x10);
      uStack_94 = (uint8_t)((uint64_t)puVar9 >> 0x20);
      uStack_93 = (uint8_t)((uint64_t)puVar9 >> 0x28);
      uStack_92 = (uint8_t)((uint64_t)puVar9 >> 0x30);
      uStack_91 = (uint8_t)((uint64_t)puVar9 >> 0x38);
      local_a8 = (byte)g_023d4fd0;
      uStack_a7 = (uint8_t)((uint64_t)g_023d4fd0 >> 8);
      cStack_a6 = (char)((uint64_t)g_023d4fd0 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)g_023d4fd0 >> 0x18);
      uStack_a4 = (uint32_t)((uint64_t)g_023d4fd0 >> 0x20);
      uStack_a0 = (uint8_t)_UNK_023d4fd8;
      uStack_9f = (uint8_t)((uint64_t)_UNK_023d4fd8 >> 8);
      uStack_9e = (uint16_t)((uint64_t)_UNK_023d4fd8 >> 0x10);
      uStack_9c = (uint8_t)((uint64_t)_UNK_023d4fd8 >> 0x20);
      uStack_9b = (uint8_t)((uint64_t)_UNK_023d4fd8 >> 0x28);
      uStack_9a = (uint16_t)((uint64_t)_UNK_023d4fd8 >> 0x30);
      puVar9[3] = 0x6e6f6c206f6f7420;
      puVar9[2] = 0x687461702074656b;
      puVar9[1] = 0x636f73206e69616d;
      *puVar9 = 0x6f442078696e5520;
      *(void*)(puVar9 + 4) = 0x67;
      *puVar7 = &g_02517278;
      uVar16 = std::string::string((string *)0x6f442078696e5520,psVar13);
      *puVar7 = &g_0252c498;
      *(void*)(puVar7 + 4) = 1;
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
    uStack_a7 = 1;
    _memcpy(pvVar12,(section *)(uVar11 + 1),sVar15);
    uVar10 = (ulong)pvVar12;
    if (cStack_a6 == '\0') {
      psVar13 = (string *)0xffffff9d;
      FUN_00ad1610();
      puVar7 = (void*)___cxa_allocate_exception();
      puVar9 = operator_new(uVar10);
      local_c8 = (byte)g_023d4ee0;
      uStackY_c7 = (undefined7)((uint64_t)g_023d4ee0 >> 8);
      uStackY_c0 = (uint8_t)_UNK_023d4ee8;
      uStackY_bf = (undefined7)((uint64_t)_UNK_023d4ee8 >> 8);
      puVar9[5] = 0x6f7070757320746f;
      puVar9[4] = 0x6e20687461702074;
      puVar9[3] = 0x656b636f73206e69;
      puVar9[2] = 0x616d6f4420656361;
      puVar9[1] = 0x7073656d614e2074;
      *puVar9 = 0x6361727473624120;
      *(void*)(puVar9 + 6) = 0x64657472;
      *(void*)((int64_t)puVar9 + 0x34) = 0;
      *puVar7 = &g_02517278;
      uVar16 = std::string::string((string *)0x6361727473624120,psVar13);
      *puVar7 = &g_0252c498;
      *(void*)(puVar7 + 4) = 1;
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
    iVar4 = _connect(uVar10,(sockaddr *)(section_00000068.sectname + 2),sVar15);
  }
  else {
    pvVar12 = (void *)this_ptr[6];
    if (pvVar12 != (void *)0x0) goto LAB_00adbc43;
LAB_00adbc59:
    uVar10 = 0;
    iVar4 = _connect(0,(sockaddr *)(uint64_t)*(uint *)(arg1 + 0x10),sVar15);
  }
  if (iVar4 != 0) {
    piVar6 = ___error();
    if ((*piVar6 != 0x24) && (piVar6 = ___error(), *piVar6 != 0x23)) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      FUN_00adb250();
      puVar7 = (void*)std::string::insert(uVar10,"TSocket::open() connect() ");
      uVar2 = puVar7[2];
      uStack_98 = (uint8_t)uVar2;
      uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
      uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (uint8_t)uVar2;
      uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
      cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
      uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      FUN_00ad1610(pvVar12,iVar4);
      if ((local_a8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      ___cxa_allocate_exception();
      local_a8 = 0x20;
      uStack_a7 = 99;
      cStack_a6 = 0x6f;
      uStack_a5 = 0x6e;
      uStack_a4 = 0x7463656e;
      uStack_a0 = 0x28;
      uStack_9f = 0x29;
      uStack_9e = 0x6620;
      uStack_9c = 0x61;
      uStack_9b = 0x69;
      uStack_9a = 0x656c;
      uStack_98 = 100;
      uStack_97 = 0;
      uVar16 = FUN_00adac50(iVar4,&local_a8);
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
    iVar4 = _poll();
    if (iVar4 < 1) {
      if (iVar4 != 0) {
        piVar6 = ___error();
        iVar4 = *piVar6;
        FUN_00adb250();
        puVar7 = (void*)std::string::insert(uVar10,"TSocket::open() THRIFT_POLL() ");
        uVar2 = puVar7[2];
        uStack_98 = (uint8_t)uVar2;
        uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
        uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
        uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
        uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
        uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
        uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
        pvVar12 = (void *)*puVar7;
        uVar2 = puVar7[1];
        uStack_a0 = (uint8_t)uVar2;
        uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
        uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
        uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
        uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
        uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
        local_a8 = (byte)pvVar12;
        uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
        cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
        uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
        uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        FUN_00ad1610(pvVar12,iVar4);
        if ((local_a8 & 1) != 0) {
          operator_delete(pvVar12);
        }
        if ((local_c8 & 1) != 0) {
          operator_delete(pvVar12);
        }
        ___cxa_allocate_exception();
        local_a8 = 0x28;
        uStack_a7 = 0x54;
        cStack_a6 = 0x48;
        uStack_a5 = 0x52;
        uStack_a4 = 0x5f544649;
        uStack_a0 = 0x50;
        uStack_9f = 0x4f;
        uStack_9e = 0x4c4c;
        uStack_9c = 0x28;
        uStack_9b = 0x29;
        uStack_9a = 0x6620;
        uStack_98 = 0x61;
        uStack_97 = 0x69;
        uStack_96 = 0x656c;
        uStack_94 = 100;
        uStack_93 = 0;
        uVar16 = FUN_00adac50(iVar4,&local_a8);
                            ___cxa_throw(uVar16,FUN_00953b70);
      }
      FUN_00adb250();
      puVar7 = (void*)std::string::insert(uVar10,"TSocket::open() timed out ");
      uVar2 = puVar7[2];
      uStack_98 = (uint8_t)uVar2;
      uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
      uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      psVar13 = (string *)*puVar7;
      psVar14 = (string *)puVar7[1];
      uStack_a0 = SUB81(psVar14,0);
      uStack_9f = (uint8_t)((uint64_t)psVar14 >> 8);
      uStack_9e = (uint16_t)((uint64_t)psVar14 >> 0x10);
      uStack_9c = (uint8_t)((uint64_t)psVar14 >> 0x20);
      uStack_9b = (uint8_t)((uint64_t)psVar14 >> 0x28);
      uStack_9a = (uint16_t)((uint64_t)psVar14 >> 0x30);
      local_a8 = (byte)psVar13;
      uStack_a7 = (uint8_t)((uint64_t)psVar13 >> 8);
      cStack_a6 = (char)((uint64_t)psVar13 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)psVar13 >> 0x18);
      uStack_a4 = (uint32_t)((uint64_t)psVar13 >> 0x20);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      if ((local_c8 & 1) != 0) {
        operator_delete(psVar13);
      }
      (*g_02754b00)();
      puVar7 = (void*)___cxa_allocate_exception();
      local_c8 = 0x20;
      uStackY_c7 = 0x2029286e65706f;
      uStackY_c0 = 0x74;
      uStackY_bf = 0x756f2064656d69;
      *puVar7 = &g_02517278;
      uVar16 = std::string::string(psVar13,psVar14);
      *puVar7 = &g_0252c498;
      *(void*)(puVar7 + 4) = 1;
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
    local_d0 = 4;
    uVar10 = (ulong)&local_cc;
    iVar4 = _getsockopt(uVar10,0x1007,(int)&local_d0,param_4,
                        (socklen_t *)
                        CONCAT44(in_stack_ffffffffffffff4c,
                                 CONCAT22(in_stack_ffffffffffffff4a,
                                          CONCAT11(in_stack_ffffffffffffff49,
                                                   in_stack_ffffffffffffff48))));
    if (iVar4 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      FUN_00adb250();
      puVar7 = (void*)std::string::insert(uVar10,"TSocket::open() getsockopt() ");
      uVar2 = puVar7[2];
      uStack_98 = (uint8_t)uVar2;
      uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
      uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (uint8_t)uVar2;
      uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
      cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
      uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      FUN_00ad1610(pvVar12,iVar4);
      if ((local_a8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      ___cxa_allocate_exception();
      local_a8 = 0x18;
      uStack_a7 = 0x67;
      cStack_a6 = 0x65;
      uStack_a5 = 0x74;
      uStack_a4 = 0x6b636f73;
      uStack_a0 = 0x6f;
      uStack_9f = 0x70;
      uStack_9e = 0x2874;
      uStack_9c = 0x29;
      uStack_9b = 0;
      uVar16 = FUN_00adac50(iVar4,&local_a8);
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
    if (local_cc != 0) {
      FUN_00adb250();
      puVar7 = (void*)
               std::string::insert(uVar10,"TSocket::open() error on socket (after THRIFT_POLL) ");
      uVar2 = puVar7[2];
      uStack_98 = (uint8_t)uVar2;
      uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
      uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (uint8_t)uVar2;
      uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
      uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
      uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
      uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
      uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
      cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
      uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      FUN_00ad1610(pvVar12,local_cc);
      if ((local_a8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(pvVar12);
      }
      ___cxa_allocate_exception();
      local_a8 = 0x26;
      uStack_a7 = 0x73;
      cStack_a6 = 0x6f;
      uStack_a5 = 99;
      uStack_a4 = 0x2074656b;
      uStack_a0 = 0x6f;
      uStack_9f = 0x70;
      uStack_9e = 0x6e65;
      uStack_9c = 0x28;
      uStack_9b = 0x29;
      uStack_9a = 0x6520;
      uStack_98 = 0x72;
      uStack_97 = 0x72;
      uStack_96 = 0x726f;
      uStack_94 = 0;
      uVar16 = FUN_00adac50(local_cc,&local_a8);
                          ___cxa_throw(uVar16,FUN_00953b70);
    }
  }
  iVar4 = _fcntl(uVar10,uVar5);
  if (iVar4 == -1) {
    piVar6 = ___error();
    iVar4 = *piVar6;
    FUN_00adb250();
    puVar7 = (void*)std::string::insert(uVar10,"TSocket::open() THRIFT_FCNTL ");
    uVar2 = puVar7[2];
    uStack_98 = (uint8_t)uVar2;
    uStack_97 = (uint8_t)((uint64_t)uVar2 >> 8);
    uStack_96 = (uint16_t)((uint64_t)uVar2 >> 0x10);
    uStack_94 = (uint8_t)((uint64_t)uVar2 >> 0x20);
    uStack_93 = (uint8_t)((uint64_t)uVar2 >> 0x28);
    uStack_92 = (uint8_t)((uint64_t)uVar2 >> 0x30);
    uStack_91 = (uint8_t)((uint64_t)uVar2 >> 0x38);
    pvVar12 = (void *)*puVar7;
    uVar2 = puVar7[1];
    uStack_a0 = (uint8_t)uVar2;
    uStack_9f = (uint8_t)((uint64_t)uVar2 >> 8);
    uStack_9e = (uint16_t)((uint64_t)uVar2 >> 0x10);
    uStack_9c = (uint8_t)((uint64_t)uVar2 >> 0x20);
    uStack_9b = (uint8_t)((uint64_t)uVar2 >> 0x28);
    uStack_9a = (uint16_t)((uint64_t)uVar2 >> 0x30);
    local_a8 = (byte)pvVar12;
    uStack_a7 = (uint8_t)((uint64_t)pvVar12 >> 8);
    cStack_a6 = (char)((uint64_t)pvVar12 >> 0x10);
    uStack_a5 = (uint8_t)((uint64_t)pvVar12 >> 0x18);
    uStack_a4 = (uint32_t)((uint64_t)pvVar12 >> 0x20);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_00ad1610(pvVar12,iVar4);
    if ((local_a8 & 1) != 0) {
      operator_delete(pvVar12);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(pvVar12);
    }
    ___cxa_allocate_exception();
    local_a8 = 0x2a;
    uStack_a7 = 0x54;
    cStack_a6 = 0x48;
    uStack_a5 = 0x52;
    uStack_a4 = 0x5f544649;
    uStack_a0 = 0x46;
    uStack_9f = 0x43;
    uStack_9e = 0x544e;
    uStack_9c = 0x4c;
    uStack_9b = 0x28;
    uStack_9a = 0x2029;
    uStack_98 = 0x66;
    uStack_97 = 0x61;
    uStack_96 = 0x6c69;
    uStack_94 = 0x65;
    uStack_93 = 100;
    uStack_92 = 0;
    uVar16 = FUN_00adac50(iVar4,&local_a8);
                        ___cxa_throw(uVar16,FUN_00953b70);
  }
  bVar1 = *(byte *)(this_ptr + 5);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00adbe58;
  }
  else if (this_ptr[6] != 0) goto LAB_00adbe58;
  puVar7 = *(void**)(arg1 + 0x20);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00adbe58;
  }
  else if (this_ptr[6] != 0) goto LAB_00adbe58;
  if (*(char *)((int64_t)puVar7 + 1) == '\x1e') {
    if (*(int *)(arg1 + 0x10) == 0x1c) {
      *(void*)((int64_t)this_ptr + 0xc4) = *(void*)(puVar7 + 3);
      *(void*)((int64_t)this_ptr + 0xbc) = puVar7[2];
      goto LAB_00adbe00;
    }
  }
  else if ((*(char *)((int64_t)puVar7 + 1) == '\x02') && (*(int *)(arg1 + 0x10) == 0x10)) {
LAB_00adbe00:
    uVar2 = *puVar7;
    *(void*)((int64_t)this_ptr + 0xb4) = puVar7[1];
    *(void*)((int64_t)this_ptr + 0xac) = uVar2;
  }
  if ((*(byte *)(this_ptr + 0xc) & 1) == 0) {
    *(void*)(this_ptr + 0xc) = 0;
    bVar1 = *(byte *)(this_ptr + 9);
  }
  else {
    *(void*)this_ptr[0xe] = 0;
    this_ptr[0xd] = 0;
    bVar1 = *(byte *)(this_ptr + 9);
  }
  if ((bVar1 & 1) == 0) {
    *(void*)(this_ptr + 9) = 0;
  }
  else {
    *(void*)this_ptr[0xb] = 0;
    this_ptr[10] = 0;
  }
LAB_00adbe58:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 00add580
// ============================================================
// Function: TSocket_read
// Address: 00add580
// Size: 2374 bytes
// Class: TSocket
// String references:
//   "TSocket::read() THRIFT_POLL() "
//   "TSocket::read() recv() "

ssize_t TSocket_read(ulong param_1,timeval *param_2,size_t param_3,int param_4)

{
  uint64_t uVar1;
  int iVar2;
  ssize_t sVar3;
  void*puVar4;
  int *piVar5;
  void*puVar6;
  void*puVar7;
  ulong uVar8;
  timeval *ptVar9;
  timeval *this;
  uint *this_00;
  void *pvVar10;
  int64_t this_ptr;
  uint uVar11;
  int iVar12;
  uint32_t uVar13;
  int local_88;
  int local_80;
  uint local_78;
  uint32_t uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint8_t uStack_68;
  uint8_t uStack_67;
  undefined6 uStack_66;
  uint64_t local_58;
  uint64_t uStack_50;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*(int *)(this_ptr + 0x40) == -1) {
    puVar7 = (void*)___cxa_allocate_exception();
    puVar6 = operator_new(param_1);
    uStack_68 = SUB81(puVar6,0);
    uStack_67 = (uint8_t)((uint64_t)puVar6 >> 8);
    uStack_66 = (undefined6)((uint64_t)puVar6 >> 0x10);
    local_78 = (uint)g_023d4f50;
    uStack_74 = (uint32_t)((uint64_t)g_023d4f50 >> 0x20);
    uStack_70 = (uint)_UNK_023d4f58;
    uStack_6c = (uint)((uint64_t)_UNK_023d4f58 >> 0x20);
    *(void*)((int64_t)puVar6 + 0x16) = 0x74656b636f73206e;
    puVar6[2] = 0x206e65706f2d6e6f;
    puVar6[1] = 0x6e206e6f20646165;
    *puVar6 = 0x722064656c6c6143;
    *(void*)((int64_t)puVar6 + 0x1e) = 0;
    *puVar7 = &g_02517278;
    uVar13 = std::string::string((string *)0x722064656c6c6143,(string *)param_2);
    *puVar7 = &g_0252c498;
    *(void*)(puVar7 + 4) = 1;
                        ___cxa_throw(uVar13,FUN_00953b70);
  }
  ptVar9 = (timeval *)((uint64_t)param_2 & 0xffffffff);
  iVar2 = *(int *)(this_ptr + 0x98);
  if (iVar2 == 0) {
    uVar11 = 0;
  }
  else {
    iVar12 = 2;
    if (0 < *(int *)(this_ptr + 0xa8)) {
      iVar12 = *(int *)(this_ptr + 0xa8);
    }
    uVar11 = (iVar2 * 1000) / iVar12;
    param_2 = (timeval *)((int64_t)(iVar2 * 1000) % (int64_t)iVar12 & 0xffffffff);
  }
  iVar12 = 0;
  this = ptVar9;
  if (uVar11 != 0) {
    do {
      if (iVar2 < 1) {
        local_80 = 0;
        local_88 = 0;
        puVar4 = *(void**)(this_ptr + 0x80);
        if (puVar4 != (void*)0x0) goto LAB_00add64b;
LAB_00add6aa:
        this = (timeval *)0x0;
        param_2 = ptVar9;
        sVar3 = _recv(0,ptVar9,param_3,param_4);
        piVar5 = ___error();
        if (-1 < sVar3) goto LAB_00add969;
        iVar2 = *piVar5;
        this_00 = &switchD_00add6ed::switchdataD_00addfd4;
        switch(iVar2) {
        case 0x23:
          if (*(int *)(this_ptr + 0x98) == 0) goto LAB_00addb8f;
          _gettimeofday((timeval *)&switchD_00add6ed::switchdataD_00addfd4,param_2);
          uVar8 = (int)uStack_50 - local_80;
          this = (timeval *)(uint64_t)uVar8;
          if (uVar11 <= ((int)local_58 - local_88) * 1000000 + uVar8) {
            puVar7 = (void*)___cxa_allocate_exception();
            puVar6 = operator_new(uVar8);
            uStack_68 = SUB81(puVar6,0);
            uStack_67 = (uint8_t)((uint64_t)puVar6 >> 8);
            uStack_66 = (undefined6)((uint64_t)puVar6 >> 0x10);
            local_78 = (uint)g_023d4f00;
            uStack_74 = (uint32_t)((uint64_t)g_023d4f00 >> 0x20);
            uStack_70 = (uint)_UNK_023d4f08;
            uStack_6c = (uint)((uint64_t)_UNK_023d4f08 >> 0x20);
            puVar6[2] = 0x74756f2064656d69;
            puVar6[1] = 0x7428204e49414741;
            *puVar6 = 0x455f544649524854;
            *(void*)(puVar6 + 3) = 0x29;
            *puVar7 = &g_02517278;
            uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
            *puVar7 = &g_0252c498;
            *(void*)(puVar7 + 4) = 2;
                                ___cxa_throw(uVar13,FUN_00953b70);
          }
          if (*(int *)(this_ptr + 0xa8) <= iVar12) goto LAB_00addc48;
          _usleep(uVar8);
          break;
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x37:
        case 0x38:
        case 0x3a:
        case 0x3b:
          goto switchD_00add886_caseD_24;
        case 0x36:
          goto switchD_00add886_caseD_36;
        case 0x39:
          goto switchD_00add886_caseD_39;
        case 0x3c:
          goto switchD_00add886_caseD_3c;
        default:
          this_00 = (uint *)this;
          if (iVar2 != 4) goto switchD_00add886_caseD_24;
          if (*(int *)(this_ptr + 0xa8) <= iVar12) goto LAB_00addd01;
        }
      }
      else {
        _gettimeofday(this,param_2);
        puVar4 = *(void**)(this_ptr + 0x80);
        if (puVar4 == (void*)0x0) goto LAB_00add6aa;
LAB_00add64b:
        this = (timeval *)(uint64_t)*(uint *)(this_ptr + 0x40);
        local_58._0_6_ = CONCAT24(1,*(uint *)(this_ptr + 0x40));
        local_58 = (uint64_t)(uint6)local_58;
        uStack_50._0_6_ = CONCAT24(1,*puVar4);
        uStack_50 = (uint64_t)(uint6)uStack_50;
        param_2 = (timeval *)
                  (uint64_t)
                  (-(uint)(*(uint *)(this_ptr + 0x98) == 0) | *(uint *)(this_ptr + 0x98));
        iVar2 = _poll();
        piVar5 = ___error();
        if (-1 < iVar2) {
          if (iVar2 != 0) {
            if ((uStack_50 & 0x1000000000000) == 0) goto LAB_00add6aa;
            goto LAB_00addb1e;
          }
          goto LAB_00adda7f;
        }
        iVar2 = *piVar5;
        if (iVar2 != 4) goto LAB_00add8fc;
        if (*(int *)(this_ptr + 0xa8) <= iVar12) goto LAB_00add8f6;
      }
      iVar12 = iVar12 + 1;
      iVar2 = *(int *)(this_ptr + 0x98);
    } while( true );
  }
  do {
    if (iVar2 < 1) {
      puVar4 = *(void**)(this_ptr + 0x80);
      if (puVar4 != (void*)0x0) goto LAB_00add7eb;
LAB_00add84a:
      this = (timeval *)0x0;
      param_2 = ptVar9;
      sVar3 = _recv(0,ptVar9,param_3,param_4);
      piVar5 = ___error();
      if (-1 < sVar3) goto LAB_00add969;
      iVar2 = *piVar5;
      this_00 = (uint *)this;
      switch(iVar2) {
      case 0x23:
        if (*(int *)(this_ptr + 0x98) == 0) {
LAB_00addb8f:
          uVar8 = (ulong)this_00;
          puVar7 = (void*)___cxa_allocate_exception();
          puVar6 = operator_new(uVar8);
          uStack_68 = SUB81(puVar6,0);
          uStack_67 = (uint8_t)((uint64_t)puVar6 >> 8);
          uStack_66 = (undefined6)((uint64_t)puVar6 >> 0x10);
          local_78 = (uint)g_023d4f30;
          uStack_74 = (uint32_t)((uint64_t)g_023d4f30 >> 0x20);
          uStack_70 = (uint)_UNK_023d4f38;
          uStack_6c = (uint)((uint64_t)_UNK_023d4f38 >> 0x20);
          *(void*)((int64_t)puVar6 + 0x1d) = 0x2973656372756f73;
          puVar6[3] = 0x756f73657220656c;
          puVar6[2] = 0x62616c696176616e;
          puVar6[1] = 0x7528204e49414741;
          *puVar6 = 0x455f544649524854;
          *(void*)((int64_t)puVar6 + 0x25) = 0;
          *puVar7 = &g_02517278;
          uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
          *puVar7 = &g_0252c498;
          *(void*)(puVar7 + 4) = 2;
                              ___cxa_throw(uVar13,FUN_00953b70);
        }
        _gettimeofday(this,param_2);
        if (*(int *)(this_ptr + 0xa8) <= iVar12) {
LAB_00addc48:
          uVar8 = (ulong)this;
          puVar7 = (void*)___cxa_allocate_exception();
          puVar6 = operator_new(uVar8);
          uStack_68 = SUB81(puVar6,0);
          uStack_67 = (uint8_t)((uint64_t)puVar6 >> 8);
          uStack_66 = (undefined6)((uint64_t)puVar6 >> 0x10);
          local_78 = (uint)g_023d4f30;
          uStack_74 = (uint32_t)((uint64_t)g_023d4f30 >> 0x20);
          uStack_70 = (uint)_UNK_023d4f38;
          uStack_6c = (uint)((uint64_t)_UNK_023d4f38 >> 0x20);
          *(void*)((int64_t)puVar6 + 0x1d) = 0x2973656372756f73;
          puVar6[3] = 0x756f73657220656c;
          puVar6[2] = 0x62616c696176616e;
          puVar6[1] = 0x7528204e49414741;
          *puVar6 = 0x455f544649524854;
          *(void*)((int64_t)puVar6 + 0x25) = 0;
          *puVar7 = &g_02517278;
          uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
          *puVar7 = &g_0252c498;
          *(void*)(puVar7 + 4) = 2;
                              ___cxa_throw(uVar13,FUN_00953b70);
        }
        _usleep((useconds_t)this);
        break;
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x37:
      case 0x38:
      case 0x3a:
      case 0x3b:
        goto switchD_00add886_caseD_24;
      case 0x36:
        goto switchD_00add886_caseD_36;
      case 0x39:
switchD_00add886_caseD_39:
        puVar7 = (void*)___cxa_allocate_exception();
        local_78 = 0x5248541e;
        uStack_74 = 0x5f544649;
        uStack_70 = 0x544f4e45;
        uStack_6c = 0x4e4e4f43;
        uStack_68 = 0;
        *puVar7 = &g_02517278;
        uVar13 = std::string::string((string *)this_00,(string *)param_2);
        *puVar7 = &g_0252c498;
        *(void*)(puVar7 + 4) = 1;
                            ___cxa_throw(uVar13,FUN_00953b70);
      case 0x3c:
switchD_00add886_caseD_3c:
        puVar7 = (void*)___cxa_allocate_exception();
        local_78 = 0x52485420;
        uStack_74 = 0x5f544649;
        uStack_70 = 0x4d495445;
        uStack_6c = 0x554f4445;
        uStack_68 = 0x54;
        uStack_67 = 0;
        *puVar7 = &g_02517278;
        uVar13 = std::string::string((string *)this_00,(string *)param_2);
        *puVar7 = &g_0252c498;
        *(void*)(puVar7 + 4) = 2;
                            ___cxa_throw(uVar13,FUN_00953b70);
      default:
        if (iVar2 != 4) goto switchD_00add886_caseD_24;
        if (*(int *)(this_ptr + 0xa8) <= iVar12) {
LAB_00addd01:
          iVar2 = 4;
          this_00 = (uint *)this;
switchD_00add886_caseD_24:
          uVar8 = (ulong)this_00;
          FUN_00adb250();
          puVar7 = (void*)std::string::insert(uVar8,"TSocket::read() recv() ");
          uVar1 = puVar7[2];
          uStack_68 = (uint8_t)uVar1;
          uStack_67 = (uint8_t)((uint64_t)uVar1 >> 8);
          uStack_66 = (undefined6)((uint64_t)uVar1 >> 0x10);
          pvVar10 = (void *)*puVar7;
          uStack_70 = (uint)puVar7[1];
          uStack_6c = (uint)((uint64_t)puVar7[1] >> 0x20);
          local_78 = (uint)pvVar10;
          uStack_74 = (uint32_t)((uint64_t)pvVar10 >> 0x20);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          FUN_00ad1610(pvVar10,iVar2);
          if ((local_78 & 1) != 0) {
            operator_delete(pvVar10);
          }
          if ((local_58 & 1) != 0) {
            operator_delete(pvVar10);
          }
          ___cxa_allocate_exception();
          local_78 = 0x6b6e550e;
          uStack_74 = 0x6e776f6e;
          uStack_70 = uStack_70 & 0xffffff00;
          uVar13 = FUN_00adac50(iVar2,&local_78);
                              ___cxa_throw(uVar13,FUN_00953b70);
        }
      }
    }
    else {
      _gettimeofday(this,param_2);
      puVar4 = *(void**)(this_ptr + 0x80);
      if (puVar4 == (void*)0x0) goto LAB_00add84a;
LAB_00add7eb:
      this = (timeval *)(uint64_t)*(uint *)(this_ptr + 0x40);
      local_58._0_6_ = CONCAT24(1,*(uint *)(this_ptr + 0x40));
      local_58 = (uint64_t)(uint6)local_58;
      uStack_50._0_6_ = CONCAT24(1,*puVar4);
      uStack_50 = (uint64_t)(uint6)uStack_50;
      param_2 = (timeval *)
                (uint64_t)(-(uint)(*(uint *)(this_ptr + 0x98) == 0) | *(uint *)(this_ptr + 0x98))
      ;
      iVar2 = _poll();
      piVar5 = ___error();
      if (-1 < iVar2) {
        if (iVar2 == 0) {
LAB_00adda7f:
          uVar8 = (ulong)this;
          puVar7 = (void*)___cxa_allocate_exception();
          puVar6 = operator_new(uVar8);
          uStack_68 = SUB81(puVar6,0);
          uStack_67 = (uint8_t)((uint64_t)puVar6 >> 8);
          uStack_66 = (undefined6)((uint64_t)puVar6 >> 0x10);
          local_78 = (uint)g_023d4f00;
          uStack_74 = (uint32_t)((uint64_t)g_023d4f00 >> 0x20);
          uStack_70 = (uint)_UNK_023d4f08;
          uStack_6c = (uint)((uint64_t)_UNK_023d4f08 >> 0x20);
          puVar6[2] = 0x74756f2064656d69;
          puVar6[1] = 0x7428204e49414741;
          *puVar6 = 0x455f544649524854;
          *(void*)(puVar6 + 3) = 0x29;
          *puVar7 = &g_02517278;
          uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
          *puVar7 = &g_0252c498;
          *(void*)(puVar7 + 4) = 2;
                              ___cxa_throw(uVar13,FUN_00953b70);
        }
        if ((uStack_50 & 0x1000000000000) != 0) {
LAB_00addb1e:
          puVar7 = (void*)___cxa_allocate_exception();
          local_78 = 0x746e4916;
          uStack_74 = 0x75727265;
          uStack_70 = 0x64657470;
          uStack_6c = uStack_6c & 0xffffff00;
          *puVar7 = &g_02517278;
          uVar13 = std::string::string((string *)this,(string *)param_2);
          *puVar7 = &g_0252c498;
          *(void*)(puVar7 + 4) = 4;
                              ___cxa_throw(uVar13,FUN_00953b70);
        }
        goto LAB_00add84a;
      }
      iVar2 = *piVar5;
      if (iVar2 != 4) goto LAB_00add8fc;
      if (*(int *)(this_ptr + 0xa8) <= iVar12) break;
    }
    iVar12 = iVar12 + 1;
    iVar2 = *(int *)(this_ptr + 0x98);
  } while( true );
LAB_00add8f6:
  iVar2 = 4;
LAB_00add8fc:
  FUN_00ad1610();
  ___cxa_allocate_exception();
  local_78 = 0x6b6e550e;
  uStack_74 = 0x6e776f6e;
  uStack_70 = uStack_70 & 0xffffff00;
  uVar13 = FUN_00adac50(iVar2,&local_78);
                      ___cxa_throw(uVar13,FUN_00953b70);
switchD_00add886_caseD_36:
  sVar3 = 0;
LAB_00add969:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return sVar3;
  }
                      ___stack_chk_fail();
}



// ============================================================
// 00adcfd0
// ============================================================
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



// ============================================================
// 00ad99e0
// ============================================================
// Function: FUN_00ad99e0
// Address: 00ad99e0
// Size: 900 bytes
// Class: TSocket

int FUN_00ad99e0(uint64_t param_1,string *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  string *this;
  uint *puVar6;
  int unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint local_5c;
  byte local_58;
  undefined5 uStack_57;
  uint16_t uStack_52;
  uint8_t uStack_50;
  undefined5 uStack_4f;
  uint8_t uStack_4a;
  uint8_t uStack_49;
  uint64_t local_48;
  uint local_34;
  
  this = (string *)(uint64_t)*(uint *)(this_ptr + 4);
  uVar1 = (int)this_ptr[3] + 1;
  *(uint *)(this_ptr + 3) = uVar1;
  if (*(uint *)(this_ptr + 4) < uVar1) {
    puVar5 = (void*)___cxa_allocate_exception();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &g_02517250;
    *(void*)(puVar5 + 4) = 6;
                        ___cxa_throw(&g_02517250,FUN_0088de20);
  }
  if (0xd < unaff_ESI - 2U) {
switchD_00ad9a21_caseD_5:
    puVar5 = (void*)___cxa_allocate_exception();
    local_58 = 0x1a;
    uStack_57 = 0x6c61766e69;
    uStack_52 = 0x6469;
    uStack_50 = 0x20;
    uStack_4f = 0x6570795454;
    uStack_4a = 0;
    *puVar5 = &g_02517278;
    uVar7 = std::string::string(this,param_2);
    *puVar5 = &g_02517250;
    *(void*)(puVar5 + 4) = 1;
                        ___cxa_throw(uVar7,FUN_0088de20);
  }
  this = (string *)
         ((int64_t)&switchD_00ad9a21::switchdataD_00ad9ddc +
         (int64_t)(int)(&switchD_00ad9a21::switchdataD_00ad9ddc)[unaff_ESI - 2U]);
  switch(unaff_ESI) {
  case 2:
    iVar3 = (**(code **)(*this_ptr + 0x118))();
    break;
  case 3:
    local_58 = 0;
    iVar3 = (**(code **)(*this_ptr + 0x128))();
    break;
  case 4:
    iVar3 = (**(code **)(*this_ptr + 0x148))();
    break;
  default:
    goto switchD_00ad9a21_caseD_5;
  case 6:
    iVar3 = (**(code **)(*this_ptr + 0x130))();
    break;
  case 8:
    iVar3 = (**(code **)(*this_ptr + 0x138))();
    break;
  case 10:
    iVar3 = (**(code **)(*this_ptr + 0x140))();
    break;
  case 0xb:
    local_58 = 0;
    uStack_57 = 0;
    uStack_52 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    local_48 = 0;
    iVar3 = (**(code **)(*this_ptr + 0x158))();
    if ((local_58 & 1) != 0) {
      operator_delete(this);
    }
    break;
  case 0xc:
    local_58 = 0;
    uStack_57 = 0;
    uStack_52 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    local_48 = 0;
    iVar3 = (**(code **)(*this_ptr + 200))();
    while( true ) {
      puVar6 = &local_5c;
      iVar2 = (**(code **)(*this_ptr + 0xd8))(&local_5c,&local_34);
      iVar2 = iVar2 + iVar3;
      if (local_34 == 0) break;
      iVar4 = FUN_00ad99e0();
      iVar3 = (**(code **)(*this_ptr + 0xe0))();
      iVar3 = iVar4 + iVar2 + iVar3;
    }
    iVar3 = (**(code **)(*this_ptr + 0xd0))();
    if ((local_58 & 1) != 0) {
      operator_delete(puVar6);
    }
    goto LAB_00ad9c91;
  case 0xd:
    iVar2 = (**(code **)(*this_ptr + 0xe8))(&local_5c,&local_34);
    if (local_5c != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad99e0();
        iVar4 = FUN_00ad99e0();
        iVar2 = iVar2 + iVar3 + iVar4;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_5c);
    }
    iVar3 = (**(code **)(*this_ptr + 0xf0))();
LAB_00ad9c91:
    iVar3 = iVar3 + iVar2;
    break;
  case 0xe:
    iVar2 = (**(code **)(*this_ptr + 0x108))(this,&local_34);
    if (local_34 != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad99e0();
        iVar2 = iVar2 + iVar3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_34);
    }
    iVar3 = (**(code **)(*this_ptr + 0x110))();
    goto LAB_00ad9bd2;
  case 0xf:
    iVar2 = (**(code **)(*this_ptr + 0xf8))(this,&local_34);
    if (local_34 != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad99e0();
        iVar2 = iVar2 + iVar3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_34);
    }
    iVar3 = (**(code **)(*this_ptr + 0x100))();
LAB_00ad9bd2:
    iVar3 = iVar3 + iVar2;
  }
  *(int *)(this_ptr + 3) = (int)this_ptr[3] + -1;
  return iVar3;
}



// ============================================================
// 00ade1d0
// ============================================================
// Function: TSocket_write_partial
// Address: 00ade1d0
// Size: 760 bytes
// Class: TSocket
// String references:
//   "TSocket::write_partial() send() "

ssize_t TSocket_write_partial(ulong param_1,string *param_2,size_t param_3,int param_4)

{
  uint uVar1;
  uint64_t uVar2;
  ssize_t sVar3;
  void*puVar4;
  int *piVar5;
  uint *puVar6;
  ulong uVar7;
  void *pvVar8;
  int64_t this_ptr;
  uint32_t uVar9;
  byte local_50;
  byte local_38;
  undefined6 uStack_37;
  uint8_t uStack_31;
  uint8_t uStack_30;
  undefined6 uStack_2f;
  uint8_t uStack_29;
  void*local_28;
  
  if (*(int *)(this_ptr + 0x40) == -1) {
    puVar4 = (void*)___cxa_allocate_exception();
    local_28 = operator_new(param_1);
    local_38 = (byte)g_023d4f10;
    uStack_37 = (undefined6)((uint64_t)g_023d4f10 >> 8);
    uStack_31 = (uint8_t)((uint64_t)g_023d4f10 >> 0x38);
    uStack_30 = (uint8_t)_UNK_023d4f18;
    uStack_2f = (undefined6)((uint64_t)_UNK_023d4f18 >> 8);
    uStack_29 = (uint8_t)((uint64_t)_UNK_023d4f18 >> 0x38);
    *(void*)((int64_t)local_28 + 0x17) = 0x74656b636f73206e;
    local_28[2] = 0x6e65706f2d6e6f6e;
    local_28[1] = 0x206e6f2065746972;
    *local_28 = 0x772064656c6c6143;
    *(void*)((int64_t)local_28 + 0x1f) = 0;
    *puVar4 = &g_02517278;
    uVar9 = std::string::string((string *)0x772064656c6c6143,param_2);
    *puVar4 = &g_0252c498;
    *(void*)(puVar4 + 4) = 1;
                        ___cxa_throw(uVar9,FUN_00953b70);
  }
  param_2 = (string *)((uint64_t)param_2 & 0xffffffff);
  uVar7 = 0x80000;
  sVar3 = _send(0x80000,param_2,param_3,param_4);
  if (sVar3 < 0) {
    piVar5 = ___error();
    sVar3 = 0;
    if ((*piVar5 != 0x23) && (piVar5 = ___error(), *piVar5 != 0x23)) {
      puVar6 = (uint *)___error();
      uVar1 = *puVar6;
      FUN_00adb250();
      puVar4 = (void*)std::string::insert(uVar7,"TSocket::write_partial() send() ");
      local_28 = (void*)puVar4[2];
      pvVar8 = (void *)*puVar4;
      uVar2 = puVar4[1];
      uStack_30 = (uint8_t)uVar2;
      uStack_2f = (undefined6)((uint64_t)uVar2 >> 8);
      uStack_29 = (uint8_t)((uint64_t)uVar2 >> 0x38);
      local_38 = (byte)pvVar8;
      uStack_37 = (undefined6)((uint64_t)pvVar8 >> 8);
      uStack_31 = (uint8_t)((uint64_t)pvVar8 >> 0x38);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      FUN_00ad1610(pvVar8,uVar1);
      if ((local_38 & 1) != 0) {
        operator_delete(pvVar8);
      }
      if ((local_50 & 1) != 0) {
        operator_delete(pvVar8);
      }
      ___cxa_allocate_exception();
      if ((uVar1 < 0x3a) && ((0x240000100000000U >> ((uint64_t)uVar1 & 0x3f) & 1) != 0)) {
        local_38 = 0x1c;
        uStack_37 = 0x286574697277;
        uStack_31 = 0x29;
        uStack_30 = 0x20;
        uStack_2f = 0x2928646e6573;
        uStack_29 = 0;
        uVar9 = FUN_00adac50(uVar1,&local_38);
                            ___cxa_throw(uVar9,FUN_00953b70);
      }
      local_38 = 0x1c;
      uStack_37 = 0x286574697277;
      uStack_31 = 0x29;
      uStack_30 = 0x20;
      uStack_2f = 0x2928646e6573;
      uStack_29 = 0;
      uVar9 = FUN_00adac50(uVar1,&local_38);
                          ___cxa_throw(uVar9,FUN_00953b70);
    }
  }
  else if (sVar3 == 0) {
    puVar4 = (void*)___cxa_allocate_exception();
    local_28 = operator_new(uVar7);
    local_38 = (byte)g_023d4f20;
    uStack_37 = (undefined6)((uint64_t)g_023d4f20 >> 8);
    uStack_31 = (uint8_t)((uint64_t)g_023d4f20 >> 0x38);
    uStack_30 = (uint8_t)_UNK_023d4f28;
    uStack_2f = (undefined6)((uint64_t)_UNK_023d4f28 >> 8);
    uStack_29 = (uint8_t)((uint64_t)_UNK_023d4f28 >> 0x38);
    *(void*)((int64_t)local_28 + 0xf) = 0x2e302064656e7275;
    local_28[1] = 0x7574657220646e65;
    *local_28 = 0x732074656b636f53;
    *(void*)((int64_t)local_28 + 0x17) = 0;
    *puVar4 = &g_02517278;
    uVar9 = std::string::string((string *)0x732074656b636f53,param_2);
    *puVar4 = &g_0252c498;
    *(void*)(puVar4 + 4) = 1;
                        ___cxa_throw(uVar9,FUN_00953b70);
  }
  return sVar3;
}



// ============================================================
// 00ade570
// ============================================================
// Function: FUN_00ade570
// Address: 00ade570
// Size: 530 bytes
// Class: TSocket

void FUN_00ade570(string *param_1,sockaddr *param_2,socklen_t *param_3)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t arg1;
  byte *pbVar4;
  sockaddr local_4ec;
  char *in_stack_fffffffffffffb28;
  socklen_t in_stack_fffffffffffffb30;
  int in_stack_fffffffffffffb38;
  uint8_t local_b8;
  char cStack_b7;
  undefined6 uStack_b6;
  uint64_t local_b0;
  uint64_t local_a8;
  uint32_t local_a0;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(byte *)(arg1 + 0x60) & 1) == 0) {
    if (*(byte *)(arg1 + 0x60) >> 1 != 0) goto LAB_00ade68d;
  }
  else if (*(int64_t *)(arg1 + 0x68) != 0) goto LAB_00ade68d;
  pbVar4 = (byte *)(arg1 + 0x60);
  if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
    if (*(byte *)(arg1 + 0x28) >> 1 != 0) goto LAB_00ade68d;
  }
  else if (*(int64_t *)(arg1 + 0x30) != 0) goto LAB_00ade68d;
  if (*(int *)(arg1 + 0x40) == -1) goto LAB_00ade68d;
  param_1 = (string *)(arg1 + 0xac);
  if (*(char *)(arg1 + 0xad) == '\x1e') {
    local_4ec.sa_len = '\x1c';
    local_4ec.sa_family = '\0';
    local_4ec.sa_data[0] = '\0';
    local_4ec.sa_data[1] = '\0';
  }
  else if (*(char *)(arg1 + 0xad) == '\x02') {
    local_4ec.sa_len = '\x10';
    local_4ec.sa_family = '\0';
    local_4ec.sa_data[0] = '\0';
    local_4ec.sa_data[1] = '\0';
  }
  else {
    local_4ec.sa_len = 0x80;
    local_4ec.sa_family = '\0';
    local_4ec.sa_data[0] = '\0';
    local_4ec.sa_data[1] = '\0';
    param_2 = &local_4ec;
    iVar2 = _getpeername((int)param_1,param_2,param_3);
    if (iVar2 != 0) goto LAB_00ade68d;
    if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
      uVar3 = (uint64_t)(*(byte *)(arg1 + 0x28) >> 1);
    }
    else {
      uVar3 = *(uint64_t *)(arg1 + 0x30);
    }
    if (uVar3 == 0) {
      if (cStack_b7 == '\x1e') {
        if (local_4ec._0_4_ == 0x1c) {
          *(void*)(arg1 + 0xc4) = local_a0;
          *(void*)(arg1 + 0xbc) = local_a8;
          goto LAB_00ade71c;
        }
      }
      else if ((cStack_b7 == '\x02') && (local_4ec._0_4_ == 0x10)) {
LAB_00ade71c:
        *(void*)(arg1 + 0xb4) = local_b0;
        *(uint64_t *)(arg1 + 0xac) = CONCAT62(uStack_b6,CONCAT11(cStack_b7,local_b8));
      }
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(void**)(arg1 + 0x70) = 0;
        *(void*)(arg1 + 0x68) = 0;
      }
      if ((*(byte *)(arg1 + 0x48) & 1) == 0) {
        *(void*)(arg1 + 0x48) = 0;
      }
      else {
        **(void**)(arg1 + 0x58) = 0;
        *(void*)(arg1 + 0x50) = 0;
      }
    }
  }
  param_2 = (sockaddr *)&stack0xfffffffffffffb38;
  param_1 = (string *)((int64_t)&segment_command_000003d8.fileoff + 1);
  _getnameinfo((sockaddr *)((int64_t)&segment_command_000003d8.fileoff + 1),(socklen_t)param_2,
               local_4ec.sa_data + 2,0x20,in_stack_fffffffffffffb28,in_stack_fffffffffffffb30,
               in_stack_fffffffffffffb38);
  std::string::assign((char *)param_1);
  iVar2 = _atoi((char *)param_1);
  *(int *)(arg1 + 0x78) = iVar2;
LAB_00ade68d:
  std::string::string(param_1,(string *)param_2);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 00ade790
// ============================================================
// Function: FUN_00ade790
// Address: 00ade790
// Size: 513 bytes
// Class: TSocket

void FUN_00ade790(string *param_1,sockaddr *param_2,socklen_t *param_3)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t arg1;
  byte *pbVar4;
  sockaddr local_4dc;
  char *in_stack_fffffffffffffb38;
  socklen_t in_stack_fffffffffffffb40;
  int in_stack_fffffffffffffb48;
  uint8_t local_b0;
  char cStack_af;
  undefined6 uStack_ae;
  uint64_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(byte *)(arg1 + 0x48) & 1) == 0) {
    if (*(byte *)(arg1 + 0x48) >> 1 != 0) goto LAB_00ade8ab;
  }
  else if (*(int64_t *)(arg1 + 0x50) != 0) goto LAB_00ade8ab;
  pbVar4 = (byte *)(arg1 + 0x48);
  if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
    if (*(byte *)(arg1 + 0x28) >> 1 != 0) goto LAB_00ade8ab;
  }
  else if (*(int64_t *)(arg1 + 0x30) != 0) goto LAB_00ade8ab;
  if (*(int *)(arg1 + 0x40) == -1) goto LAB_00ade8ab;
  if (*(char *)(arg1 + 0xad) == '\x1e') {
    local_4dc.sa_len = '\x1c';
    local_4dc.sa_family = '\0';
    local_4dc.sa_data[0] = '\0';
    local_4dc.sa_data[1] = '\0';
  }
  else if (*(char *)(arg1 + 0xad) == '\x02') {
    local_4dc.sa_len = '\x10';
    local_4dc.sa_family = '\0';
    local_4dc.sa_data[0] = '\0';
    local_4dc.sa_data[1] = '\0';
  }
  else {
    local_4dc.sa_len = 0x80;
    local_4dc.sa_family = '\0';
    local_4dc.sa_data[0] = '\0';
    local_4dc.sa_data[1] = '\0';
    param_2 = &local_4dc;
    iVar2 = _getpeername((int)param_1,param_2,param_3);
    if (iVar2 != 0) goto LAB_00ade8ab;
    if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
      uVar3 = (uint64_t)(*(byte *)(arg1 + 0x28) >> 1);
    }
    else {
      uVar3 = *(uint64_t *)(arg1 + 0x30);
    }
    if (uVar3 == 0) {
      if (cStack_af == '\x1e') {
        if (local_4dc._0_4_ == 0x1c) {
          *(void*)(arg1 + 0xc4) = local_98;
          *(void*)(arg1 + 0xbc) = local_a0;
          goto LAB_00ade92e;
        }
      }
      else if ((cStack_af == '\x02') && (local_4dc._0_4_ == 0x10)) {
LAB_00ade92e:
        *(void*)(arg1 + 0xb4) = local_a8;
        *(uint64_t *)(arg1 + 0xac) = CONCAT62(uStack_ae,CONCAT11(cStack_af,local_b0));
      }
      if ((*(byte *)(arg1 + 0x60) & 1) == 0) {
        *(void*)(arg1 + 0x60) = 0;
      }
      else {
        **(void**)(arg1 + 0x70) = 0;
        *(void*)(arg1 + 0x68) = 0;
      }
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(void**)(arg1 + 0x58) = 0;
        *(void*)(arg1 + 0x50) = 0;
      }
    }
  }
  param_2 = (sockaddr *)&stack0xfffffffffffffb48;
  param_1 = (string *)((int64_t)&segment_command_000003d8.fileoff + 1);
  _getnameinfo((sockaddr *)((int64_t)&segment_command_000003d8.fileoff + 1),(socklen_t)param_2,
               local_4dc.sa_data + 2,0x20,in_stack_fffffffffffffb38,in_stack_fffffffffffffb40,
               in_stack_fffffffffffffb48);
  std::string::assign((char *)param_1);
LAB_00ade8ab:
  std::string::string(param_1,(string *)param_2);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 00ad9ff0
// ============================================================
// Function: FUN_00ad9ff0
// Address: 00ad9ff0
// Size: 579 bytes
// Class: TSocket

void FUN_00ad9ff0(ulong param_1,string *param_2)

{
  int64_t lVar1;
  uint uVar2;
  void *pvVar3;
  void*puVar4;
  void*puVar5;
  uint uVar6;
  bad_alloc *this;
  string *psVar7;
  bad_alloc *pbVar8;
  uint unaff_ESI;
  int64_t this_ptr;
  bool bVar9;
  uint32_t uVar10;
  
  uVar2 = *(int *)(this_ptr + 0x20) - *(int *)(this_ptr + 0x18);
  if (uVar2 < unaff_ESI) {
    if (*(char *)(this_ptr + 0x38) == '\0') {
      puVar4 = (void*)___cxa_allocate_exception();
      puVar5 = operator_new(param_1);
      puVar5[4] = 0x66754279726f6d65;
      puVar5[3] = 0x4d206c616e726574;
      puVar5[2] = 0x7865206e69206563;
      puVar5[1] = 0x61707320746e6569;
      *puVar5 = 0x6369666675736e49;
      *(void*)((int64_t)puVar5 + 0x27) = 0x72656666;
      *(void*)((int64_t)puVar5 + 0x2b) = 0;
      *puVar4 = &g_02517278;
      uVar10 = std::string::string((string *)0x6369666675736e49,param_2);
      *puVar4 = &g_0252c498;
      *(void*)(puVar4 + 4) = 0;
                          ___cxa_throw(uVar10,FUN_00953b70);
    }
    pbVar8 = (bad_alloc *)(uint64_t)*(uint *)(this_ptr + 0x30);
    uVar6 = *(uint *)(this_ptr + 0x34);
    this = (bad_alloc *)(uint64_t)uVar6;
    psVar7 = (string *)((int64_t)&MACH_HEADER.magic + 1);
    do {
      bVar9 = pbVar8 == (bad_alloc *)0x0;
      pbVar8 = (bad_alloc *)((int64_t)pbVar8 * 2);
      if (bVar9) {
        pbVar8 = (bad_alloc *)((int64_t)&MACH_HEADER.magic + 1);
      }
      if (this < pbVar8) {
        puVar4 = (void*)___cxa_allocate_exception();
        puVar5 = operator_new(uVar6);
        *(void*)((int64_t)puVar5 + 0x15) = 0x776f6c667265766f;
        puVar5[2] = 0x65766f20657a6973;
        puVar5[1] = 0x2072656666756220;
        *puVar5 = 0x6c616e7265746e49;
        *(void*)((int64_t)puVar5 + 0x1d) = 0;
        *puVar4 = &g_02517278;
        uVar10 = std::string::string((string *)0x6c616e7265746e49,psVar7);
        *puVar4 = &g_0252c498;
        *(void*)(puVar4 + 4) = 5;
                            ___cxa_throw(uVar10,FUN_00953b70);
      }
    } while ((uVar2 - *(uint *)(this_ptr + 0x30)) + (int)pbVar8 < unaff_ESI);
    pvVar3 = _realloc(this,1);
    if (pvVar3 == (void *)0x0) {
      ___cxa_allocate_exception();
      uVar10 = std::bad_alloc::bad_alloc(this);
                          ___cxa_throw(uVar10,PTR__bad_alloc_0249c2b0);
    }
    lVar1 = *(int64_t *)(this_ptr + 0x28);
    *(int64_t *)(this_ptr + 8) = (*(int64_t *)(this_ptr + 8) - lVar1) + (int64_t)pvVar3;
    *(int64_t *)(this_ptr + 0x10) = (*(int64_t *)(this_ptr + 0x10) - lVar1) + (int64_t)pvVar3;
    *(int64_t *)(this_ptr + 0x18) = (*(int64_t *)(this_ptr + 0x18) - lVar1) + (int64_t)pvVar3;
    *(bad_alloc **)(this_ptr + 0x20) = (bad_alloc *)((int64_t)pvVar3 + (int64_t)pbVar8);
    *(void **)(this_ptr + 0x28) = pvVar3;
    *(int *)(this_ptr + 0x30) = (int)pbVar8;
  }
  return;
}



// ============================================================
// 00adb600
// ============================================================
// Function: TSocket_peek
// Address: 00adb600
// Size: 615 bytes
// Class: TSocket
// String references:
//   "TSocket::peek() THRIFT_POLL() "
//   "TSocket::peek() recv() "

uint64_t TSocket_peek(uint64_t param_1,uint64_t param_2,size_t param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  void*puVar4;
  int *piVar5;
  uint32_t extraout_var;
  void*puVar6;
  ulong uVar7;
  void *pvVar8;
  int64_t *this_ptr;
  int iVar9;
  uint32_t uVar10;
  void *local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_30;
  
  local_30 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  cVar1 = (**(code **)(*this_ptr + 0x10))();
  if (cVar1 != '\0') {
    puVar4 = (void*)this_ptr[0x10];
    if (puVar4 != (void*)0x0) {
      iVar9 = 0;
      while( true ) {
        local_48 = (uint64_t)CONCAT24(1,(int)this_ptr[8]);
        uStack_40 = (uint64_t)CONCAT24(1,*puVar4);
        iVar2 = _poll((int)this_ptr[8],
                      -(uint)(*(uint *)(this_ptr + 0x13) == 0) | *(uint *)(this_ptr + 0x13));
        piVar5 = ___error();
        if (-1 < iVar2) break;
        iVar2 = *piVar5;
        if ((iVar2 != 4) || ((int)this_ptr[0x15] <= iVar9)) {
          FUN_00ad1610();
          ___cxa_allocate_exception();
          local_60 = (void *)0x6e776f6e6b6e550e;
          local_58 = local_58 & 0xffffffffffffff00;
          uVar10 = FUN_00adac50(iVar2,&local_60);
                              ___cxa_throw(uVar10,FUN_00953b70);
        }
        iVar9 = iVar9 + 1;
        puVar4 = (void*)this_ptr[0x10];
      }
      if ((iVar2 == 0) || ((uStack_40 & 0x1000000000000) != 0)) goto LAB_00adb70a;
    }
    uVar7 = 2;
    sVar3 = _recv(2,(void *)((int64_t)&MACH_HEADER.magic + 1),param_3,param_4);
    if (sVar3 != -1) {
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_30) {
        return CONCAT71((int7)(CONCAT44(extraout_var,sVar3) >> 8),0 < sVar3);
      }
      goto LAB_00adb6f3;
    }
    piVar5 = ___error();
    iVar9 = *piVar5;
    if (iVar9 != 0x36) {
      FUN_00adb250();
      puVar6 = (void*)std::string::insert(uVar7,"TSocket::peek() recv() ");
      local_50 = puVar6[2];
      pvVar8 = (void *)*puVar6;
      local_58 = puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      local_60 = pvVar8;
      FUN_00ad1610(pvVar8,iVar9);
      if (((uint64_t)local_60 & 1) != 0) {
        operator_delete(pvVar8);
      }
      if ((local_48 & 1) != 0) {
        operator_delete(pvVar8);
      }
      ___cxa_allocate_exception();
      local_60 = (void *)0x2928766365720c;
      uVar10 = FUN_00adac50(iVar9,&local_60);
                          ___cxa_throw(uVar10,FUN_00953b70);
    }
  }
LAB_00adb70a:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_30) {
    return 0;
  }
LAB_00adb6f3:
                      ___stack_chk_fail();
}



// ============================================================
// 00ae139a
// ============================================================
// Function: FUN_00ae139a
// Address: 00ae139a
// Size: 5501 bytes
// Class: TSocket

void FUN_00ae139a(void)

{
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  FUN_008e7b6c();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00adb250
// ============================================================
// Function: FUN_00adb250
// Address: 00adb250
// Size: 785 bytes
// Class: TSocket
// String references:
//   "<Host: "
//   " Port: "
//   "<Path: "

uint64_t FUN_00adb250(void)

{
  void**this;
  int iVar1;
  int64_t arg1;
  uint64_t this_ptr;
  byte local_48;
  
  this = &PTR__ostream_02517318;
  std::ios_base::init(&PTR__ostream_02517318);
  std::streambuf::streambuf((streambuf *)this);
  if ((*(byte *)(arg1 + 0x28) & 1) == 0) {
    if (*(byte *)(arg1 + 0x28) >> 1 == 0) {
LAB_00adb364:
      if ((*(byte *)(arg1 + 8) & 1) == 0) {
        if (*(byte *)(arg1 + 8) >> 1 != 0) {
LAB_00adb3ae:
          if (*(int *)(arg1 + 0x20) != 0) {
            FUN_009ad920();
            FUN_009ad920();
            iVar1 = 7;
            FUN_009ad920();
            std::ostream::operator<<((ostream *)this,iVar1);
            FUN_009ad920();
            goto LAB_00adb4de;
          }
        }
      }
      else if (*(int64_t *)(arg1 + 0x10) != 0) goto LAB_00adb3ae;
      FUN_009ad920();
      FUN_00ade570();
      FUN_009ad920();
      if ((local_48 & 1) != 0) {
        operator_delete(this);
      }
      iVar1 = 7;
      FUN_009ad920();
      FUN_00ade570();
      if ((local_48 & 1) != 0) {
        operator_delete(this);
      }
      std::ostream::operator<<((ostream *)this,iVar1);
      FUN_009ad920();
      goto LAB_00adb4de;
    }
  }
  else if (*(int64_t *)(arg1 + 0x30) == 0) goto LAB_00adb364;
  FUN_009ad920();
  FUN_009ad920();
  FUN_009ad920();
LAB_00adb4de:
  FUN_00892260();
  std::streambuf::~streambuf((streambuf *)this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  return this_ptr;
}



// ============================================================
// 00ae2ab5
// ============================================================
// Function: FUN_00ae2ab5
// Address: 00ae2ab5
// Size: 1353 bytes
// Class: TSocket

void FUN_00ae2ab5(void)

{
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  FUN_0090e97c();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00adf7bd
// ============================================================
// Function: FUN_00adf7bd
// Address: 00adf7bd
// Size: 1253 bytes
// Class: TSocket

void FUN_00adf7bd(void)

{
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  FUN_008b4d7c();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00ae0e0c
// ============================================================
// Function: FUN_00ae0e0c
// Address: 00ae0e0c
// Size: 1008 bytes
// Class: TSocket

void FUN_00ae0e0c(void)

{
  FUN_008d742c();
  ___cxa_atexit();
  FUN_008d742c();
  ___cxa_atexit();
  FUN_008d742c();
  ___cxa_atexit();
  FUN_008d742c();
  ___cxa_atexit();
  FUN_008d742c();
  ___cxa_atexit();
  FUN_008d742c();
  ___cxa_atexit();
  FUN_008d742c();
  ___cxa_atexit();
  FUN_008d742c();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00ae0357
// ============================================================
// Function: FUN_00ae0357
// Address: 00ae0357
// Size: 895 bytes
// Class: TSocket

void FUN_00ae0357(void)

{
  FUN_008d3fdc();
  ___cxa_atexit();
  FUN_008d3fdc();
  ___cxa_atexit();
  FUN_008d3fdc();
  ___cxa_atexit();
  FUN_008d3fdc();
  ___cxa_atexit();
  FUN_008d3fdc();
  ___cxa_atexit();
  FUN_008d3fdc();
  ___cxa_atexit();
  FUN_008d3fdc();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00ae0b7f
// ============================================================
// Function: FUN_00ae0b7f
// Address: 00ae0b7f
// Size: 653 bytes
// Class: TSocket

void FUN_00ae0b7f(void)

{
  FUN_008d4b6c();
  ___cxa_atexit();
  FUN_008d4b6c();
  ___cxa_atexit();
  FUN_008d4b6c();
  ___cxa_atexit();
  FUN_008d4b6c();
  ___cxa_atexit();
  FUN_008d4b6c();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00adfca2
// ============================================================
// Function: FUN_00adfca2
// Address: 00adfca2
// Size: 662 bytes
// Class: TSocket

void FUN_00adfca2(void)

{
  FUN_008d32bc();
  ___cxa_atexit();
  FUN_008d32bc();
  ___cxa_atexit();
  FUN_008d32bc();
  ___cxa_atexit();
  FUN_008d32bc();
  ___cxa_atexit();
  FUN_008d32bc();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00adfffe
// ============================================================
// Function: FUN_00adfffe
// Address: 00adfffe
// Size: 662 bytes
// Class: TSocket

void FUN_00adfffe(void)

{
  FUN_008d3d2c();
  ___cxa_atexit();
  FUN_008d3d2c();
  ___cxa_atexit();
  FUN_008d3d2c();
  ___cxa_atexit();
  FUN_008d3d2c();
  ___cxa_atexit();
  FUN_008d3d2c();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00ae3664
// ============================================================
// Function: FUN_00ae3664
// Address: 00ae3664
// Size: 534 bytes
// Class: TSocket

void FUN_00ae3664(void)

{
  FUN_0091ee3c();
  ___cxa_atexit();
  FUN_0091ee3c();
  ___cxa_atexit();
  FUN_0091ee3c();
  ___cxa_atexit();
  FUN_0091ee3c();
  ___cxa_atexit();
  return;
}



// ============================================================
// 00ae3262
// ============================================================
// Function: FUN_00ae3262
// Address: 00ae3262
// Size: 536 bytes
// Class: TSocket

void FUN_00ae3262(void)

{
  FUN_0091de7c();
  ___cxa_atexit();
  FUN_0091de7c();
  ___cxa_atexit();
  FUN_0091de7c();
  ___cxa_atexit();
  FUN_0091de7c();
  ___cxa_atexit();
  return;
}

