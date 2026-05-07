// Function: FUN_013fc290
// Address: 013fc290
// Size: 617 bytes
// Class: MUDataPointFunction

void FUN_013fc290(void)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint32_t local_1850;
  int local_184c [5];
  uint8_t local_1838 [2048];
  uint8_t local_1038 [4096];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)((int64_t)this_ptr + 0x39) == '\0') && (this_ptr[2] != -1)) {
    iVar1 = FUN_011edec0();
    lVar3 = FUN_011edcb0();
    lVar5 = this_ptr[3];
    lVar8 = 0;
    if (lVar5 == -1) {
      lVar8 = (int64_t)iVar1;
    }
    lVar8 = lVar3 - lVar8;
    if ((this_ptr[2] < lVar8) && (lVar6 = this_ptr[6], lVar6 < lVar8)) {
      if (this_ptr[9] == 0) {
        FUN_013fb700();
        (**(code **)(*this_ptr + 0x3a8))();
        lVar5 = this_ptr[3];
        lVar6 = this_ptr[6];
      }
      plVar4 = this_ptr + 2;
      if (lVar6 != 0) {
        plVar4 = this_ptr + 6;
      }
      lVar3 = *plVar4;
      lVar6 = lVar8;
      if (lVar5 < lVar8) {
        lVar6 = lVar5;
      }
      if (lVar5 == -1) {
        lVar6 = lVar8;
      }
      iVar7 = (int)lVar6 - (int)lVar3;
      if (0 < iVar7) {
        iVar2 = FUN_011edd80();
        if (iVar2 < iVar7) {
          FUN_011edd80();
          FUN_00b87ec0();
          FUN_011edd80();
        }
        uVar9 = FUN_011ee140(local_1038,&local_1850,local_184c,lVar3);
        uVar9 = FUN_013fc010(uVar9,local_1838);
        uVar9 = FUN_00b87ba0(uVar9,local_1850);
        if (local_184c[0] != 0) {
          uVar9 = FUN_013fc010(uVar9,local_1838);
          FUN_00b87ba0(uVar9,local_184c[0]);
        }
        (**(code **)(*this_ptr + 0x3b0))();
        lVar5 = this_ptr[3];
      }
      if ((lVar5 != -1) && (lVar5 < lVar8)) {
        FUN_00b881a0();
        if (0 < iVar1) {
          FUN_00da6b00(((double)iVar1 / (double)this_ptr[5]) * g_0240d7f8);
        }
        (**(code **)(*this_ptr + 0x3b8))();
      }
      this_ptr[6] = lVar6;
    }
    else if ((lVar5 != -1) && (lVar5 < lVar3)) {
      FUN_00b881a0();
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
                                                (**(code **)(*this_ptr + 0x3b8))();
        return;
      }
      goto LAB_013fc4f4;
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
LAB_013fc4f4:
                      ___stack_chk_fail();
}

