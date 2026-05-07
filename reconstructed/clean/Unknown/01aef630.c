// Function: FUN_01aef630
// Address: 01aef630
// Size: 835 bytes
// Class: Unknown

uint64_t FUN_01aef630(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar5;
  undefined7 uVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar8 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t local_78;
  uint64_t uStack_70;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      uVar5 = 0;
      goto LAB_01aef96a;
    }
    FUN_00d50b00();
  }
  uVar5 = 0;
  if ((local_40 != (int64_t *)0x0) && (local_40 != (int64_t *)0x0)) {
    if (*arg1 == 0) {
      local_44 = g_02391078;
    }
    else {
      FUN_01d3abf0();
      local_78 = FUN_01e466c0();
      local_44 = (float)(**(code **)(*this_ptr + 0x920))();
      uStack_70 = extraout_XMM0_Qb;
      if ((*arg1 != 0) && (iVar3 = FUN_01d3b620(), iVar3 == 2)) {
        uVar5 = 1;
        FUN_01aef330();
        goto LAB_01aef94e;
      }
    }
LAB_01aef740:
    do {
      (**(code **)(*this_ptr + 0x658))();
      plVar1 = (int64_t *)*arg1;
      uVar6 = (undefined7)((uint64_t)plVar1 >> 8);
      if (plVar1 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01aef7dc;
          }
LAB_01aef792:
          *(void*)(arg1 + 1) = 1;
          local_38 = '\0';
        }
        lVar2 = *arg1;
      }
      else {
        lVar2 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = (int64_t)local_40;
          if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01aef792;
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_40;
        if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01aef7dc:
        *(void*)(arg1 + 1) = 1;
        lVar2 = *arg1;
      }
      if (lVar2 == 0) {
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71(uVar6,1);
        goto LAB_01aef957;
      }
      iVar3 = FUN_01d3a5a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = CONCAT71(uVar6,1);
      if (iVar3 == 6) goto LAB_01aef94e;
      iVar3 = FUN_01d3a5a0();
      if (iVar3 == 5) {
        if ((local_44 != g_02391078) || (NAN(local_44) || NAN(g_02391078))) {
          FUN_01d3abf0();
          uVar7 = FUN_01e466c0();
          auVar8._0_4_ = (float)uVar7 - (float)local_78;
          auVar8._4_4_ = (float)((uint64_t)uVar7 >> 0x20) - local_78._4_4_;
          auVar8._8_4_ = (float)extraout_XMM0_Qb_00 - (float)uStack_70;
          auVar8._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) - uStack_70._4_4_;
          auVar8 = blendps(auVar8,g_0238ff00,0xd);
          (**(code **)(*local_40 + 0xc60))(auVar8._0_8_,0,local_44);
          FUN_01d3abf0();
          local_78 = FUN_01e466c0();
          uStack_70 = extraout_XMM0_Qb_01;
        }
        else {
          FUN_01d3abf0();
          local_78 = FUN_01e466c0();
          local_44 = (float)(**(code **)(*this_ptr + 0x920))();
          uStack_70 = extraout_XMM0_Qb_02;
        }
        goto LAB_01aef740;
      }
      iVar3 = FUN_01d3a5a0();
    } while (iVar3 != 4);
    FUN_01aefa80();
    uVar4 = FUN_01d3b590();
    if (((uVar4 & 8) == 0) && (uVar4 = FUN_01d3b590(), (uVar4 & 2) != 0)) {
      FUN_01af0e00();
    }
  }
LAB_01aef94e:
  if (local_40 != (int64_t *)0x0) {
LAB_01aef957:
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01aef96a:
  return uVar5 & 0xffffffff;
}

