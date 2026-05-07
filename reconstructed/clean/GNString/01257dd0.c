// Function: FUN_01257dd0
// Address: 01257dd0
// Size: 1688 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01257dd0(int param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint32_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  bool bVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *this_ptr;
  size_t sVar11;
  int *piVar12;
  int64_t local_1068;
  char local_1060;
  int local_1040;
  int local_103c;
  int64_t local_1038;
  char local_1030;
  int64_t *local_838;
  char local_830;
  int64_t local_828;
  uint64_t local_820;
  int local_818;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar3 = FUN_00b33590();
  FUN_00ae9740(uVar3,param_1);
  if (this_ptr[0x1d] == 0) {
    FUN_011ee3f0();
    plVar6 = (int64_t *)this_ptr[0x19];
  }
  else {
    uVar8 = this_ptr[0x16];
    uVar5 = FUN_00b7a710();
    if ((uVar5 | uVar8) >> 0x20 == 0) {
      iVar10 = (int)((uVar8 & 0xffffffff) % (uVar5 & 0xffffffff));
    }
    else {
      iVar10 = (int)((int64_t)uVar8 % (int64_t)uVar5);
    }
    uVar3 = FUN_00b7a700();
    FUN_011eded0(&local_1038,&local_103c,&local_1040,param_1);
    FUN_00b875a0(g_0238fee8,&local_838,uVar3,(int64_t)iVar10);
    if (local_1040 != 0) {
      FUN_00b875a0(g_0238fee8,&local_1038,uVar3,(int64_t)iVar10);
    }
    FUN_011ee2d0();
    plVar6 = (int64_t *)this_ptr[0x19];
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x400))(param_1);
  }
  lVar9 = this_ptr[0x17];
  this_ptr[0x17] = lVar9 + param_1;
  if (g_028ac360 == '\0') {
    FUN_01255e40();
    plVar6 = (int64_t *)this_ptr[0x1a];
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
          _memcpy(plVar6,(void *)((int64_t)local_103c << 2),(size_t)piVar12);
          _memcpy(plVar6,(void *)((int64_t)local_103c << 2),(size_t)piVar12);
          uVar8 = uVar8 + 2;
        } while ((uVar4 & 0xfffffffe) != uVar8);
      }
      if ((uVar4 & 1) != 0) {
        _memcpy(plVar6,(void *)((int64_t)local_103c << 2),(size_t)piVar12);
      }
      if ((int64_t)local_1040 != 0) {
        _memcpy(plVar6,(void *)((int64_t)local_1040 << 2),(size_t)piVar12);
        sVar11 = (size_t)piVar12;
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            lVar9 = 1;
            do {
              _memcpy(plVar6,(void *)((int64_t)local_1040 << 2),(size_t)piVar12);
              _memcpy(plVar6,(void *)((int64_t)local_1040 << 2),(size_t)piVar12);
              sVar11 = (size_t)piVar12;
              lVar1 = lVar9 - ((uint64_t)uVar4 - 1 & 0xfffffffffffffffe);
              lVar9 = lVar9 + 2;
            } while (lVar1 != -1);
          }
          if (((uint64_t)uVar4 - 1 & 1) != 0) {
            _memcpy(plVar6,(void *)((int64_t)local_1040 << 2),sVar11);
          }
        }
      }
    }
    FUN_00dee620();
    plVar6 = (int64_t *)this_ptr[0x1a];
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x400))(param_1);
  }
  cVar2 = FUN_00b1be20();
  if ((cVar2 == '\0') && (FUN_01257cd0(), local_838 != (int64_t *)0x0)) {
    FUN_01257cd0();
    cVar2 = FUN_00b1be30();
    if ((local_1030 != '\0') && (local_1038 != 0)) {
      FUN_00d50b20();
    }
    if (local_830 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      if (this_ptr[0x12] != 0) {
        local_830 = '\0';
        local_838 = (int64_t *)0x0;
        local_820 = 0xffffffff;
        local_818 = 0;
        local_820._4_4_ = 0;
        bVar7 = false;
        local_828 = this_ptr[0x12];
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
          lVar9 = (int64_t)(int)local_820;
          iVar10 = (int)local_820 + 1;
          local_820 = CONCAT44(local_820._4_4_,iVar10);
          if (*(int *)(local_828 + 0xc) <= iVar10) break;
          local_838 = *(int64_t **)(*(int64_t *)(local_828 + 0x10) + 8 + lVar9 * 8);
          cVar2 = (**(code **)(*local_838 + 0x5e8))();
          if (cVar2 != '\0') {
            (**(code **)(*local_838 + 0x640))();
            bVar7 = true;
            (**(code **)(*this_ptr + 0x400))(0,param_2);
          }
        }
        FUN_00540a20();
        if (bVar7) {
          FUN_00d403d0();
          lVar9 = g_02703b08;
          if (g_02703b08 != 0) {
            FUN_00d50b00();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_1068 = 0;
          local_1060 = '\0';
          FUN_00d40470(&local_1068,&stack0xffffffffffffefa8,1,3);
          if ((local_1060 != '\0') && (local_1068 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          if ((local_830 != '\0') && (local_838 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01257cd0();
      plVar6 = local_838;
      FUN_00b1be40();
      if ((local_830 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

