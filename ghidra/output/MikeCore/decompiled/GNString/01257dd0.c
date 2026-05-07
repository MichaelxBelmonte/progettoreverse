// Function: FUN_01257dd0
// Address: 01257dd0
// Size: 1688 bytes
// Class: GNString


void FUN_01257dd0(int param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong *unaff_RDI;
  size_t sVar11;
  int *piVar12;
  longlong local_1068;
  char local_1060;
  int local_1040;
  int local_103c;
  longlong local_1038;
  char local_1030;
  longlong *local_838;
  char local_830;
  longlong local_828;
  undefined8 local_820;
  int local_818;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar3 = FUN_00b33590();
  FUN_00ae9740(uVar3,param_1);
  if (unaff_RDI[0x1d] == 0) {
    FUN_011ee3f0();
    plVar6 = (longlong *)unaff_RDI[0x19];
  }
  else {
    uVar8 = unaff_RDI[0x16];
    uVar5 = FUN_00b7a710();
    if ((uVar5 | uVar8) >> 0x20 == 0) {
      iVar10 = (int)((uVar8 & 0xffffffff) % (uVar5 & 0xffffffff));
    }
    else {
      iVar10 = (int)((longlong)uVar8 % (longlong)uVar5);
    }
    uVar3 = FUN_00b7a700();
    FUN_011eded0(&local_1038,&local_103c,&local_1040,param_1);
    FUN_00b875a0(DAT_0238fee8,&local_838,uVar3,(longlong)iVar10);
    if (local_1040 != 0) {
      FUN_00b875a0(DAT_0238fee8,&local_1038,uVar3,(longlong)iVar10);
    }
    FUN_011ee2d0();
    plVar6 = (longlong *)unaff_RDI[0x19];
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x400))(param_1);
  }
  lVar9 = unaff_RDI[0x17];
  unaff_RDI[0x17] = lVar9 + param_1;
  if (DAT_028ac360 == '\0') {
    FUN_01255e40();
    plVar6 = (longlong *)unaff_RDI[0x1a];
  }
  else {
    uVar4 = FUN_00b33120();
    plVar6 = &local_1038;
    piVar12 = &local_1040;
    FUN_011ee140(plVar6,&local_103c,piVar12,lVar9 - param_1);
    if (0 < (int)uVar4) {
      if (uVar4 != 1) {
        uVar8 = 0;
        do {
          _memcpy(plVar6,(void *)((longlong)local_103c << 2),(size_t)piVar12);
          _memcpy(plVar6,(void *)((longlong)local_103c << 2),(size_t)piVar12);
          uVar8 = uVar8 + 2;
        } while ((uVar4 & 0xfffffffe) != uVar8);
      }
      if ((uVar4 & 1) != 0) {
        _memcpy(plVar6,(void *)((longlong)local_103c << 2),(size_t)piVar12);
      }
      if ((longlong)local_1040 != 0) {
        _memcpy(plVar6,(void *)((longlong)local_1040 << 2),(size_t)piVar12);
        sVar11 = (size_t)piVar12;
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            lVar9 = 1;
            do {
              _memcpy(plVar6,(void *)((longlong)local_1040 << 2),(size_t)piVar12);
              _memcpy(plVar6,(void *)((longlong)local_1040 << 2),(size_t)piVar12);
              sVar11 = (size_t)piVar12;
              lVar1 = lVar9 - ((ulonglong)uVar4 - 1 & 0xfffffffffffffffe);
              lVar9 = lVar9 + 2;
            } while (lVar1 != -1);
          }
          if (((ulonglong)uVar4 - 1 & 1) != 0) {
            _memcpy(plVar6,(void *)((longlong)local_1040 << 2),sVar11);
          }
        }
      }
    }
    FUN_00dee620();
    plVar6 = (longlong *)unaff_RDI[0x1a];
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x400))(param_1);
  }
  cVar2 = FUN_00b1be20();
  if ((cVar2 == '\0') && (FUN_01257cd0(), local_838 != (longlong *)0x0)) {
    FUN_01257cd0();
    cVar2 = FUN_00b1be30();
    if ((local_1030 != '\0') && (local_1038 != 0)) {
      FUN_00d50b20();
    }
    if (local_830 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      if (unaff_RDI[0x12] != 0) {
        local_830 = '\0';
        local_838 = (longlong *)0x0;
        local_820 = 0xffffffff;
        local_818 = 0;
        local_820._4_4_ = 0;
        bVar7 = false;
        local_828 = unaff_RDI[0x12];
        while( true ) {
          if (local_820._4_4_ != 0) {
            if (local_820._4_4_ < 1) {
              iVar10 = -local_820._4_4_;
            }
            else {
              iVar10 = (int)local_820 - local_820._4_4_;
              local_820 = CONCAT44(local_820._4_4_,iVar10);
              FUN_00d23690();
              local_818 = local_818 + local_820._4_4_;
              iVar10 = 0;
            }
            local_820 = CONCAT44(iVar10,(int)local_820);
          }
          lVar9 = (longlong)(int)local_820;
          iVar10 = (int)local_820 + 1;
          local_820 = CONCAT44(local_820._4_4_,iVar10);
          if (*(int *)(local_828 + 0xc) <= iVar10) break;
          local_838 = *(longlong **)(*(longlong *)(local_828 + 0x10) + 8 + lVar9 * 8);
          cVar2 = (**(code **)(*local_838 + 0x5e8))();
          if (cVar2 != '\0') {
            (**(code **)(*local_838 + 0x640))();
            bVar7 = true;
            (**(code **)(*unaff_RDI + 0x400))(0,param_2);
          }
        }
        FUN_00540a20();
        if (bVar7) {
          FUN_00d403d0();
          lVar9 = DAT_02703b08;
          if (DAT_02703b08 != 0) {
            FUN_00d50b00();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_1068 = 0;
          local_1060 = '\0';
          FUN_00d40470(&local_1068,&stack0xffffffffffffefa8,1,3);
          if ((local_1060 != '\0') && (local_1068 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          if ((local_830 != '\0') && (local_838 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01257cd0();
      plVar6 = local_838;
      FUN_00b1be40();
      if ((local_830 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


