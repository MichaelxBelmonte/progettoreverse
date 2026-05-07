// Function: FUN_00adb8e0
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00adb8e0(ulong param_1,undefined8 param_2,int param_3,void *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulonglong uVar11;
  void *pvVar12;
  string *psVar13;
  string *psVar14;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  socklen_t sVar15;
  undefined4 uVar16;
  undefined4 local_d0;
  int local_cc;
  byte local_c8;
  undefined7 uStackY_c7;
  undefined1 uStackY_c0;
  undefined7 uStackY_bf;
  undefined1 in_stack_ffffffffffffff48;
  undefined1 in_stack_ffffffffffffff49;
  undefined2 in_stack_ffffffffffffff4a;
  undefined4 in_stack_ffffffffffffff4c;
  byte local_a8;
  undefined1 uStack_a7;
  char cStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  cVar3 = (**(code **)(*unaff_RDI + 0x10))();
  if (cVar3 != '\0') goto LAB_00adbe58;
  if ((*(byte *)(unaff_RDI + 5) & 1) == 0) {
    if (*(byte *)(unaff_RDI + 5) >> 1 == 0) goto LAB_00adbb7a;
LAB_00adb92f:
    iVar4 = _socket(param_1,0,param_3);
    *(int *)(unaff_RDI + 8) = iVar4;
  }
  else {
    if (unaff_RDI[6] != 0) goto LAB_00adb92f;
LAB_00adbb7a:
    iVar4 = _socket(param_1,*(int *)(unaff_RSI + 0xc),param_3);
    *(int *)(unaff_RDI + 8) = iVar4;
  }
  if (iVar4 == -1) {
    piVar6 = ___error();
    iVar4 = *piVar6;
    FUN_00adb250();
    puVar7 = (undefined8 *)std::string::insert(param_1,"TSocket::open() socket() ");
    uVar2 = puVar7[2];
    uStack_98 = (undefined1)uVar2;
    uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
    uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
    uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
    uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
    uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
    uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
    pvVar12 = (void *)*puVar7;
    uVar2 = puVar7[1];
    uStack_a0 = (undefined1)uVar2;
    uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
    uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
    uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
    uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
    uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
    local_a8 = (byte)pvVar12;
    uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
    cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
    uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
    uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar16,FUN_00953b70);
  }
  uVar5 = *(uint *)((longlong)unaff_RDI + 0x94);
  if (0 < (int)uVar5) {
    uVar11 = (ulonglong)uVar5 / 1000;
    local_a8 = (byte)uVar11;
    uStack_a7 = (undefined1)(uVar11 >> 8);
    cStack_a6 = (char)(uVar11 >> 0x10);
    uStack_a5 = 0;
    uStack_a4 = 0;
    iVar4 = (uVar5 % 1000) * 1000;
    uStack_a0 = (undefined1)iVar4;
    uStack_9f = (undefined1)((uint)iVar4 >> 8);
    uStack_9e = (undefined2)((uint)iVar4 >> 0x10);
    iVar4 = _setsockopt((int)&local_a8,0x1005,0x10,param_4,
                        CONCAT22(in_stack_ffffffffffffff4a,
                                 CONCAT11(in_stack_ffffffffffffff49,in_stack_ffffffffffffff48)));
    if (iVar4 == -1) {
      ___error();
      FUN_00ad1610();
    }
    *(uint *)((longlong)unaff_RDI + 0x94) = uVar5;
  }
  uVar5 = *(uint *)(unaff_RDI + 0x13);
  if (0 < (int)uVar5) {
    if ((int)unaff_RDI[8] != -1) {
      uVar11 = (ulonglong)uVar5 / 1000;
      local_a8 = (byte)uVar11;
      uStack_a7 = (undefined1)(uVar11 >> 8);
      cStack_a6 = (char)(uVar11 >> 0x10);
      uStack_a5 = 0;
      uStack_a4 = 0;
      iVar4 = (uVar5 % 1000) * 1000;
      uStack_a0 = (undefined1)iVar4;
      uStack_9f = (undefined1)((uint)iVar4 >> 8);
      uStack_9e = (undefined2)((uint)iVar4 >> 0x10);
      iVar4 = _setsockopt((int)&local_a8,0x1006,0x10,param_4,
                          CONCAT22(in_stack_ffffffffffffff4a,
                                   CONCAT11(in_stack_ffffffffffffff49,in_stack_ffffffffffffff48)));
      if (iVar4 == -1) {
        ___error();
        FUN_00ad1610();
      }
    }
    *(uint *)(unaff_RDI + 0x13) = uVar5;
  }
  if (*(char *)((longlong)unaff_RDI + 0x9c) != '\0') {
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
  if ((int)unaff_RDI[0x12] < 1) {
    iVar4 = _fcntl(uVar10,uVar5 & 0xfffffffb);
    if (iVar4 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      FUN_00adb250();
      puVar7 = (undefined8 *)std::string::insert(uVar10,"TSocket::open() THRIFT_FCNTL ");
      uVar2 = puVar7[2];
      uStack_98 = (undefined1)uVar2;
      uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
      uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (undefined1)uVar2;
      uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
      cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar16,FUN_00953b70);
    }
  }
  else {
    iVar4 = _fcntl(uVar10,uVar5 | 4);
    if (iVar4 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      FUN_00adb250();
      puVar7 = (undefined8 *)std::string::insert(uVar10,"TSocket::open() THRIFT_FCNTL() ");
      uVar2 = puVar7[2];
      uStack_98 = (undefined1)uVar2;
      uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
      uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (undefined1)uVar2;
      uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
      cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar16,FUN_00953b70);
    }
  }
  bVar1 = *(byte *)(unaff_RDI + 5);
  if ((bVar1 & 1) == 0) {
    pvVar12 = (void *)(ulonglong)(bVar1 >> 1);
    if (pvVar12 == (void *)0x0) goto LAB_00adbc59;
LAB_00adbc43:
    if ((bVar1 & 1) == 0) {
      pvVar12 = (void *)(ulonglong)(bVar1 >> 1);
      uVar11 = (ulonglong)(bVar1 >> 1);
    }
    else {
      uVar11 = unaff_RDI[6];
    }
    if (&section_00000068 < (section *)(uVar11 + 1)) {
      puVar8 = (uint *)___error();
      uVar10 = (ulong)pvVar12;
      psVar13 = (string *)(ulonglong)*puVar8;
      FUN_00ad1610();
      puVar7 = (undefined8 *)___cxa_allocate_exception();
      puVar9 = operator_new(uVar10);
      uStack_98 = SUB81(puVar9,0);
      uStack_97 = (undefined1)((ulonglong)puVar9 >> 8);
      uStack_96 = (undefined2)((ulonglong)puVar9 >> 0x10);
      uStack_94 = (undefined1)((ulonglong)puVar9 >> 0x20);
      uStack_93 = (undefined1)((ulonglong)puVar9 >> 0x28);
      uStack_92 = (undefined1)((ulonglong)puVar9 >> 0x30);
      uStack_91 = (undefined1)((ulonglong)puVar9 >> 0x38);
      local_a8 = (byte)_DAT_023d4fd0;
      uStack_a7 = (undefined1)((ulonglong)_DAT_023d4fd0 >> 8);
      cStack_a6 = (char)((ulonglong)_DAT_023d4fd0 >> 0x10);
      uStack_a5 = (undefined1)((ulonglong)_DAT_023d4fd0 >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)_DAT_023d4fd0 >> 0x20);
      uStack_a0 = (undefined1)_UNK_023d4fd8;
      uStack_9f = (undefined1)((ulonglong)_UNK_023d4fd8 >> 8);
      uStack_9e = (undefined2)((ulonglong)_UNK_023d4fd8 >> 0x10);
      uStack_9c = (undefined1)((ulonglong)_UNK_023d4fd8 >> 0x20);
      uStack_9b = (undefined1)((ulonglong)_UNK_023d4fd8 >> 0x28);
      uStack_9a = (undefined2)((ulonglong)_UNK_023d4fd8 >> 0x30);
      puVar9[3] = 0x6e6f6c206f6f7420;
      puVar9[2] = 0x687461702074656b;
      puVar9[1] = 0x636f73206e69616d;
      *puVar9 = 0x6f442078696e5520;
      *(undefined2 *)(puVar9 + 4) = 0x67;
      *puVar7 = &DAT_02517278;
      uVar16 = std::string::string((string *)0x6f442078696e5520,psVar13);
      *puVar7 = &DAT_0252c498;
      *(undefined4 *)(puVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar16,FUN_00953b70);
    }
    uStack_a7 = 1;
    _memcpy(pvVar12,(section *)(uVar11 + 1),sVar15);
    uVar10 = (ulong)pvVar12;
    if (cStack_a6 == '\0') {
      psVar13 = (string *)0xffffff9d;
      FUN_00ad1610();
      puVar7 = (undefined8 *)___cxa_allocate_exception();
      puVar9 = operator_new(uVar10);
      local_c8 = (byte)_DAT_023d4ee0;
      uStackY_c7 = (undefined7)((ulonglong)_DAT_023d4ee0 >> 8);
      uStackY_c0 = (undefined1)_UNK_023d4ee8;
      uStackY_bf = (undefined7)((ulonglong)_UNK_023d4ee8 >> 8);
      puVar9[5] = 0x6f7070757320746f;
      puVar9[4] = 0x6e20687461702074;
      puVar9[3] = 0x656b636f73206e69;
      puVar9[2] = 0x616d6f4420656361;
      puVar9[1] = 0x7073656d614e2074;
      *puVar9 = 0x6361727473624120;
      *(undefined4 *)(puVar9 + 6) = 0x64657472;
      *(undefined1 *)((longlong)puVar9 + 0x34) = 0;
      *puVar7 = &DAT_02517278;
      uVar16 = std::string::string((string *)0x6361727473624120,psVar13);
      *puVar7 = &DAT_0252c498;
      *(undefined4 *)(puVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar16,FUN_00953b70);
    }
    iVar4 = _connect(uVar10,(sockaddr *)(section_00000068.sectname + 2),sVar15);
  }
  else {
    pvVar12 = (void *)unaff_RDI[6];
    if (pvVar12 != (void *)0x0) goto LAB_00adbc43;
LAB_00adbc59:
    uVar10 = 0;
    iVar4 = _connect(0,(sockaddr *)(ulonglong)*(uint *)(unaff_RSI + 0x10),sVar15);
  }
  if (iVar4 != 0) {
    piVar6 = ___error();
    if ((*piVar6 != 0x24) && (piVar6 = ___error(), *piVar6 != 0x23)) {
      piVar6 = ___error();
      iVar4 = *piVar6;
      FUN_00adb250();
      puVar7 = (undefined8 *)std::string::insert(uVar10,"TSocket::open() connect() ");
      uVar2 = puVar7[2];
      uStack_98 = (undefined1)uVar2;
      uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
      uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (undefined1)uVar2;
      uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
      cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar16,FUN_00953b70);
    }
    iVar4 = _poll();
    if (iVar4 < 1) {
      if (iVar4 != 0) {
        piVar6 = ___error();
        iVar4 = *piVar6;
        FUN_00adb250();
        puVar7 = (undefined8 *)std::string::insert(uVar10,"TSocket::open() THRIFT_POLL() ");
        uVar2 = puVar7[2];
        uStack_98 = (undefined1)uVar2;
        uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
        uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
        uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
        uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
        uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
        uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
        pvVar12 = (void *)*puVar7;
        uVar2 = puVar7[1];
        uStack_a0 = (undefined1)uVar2;
        uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
        uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
        uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
        uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
        uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
        local_a8 = (byte)pvVar12;
        uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
        cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
        uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
        uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar16,FUN_00953b70);
      }
      FUN_00adb250();
      puVar7 = (undefined8 *)std::string::insert(uVar10,"TSocket::open() timed out ");
      uVar2 = puVar7[2];
      uStack_98 = (undefined1)uVar2;
      uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
      uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
      psVar13 = (string *)*puVar7;
      psVar14 = (string *)puVar7[1];
      uStack_a0 = SUB81(psVar14,0);
      uStack_9f = (undefined1)((ulonglong)psVar14 >> 8);
      uStack_9e = (undefined2)((ulonglong)psVar14 >> 0x10);
      uStack_9c = (undefined1)((ulonglong)psVar14 >> 0x20);
      uStack_9b = (undefined1)((ulonglong)psVar14 >> 0x28);
      uStack_9a = (undefined2)((ulonglong)psVar14 >> 0x30);
      local_a8 = (byte)psVar13;
      uStack_a7 = (undefined1)((ulonglong)psVar13 >> 8);
      cStack_a6 = (char)((ulonglong)psVar13 >> 0x10);
      uStack_a5 = (undefined1)((ulonglong)psVar13 >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)psVar13 >> 0x20);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      if ((local_c8 & 1) != 0) {
        operator_delete(psVar13);
      }
      (*DAT_02754b00)();
      puVar7 = (undefined8 *)___cxa_allocate_exception();
      local_c8 = 0x20;
      uStackY_c7 = 0x2029286e65706f;
      uStackY_c0 = 0x74;
      uStackY_bf = 0x756f2064656d69;
      *puVar7 = &DAT_02517278;
      uVar16 = std::string::string(psVar13,psVar14);
      *puVar7 = &DAT_0252c498;
      *(undefined4 *)(puVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
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
      puVar7 = (undefined8 *)std::string::insert(uVar10,"TSocket::open() getsockopt() ");
      uVar2 = puVar7[2];
      uStack_98 = (undefined1)uVar2;
      uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
      uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (undefined1)uVar2;
      uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
      cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar16,FUN_00953b70);
    }
    if (local_cc != 0) {
      FUN_00adb250();
      puVar7 = (undefined8 *)
               std::string::insert(uVar10,"TSocket::open() error on socket (after THRIFT_POLL) ");
      uVar2 = puVar7[2];
      uStack_98 = (undefined1)uVar2;
      uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
      uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
      pvVar12 = (void *)*puVar7;
      uVar2 = puVar7[1];
      uStack_a0 = (undefined1)uVar2;
      uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
      uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
      uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
      uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
      local_a8 = (byte)pvVar12;
      uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
      cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
      uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar16,FUN_00953b70);
    }
  }
  iVar4 = _fcntl(uVar10,uVar5);
  if (iVar4 == -1) {
    piVar6 = ___error();
    iVar4 = *piVar6;
    FUN_00adb250();
    puVar7 = (undefined8 *)std::string::insert(uVar10,"TSocket::open() THRIFT_FCNTL ");
    uVar2 = puVar7[2];
    uStack_98 = (undefined1)uVar2;
    uStack_97 = (undefined1)((ulonglong)uVar2 >> 8);
    uStack_96 = (undefined2)((ulonglong)uVar2 >> 0x10);
    uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x20);
    uStack_93 = (undefined1)((ulonglong)uVar2 >> 0x28);
    uStack_92 = (undefined1)((ulonglong)uVar2 >> 0x30);
    uStack_91 = (undefined1)((ulonglong)uVar2 >> 0x38);
    pvVar12 = (void *)*puVar7;
    uVar2 = puVar7[1];
    uStack_a0 = (undefined1)uVar2;
    uStack_9f = (undefined1)((ulonglong)uVar2 >> 8);
    uStack_9e = (undefined2)((ulonglong)uVar2 >> 0x10);
    uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
    uStack_9b = (undefined1)((ulonglong)uVar2 >> 0x28);
    uStack_9a = (undefined2)((ulonglong)uVar2 >> 0x30);
    local_a8 = (byte)pvVar12;
    uStack_a7 = (undefined1)((ulonglong)pvVar12 >> 8);
    cStack_a6 = (char)((ulonglong)pvVar12 >> 0x10);
    uStack_a5 = (undefined1)((ulonglong)pvVar12 >> 0x18);
    uStack_a4 = (undefined4)((ulonglong)pvVar12 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar16,FUN_00953b70);
  }
  bVar1 = *(byte *)(unaff_RDI + 5);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00adbe58;
  }
  else if (unaff_RDI[6] != 0) goto LAB_00adbe58;
  puVar7 = *(undefined8 **)(unaff_RSI + 0x20);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00adbe58;
  }
  else if (unaff_RDI[6] != 0) goto LAB_00adbe58;
  if (*(char *)((longlong)puVar7 + 1) == '\x1e') {
    if (*(int *)(unaff_RSI + 0x10) == 0x1c) {
      *(undefined4 *)((longlong)unaff_RDI + 0xc4) = *(undefined4 *)(puVar7 + 3);
      *(undefined8 *)((longlong)unaff_RDI + 0xbc) = puVar7[2];
      goto LAB_00adbe00;
    }
  }
  else if ((*(char *)((longlong)puVar7 + 1) == '\x02') && (*(int *)(unaff_RSI + 0x10) == 0x10)) {
LAB_00adbe00:
    uVar2 = *puVar7;
    *(undefined8 *)((longlong)unaff_RDI + 0xb4) = puVar7[1];
    *(undefined8 *)((longlong)unaff_RDI + 0xac) = uVar2;
  }
  if ((*(byte *)(unaff_RDI + 0xc) & 1) == 0) {
    *(undefined2 *)(unaff_RDI + 0xc) = 0;
    bVar1 = *(byte *)(unaff_RDI + 9);
  }
  else {
    *(undefined1 *)unaff_RDI[0xe] = 0;
    unaff_RDI[0xd] = 0;
    bVar1 = *(byte *)(unaff_RDI + 9);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined2 *)(unaff_RDI + 9) = 0;
  }
  else {
    *(undefined1 *)unaff_RDI[0xb] = 0;
    unaff_RDI[10] = 0;
  }
LAB_00adbe58:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


