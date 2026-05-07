// Function: FUN_01aef630
// Address: 01aef630
// Size: 835 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01aef940) */
/* WARNING: Removing unreachable block (ram,0x01aef949) */
/* WARNING: Removing unreachable block (ram,0x01aef71a) */
/* WARNING: Removing unreachable block (ram,0x01aef727) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01aef630(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar5;
  undefined7 uVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_44;
  longlong *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      uVar5 = 0;
      goto LAB_01aef96a;
    }
    FUN_00d50b00();
  }
  uVar5 = 0;
  if ((local_40 != (longlong *)0x0) && (local_40 != (longlong *)0x0)) {
    if (*unaff_RSI == 0) {
      local_44 = DAT_02391078;
    }
    else {
      FUN_01d3abf0();
      local_78 = FUN_01e466c0();
      local_44 = (float)(**(code **)(*unaff_RDI + 0x920))();
      uStack_70 = extraout_XMM0_Qb;
      if ((*unaff_RSI != 0) && (iVar3 = FUN_01d3b620(), iVar3 == 2)) {
        uVar5 = 1;
        FUN_01aef330();
        goto LAB_01aef94e;
      }
    }
LAB_01aef740:
    do {
      (**(code **)(*unaff_RDI + 0x658))();
      plVar1 = (longlong *)*unaff_RSI;
      uVar6 = (undefined7)((ulonglong)plVar1 >> 8);
      if (plVar1 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01aef7dc;
          }
LAB_01aef792:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_38 = '\0';
        }
        lVar2 = *unaff_RSI;
      }
      else {
        lVar2 = unaff_RSI[1];
        if (local_38 != '\0') {
          *unaff_RSI = (longlong)local_40;
          if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01aef792;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01aef7dc:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar2 = *unaff_RSI;
      }
      if (lVar2 == 0) {
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar5 = CONCAT71(uVar6,1);
        goto LAB_01aef957;
      }
      iVar3 = FUN_01d3a5a0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = CONCAT71(uVar6,1);
      if (iVar3 == 6) goto LAB_01aef94e;
      iVar3 = FUN_01d3a5a0();
      if (iVar3 == 5) {
        if ((local_44 != DAT_02391078) || (NAN(local_44) || NAN(DAT_02391078))) {
          FUN_01d3abf0();
          uVar7 = FUN_01e466c0();
          auVar8._0_4_ = (float)uVar7 - (float)local_78;
          auVar8._4_4_ = (float)((ulonglong)uVar7 >> 0x20) - local_78._4_4_;
          auVar8._8_4_ = (float)extraout_XMM0_Qb_00 - (float)uStack_70;
          auVar8._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) - uStack_70._4_4_;
          auVar8 = blendps(auVar8,_DAT_0238ff00,0xd);
          (**(code **)(*local_40 + 0xc60))(auVar8._0_8_,0,local_44);
          FUN_01d3abf0();
          local_78 = FUN_01e466c0();
          uStack_70 = extraout_XMM0_Qb_01;
        }
        else {
          FUN_01d3abf0();
          local_78 = FUN_01e466c0();
          local_44 = (float)(**(code **)(*unaff_RDI + 0x920))();
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
  if (local_40 != (longlong *)0x0) {
LAB_01aef957:
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01aef96a:
  return uVar5 & 0xffffffff;
}


