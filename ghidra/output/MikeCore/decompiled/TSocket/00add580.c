// Function: FUN_00add580
// Address: 00add580
// Size: 2374 bytes
// Class: TSocket
// String references:
//   "TSocket::read() THRIFT_POLL() "
//   "TSocket::read() recv() "


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ssize_t FUN_00add580(ulong param_1,timeval *param_2,size_t param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  timeval *ptVar9;
  timeval *this;
  uint *this_00;
  void *pvVar10;
  longlong unaff_RDI;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int local_88;
  int local_80;
  uint local_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*(int *)(unaff_RDI + 0x40) == -1) {
    puVar7 = (undefined8 *)___cxa_allocate_exception();
    puVar6 = operator_new(param_1);
    uStack_68 = SUB81(puVar6,0);
    uStack_67 = (undefined1)((ulonglong)puVar6 >> 8);
    uStack_66 = (undefined6)((ulonglong)puVar6 >> 0x10);
    local_78 = (uint)_DAT_023d4f50;
    uStack_74 = (undefined4)((ulonglong)_DAT_023d4f50 >> 0x20);
    uStack_70 = (uint)_UNK_023d4f58;
    uStack_6c = (uint)((ulonglong)_UNK_023d4f58 >> 0x20);
    *(undefined8 *)((longlong)puVar6 + 0x16) = 0x74656b636f73206e;
    puVar6[2] = 0x206e65706f2d6e6f;
    puVar6[1] = 0x6e206e6f20646165;
    *puVar6 = 0x722064656c6c6143;
    *(undefined1 *)((longlong)puVar6 + 0x1e) = 0;
    *puVar7 = &DAT_02517278;
    uVar13 = std::string::string((string *)0x722064656c6c6143,(string *)param_2);
    *puVar7 = &DAT_0252c498;
    *(undefined4 *)(puVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar13,FUN_00953b70);
  }
  ptVar9 = (timeval *)((ulonglong)param_2 & 0xffffffff);
  iVar2 = *(int *)(unaff_RDI + 0x98);
  if (iVar2 == 0) {
    uVar11 = 0;
  }
  else {
    iVar12 = 2;
    if (0 < *(int *)(unaff_RDI + 0xa8)) {
      iVar12 = *(int *)(unaff_RDI + 0xa8);
    }
    uVar11 = (iVar2 * 1000) / iVar12;
    param_2 = (timeval *)((longlong)(iVar2 * 1000) % (longlong)iVar12 & 0xffffffff);
  }
  iVar12 = 0;
  this = ptVar9;
  if (uVar11 != 0) {
    do {
      if (iVar2 < 1) {
        local_80 = 0;
        local_88 = 0;
        puVar4 = *(undefined4 **)(unaff_RDI + 0x80);
        if (puVar4 != (undefined4 *)0x0) goto LAB_00add64b;
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
          if (*(int *)(unaff_RDI + 0x98) == 0) goto LAB_00addb8f;
          _gettimeofday((timeval *)&switchD_00add6ed::switchdataD_00addfd4,param_2);
          uVar8 = (int)uStack_50 - local_80;
          this = (timeval *)(ulonglong)uVar8;
          if (uVar11 <= ((int)local_58 - local_88) * 1000000 + uVar8) {
            puVar7 = (undefined8 *)___cxa_allocate_exception();
            puVar6 = operator_new(uVar8);
            uStack_68 = SUB81(puVar6,0);
            uStack_67 = (undefined1)((ulonglong)puVar6 >> 8);
            uStack_66 = (undefined6)((ulonglong)puVar6 >> 0x10);
            local_78 = (uint)_DAT_023d4f00;
            uStack_74 = (undefined4)((ulonglong)_DAT_023d4f00 >> 0x20);
            uStack_70 = (uint)_UNK_023d4f08;
            uStack_6c = (uint)((ulonglong)_UNK_023d4f08 >> 0x20);
            puVar6[2] = 0x74756f2064656d69;
            puVar6[1] = 0x7428204e49414741;
            *puVar6 = 0x455f544649524854;
            *(undefined2 *)(puVar6 + 3) = 0x29;
            *puVar7 = &DAT_02517278;
            uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
            *puVar7 = &DAT_0252c498;
            *(undefined4 *)(puVar7 + 4) = 2;
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(uVar13,FUN_00953b70);
          }
          if (*(int *)(unaff_RDI + 0xa8) <= iVar12) goto LAB_00addc48;
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
          if (*(int *)(unaff_RDI + 0xa8) <= iVar12) goto LAB_00addd01;
        }
      }
      else {
        _gettimeofday(this,param_2);
        puVar4 = *(undefined4 **)(unaff_RDI + 0x80);
        if (puVar4 == (undefined4 *)0x0) goto LAB_00add6aa;
LAB_00add64b:
        this = (timeval *)(ulonglong)*(uint *)(unaff_RDI + 0x40);
        local_58._0_6_ = CONCAT24(1,*(uint *)(unaff_RDI + 0x40));
        local_58 = (ulonglong)(uint6)local_58;
        uStack_50._0_6_ = CONCAT24(1,*puVar4);
        uStack_50 = (ulonglong)(uint6)uStack_50;
        param_2 = (timeval *)
                  (ulonglong)
                  (-(uint)(*(uint *)(unaff_RDI + 0x98) == 0) | *(uint *)(unaff_RDI + 0x98));
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
        if (*(int *)(unaff_RDI + 0xa8) <= iVar12) goto LAB_00add8f6;
      }
      iVar12 = iVar12 + 1;
      iVar2 = *(int *)(unaff_RDI + 0x98);
    } while( true );
  }
  do {
    if (iVar2 < 1) {
      puVar4 = *(undefined4 **)(unaff_RDI + 0x80);
      if (puVar4 != (undefined4 *)0x0) goto LAB_00add7eb;
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
        if (*(int *)(unaff_RDI + 0x98) == 0) {
LAB_00addb8f:
          uVar8 = (ulong)this_00;
          puVar7 = (undefined8 *)___cxa_allocate_exception();
          puVar6 = operator_new(uVar8);
          uStack_68 = SUB81(puVar6,0);
          uStack_67 = (undefined1)((ulonglong)puVar6 >> 8);
          uStack_66 = (undefined6)((ulonglong)puVar6 >> 0x10);
          local_78 = (uint)_DAT_023d4f30;
          uStack_74 = (undefined4)((ulonglong)_DAT_023d4f30 >> 0x20);
          uStack_70 = (uint)_UNK_023d4f38;
          uStack_6c = (uint)((ulonglong)_UNK_023d4f38 >> 0x20);
          *(undefined8 *)((longlong)puVar6 + 0x1d) = 0x2973656372756f73;
          puVar6[3] = 0x756f73657220656c;
          puVar6[2] = 0x62616c696176616e;
          puVar6[1] = 0x7528204e49414741;
          *puVar6 = 0x455f544649524854;
          *(undefined1 *)((longlong)puVar6 + 0x25) = 0;
          *puVar7 = &DAT_02517278;
          uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
          *puVar7 = &DAT_0252c498;
          *(undefined4 *)(puVar7 + 4) = 2;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar13,FUN_00953b70);
        }
        _gettimeofday(this,param_2);
        if (*(int *)(unaff_RDI + 0xa8) <= iVar12) {
LAB_00addc48:
          uVar8 = (ulong)this;
          puVar7 = (undefined8 *)___cxa_allocate_exception();
          puVar6 = operator_new(uVar8);
          uStack_68 = SUB81(puVar6,0);
          uStack_67 = (undefined1)((ulonglong)puVar6 >> 8);
          uStack_66 = (undefined6)((ulonglong)puVar6 >> 0x10);
          local_78 = (uint)_DAT_023d4f30;
          uStack_74 = (undefined4)((ulonglong)_DAT_023d4f30 >> 0x20);
          uStack_70 = (uint)_UNK_023d4f38;
          uStack_6c = (uint)((ulonglong)_UNK_023d4f38 >> 0x20);
          *(undefined8 *)((longlong)puVar6 + 0x1d) = 0x2973656372756f73;
          puVar6[3] = 0x756f73657220656c;
          puVar6[2] = 0x62616c696176616e;
          puVar6[1] = 0x7528204e49414741;
          *puVar6 = 0x455f544649524854;
          *(undefined1 *)((longlong)puVar6 + 0x25) = 0;
          *puVar7 = &DAT_02517278;
          uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
          *puVar7 = &DAT_0252c498;
          *(undefined4 *)(puVar7 + 4) = 2;
                    /* WARNING: Subroutine does not return */
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
        puVar7 = (undefined8 *)___cxa_allocate_exception();
        local_78 = 0x5248541e;
        uStack_74 = 0x5f544649;
        uStack_70 = 0x544f4e45;
        uStack_6c = 0x4e4e4f43;
        uStack_68 = 0;
        *puVar7 = &DAT_02517278;
        uVar13 = std::string::string((string *)this_00,(string *)param_2);
        *puVar7 = &DAT_0252c498;
        *(undefined4 *)(puVar7 + 4) = 1;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar13,FUN_00953b70);
      case 0x3c:
switchD_00add886_caseD_3c:
        puVar7 = (undefined8 *)___cxa_allocate_exception();
        local_78 = 0x52485420;
        uStack_74 = 0x5f544649;
        uStack_70 = 0x4d495445;
        uStack_6c = 0x554f4445;
        uStack_68 = 0x54;
        uStack_67 = 0;
        *puVar7 = &DAT_02517278;
        uVar13 = std::string::string((string *)this_00,(string *)param_2);
        *puVar7 = &DAT_0252c498;
        *(undefined4 *)(puVar7 + 4) = 2;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar13,FUN_00953b70);
      default:
        if (iVar2 != 4) goto switchD_00add886_caseD_24;
        if (*(int *)(unaff_RDI + 0xa8) <= iVar12) {
LAB_00addd01:
          iVar2 = 4;
          this_00 = (uint *)this;
switchD_00add886_caseD_24:
          uVar8 = (ulong)this_00;
          FUN_00adb250();
          puVar7 = (undefined8 *)std::string::insert(uVar8,"TSocket::read() recv() ");
          uVar1 = puVar7[2];
          uStack_68 = (undefined1)uVar1;
          uStack_67 = (undefined1)((ulonglong)uVar1 >> 8);
          uStack_66 = (undefined6)((ulonglong)uVar1 >> 0x10);
          pvVar10 = (void *)*puVar7;
          uStack_70 = (uint)puVar7[1];
          uStack_6c = (uint)((ulonglong)puVar7[1] >> 0x20);
          local_78 = (uint)pvVar10;
          uStack_74 = (undefined4)((ulonglong)pvVar10 >> 0x20);
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
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar13,FUN_00953b70);
        }
      }
    }
    else {
      _gettimeofday(this,param_2);
      puVar4 = *(undefined4 **)(unaff_RDI + 0x80);
      if (puVar4 == (undefined4 *)0x0) goto LAB_00add84a;
LAB_00add7eb:
      this = (timeval *)(ulonglong)*(uint *)(unaff_RDI + 0x40);
      local_58._0_6_ = CONCAT24(1,*(uint *)(unaff_RDI + 0x40));
      local_58 = (ulonglong)(uint6)local_58;
      uStack_50._0_6_ = CONCAT24(1,*puVar4);
      uStack_50 = (ulonglong)(uint6)uStack_50;
      param_2 = (timeval *)
                (ulonglong)(-(uint)(*(uint *)(unaff_RDI + 0x98) == 0) | *(uint *)(unaff_RDI + 0x98))
      ;
      iVar2 = _poll();
      piVar5 = ___error();
      if (-1 < iVar2) {
        if (iVar2 == 0) {
LAB_00adda7f:
          uVar8 = (ulong)this;
          puVar7 = (undefined8 *)___cxa_allocate_exception();
          puVar6 = operator_new(uVar8);
          uStack_68 = SUB81(puVar6,0);
          uStack_67 = (undefined1)((ulonglong)puVar6 >> 8);
          uStack_66 = (undefined6)((ulonglong)puVar6 >> 0x10);
          local_78 = (uint)_DAT_023d4f00;
          uStack_74 = (undefined4)((ulonglong)_DAT_023d4f00 >> 0x20);
          uStack_70 = (uint)_UNK_023d4f08;
          uStack_6c = (uint)((ulonglong)_UNK_023d4f08 >> 0x20);
          puVar6[2] = 0x74756f2064656d69;
          puVar6[1] = 0x7428204e49414741;
          *puVar6 = 0x455f544649524854;
          *(undefined2 *)(puVar6 + 3) = 0x29;
          *puVar7 = &DAT_02517278;
          uVar13 = std::string::string((string *)0x455f544649524854,(string *)param_2);
          *puVar7 = &DAT_0252c498;
          *(undefined4 *)(puVar7 + 4) = 2;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar13,FUN_00953b70);
        }
        if ((uStack_50 & 0x1000000000000) != 0) {
LAB_00addb1e:
          puVar7 = (undefined8 *)___cxa_allocate_exception();
          local_78 = 0x746e4916;
          uStack_74 = 0x75727265;
          uStack_70 = 0x64657470;
          uStack_6c = uStack_6c & 0xffffff00;
          *puVar7 = &DAT_02517278;
          uVar13 = std::string::string((string *)this,(string *)param_2);
          *puVar7 = &DAT_0252c498;
          *(undefined4 *)(puVar7 + 4) = 4;
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar13,FUN_00953b70);
        }
        goto LAB_00add84a;
      }
      iVar2 = *piVar5;
      if (iVar2 != 4) goto LAB_00add8fc;
      if (*(int *)(unaff_RDI + 0xa8) <= iVar12) break;
    }
    iVar12 = iVar12 + 1;
    iVar2 = *(int *)(unaff_RDI + 0x98);
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
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar13,FUN_00953b70);
switchD_00add886_caseD_36:
  sVar3 = 0;
LAB_00add969:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


