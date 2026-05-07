// Function: FUN_01a81d00
// Address: 01a81d00
// Size: 956 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a81d00(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *unaff_RDI;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_68 [16];
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  uStack_90 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  local_98._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x2e] != 0) {
    uVar9 = FUN_01989f80();
    plVar1 = local_48;
    local_50 = 0;
    local_58 = unaff_RDI[0x2e];
    if (local_58 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0xab0))(uVar9,&local_58);
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      if ((int)unaff_RDI[0x30] == 2) {
        FUN_01989f80();
        plVar2 = local_38;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01259650();
        uVar4 = (**(code **)(*plVar2 + 0x938))();
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        fVar5 = (float)(**(code **)(*plVar1 + 0x4d8))();
        FUN_01e3f820();
        FUN_01989f80();
        fVar6 = (float)(**(code **)(&UNK_00001418 + *local_38))();
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_98._0_4_ = (float)local_98._4_4_ * DAT_0239011c + extraout_XMM0_Db;
        uStack_8c = uStack_90;
        if ((fVar6 != 0.0) || (NAN(fVar6))) {
          FUN_01989f80();
          uVar9 = (**(code **)(*local_38 + 3000))();
          FUN_01989f80();
          fVar6 = (float)(**(code **)(&UNK_00001418 + *local_48))();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_68._0_4_ = (undefined4)uVar9;
          local_68._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          local_68._8_4_ = (undefined4)extraout_XMM0_Qb;
          local_68._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
          fVar6 = (float)local_68._0_4_ * ((DAT_02390124 - fVar6) * _DAT_0241b1f0 + DAT_023908e0);
          local_68._0_4_ = fVar6;
          local_98._0_4_ = (float)local_98._0_4_ + DAT_023b1d84;
        }
        else {
          FUN_01989f80();
          uVar9 = (**(code **)(*local_38 + 3000))();
          local_68._8_8_ = extraout_XMM0_Qb_00;
          local_68._0_8_ = uVar9;
          if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_68._0_4_ = (float)uVar9 * _DAT_0241b1ec;
        }
        fVar7 = (float)(**(code **)(*plVar1 + 0x4d8))();
        (**(code **)(*plVar1 + 0x4d8))();
        uVar8 = (**(code **)(*plVar1 + 0x4d8))();
        auVar10 = roundss(ZEXT416(uVar4),ZEXT416(uVar4),9);
        auVar12._4_4_ = local_68._4_4_;
        auVar12._0_4_ = (float)local_68._0_4_ + DAT_023908ec;
        auVar12._8_4_ = local_68._8_4_;
        auVar12._12_4_ = local_68._12_4_;
        auVar11 = insertps(_DAT_023b1e70,auVar12,0x10);
        auVar10._0_4_ = (auVar10._0_4_ - fVar5) + DAT_02394210 + fVar7;
        auVar12 = roundss(_local_98,_local_98,9);
        auVar13._4_4_ = extraout_XMM0_Db_00;
        auVar13._0_4_ = extraout_XMM0_Db_00;
        auVar13._8_4_ = extraout_XMM0_Dd;
        auVar13._12_4_ = extraout_XMM0_Dd;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ =
             extraout_XMM0_Db_00 +
             ((float)local_68._0_4_ + DAT_023908ec) * DAT_02390118 + auVar12._0_4_;
        auVar12 = insertps(auVar10,auVar14,0x10);
        FUN_00d052e0(auVar12._0_8_,auVar11._0_8_,uVar8,fVar6);
        (**(code **)(*unaff_RDI + 0x4d0))();
      }
      else {
        (**(code **)(*plVar1 + 0x4d8))();
        (**(code **)(*unaff_RDI + 0x4d0))();
      }
      FUN_00d50b20();
    }
  }
  return;
}


