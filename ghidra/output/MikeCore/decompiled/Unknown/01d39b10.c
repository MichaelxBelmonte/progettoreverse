// Function: FUN_01d39b10
// Address: 01d39b10
// Size: 562 bytes
// Class: Unknown


void FUN_01d39b10(undefined8 param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  undefined8 in_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float local_38;
  float fStack_34;
  undefined4 uStack_2c;
  undefined1 auVar11 [16];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
  FUN_00d500e0();
  if (unaff_ESI < 4) {
    local_38 = (float)param_1;
    fStack_34 = (float)((ulonglong)param_1 >> 0x20);
    uStack_2c = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
    fVar10 = (float)(int)((double)local_38 + DAT_023942d0);
    auVar11 = ZEXT416((uint)fVar10);
    auVar9._4_4_ = fStack_34;
    auVar9._0_4_ = fStack_34;
    auVar9._8_4_ = uStack_2c;
    auVar9._12_4_ = uStack_2c;
    auVar6._0_4_ = (float)(int)((double)fStack_34 + DAT_023942d0);
    auVar6._4_4_ = (float)(int)auVar9._8_8_;
    auVar6._8_8_ = 0;
    switch(unaff_ESI) {
    case 0:
      auVar7._0_4_ = auVar6._0_4_ - param_2;
      auVar7._4_4_ = auVar6._4_4_;
      auVar7._8_8_ = 0;
      insertps(auVar11,auVar7,0x10);
      FUN_01d39180();
      auVar4._4_4_ = auVar6._4_4_;
      auVar4._0_4_ = auVar6._0_4_ + param_2;
      auVar4._8_8_ = 0;
      auVar9 = insertps(auVar11,auVar4,0x10);
      FUN_01d38830(auVar9._0_8_);
      auVar9 = insertps(ZEXT416((uint)(fVar10 - param_2)),auVar6._0_4_,0x10);
      FUN_01d38830(auVar9._0_8_);
      FUN_01d38830();
      break;
    case 1:
      insertps(ZEXT416((uint)(fVar10 - param_2)),auVar6,0x10);
      FUN_01d39180();
      auVar9 = insertps(ZEXT416((uint)(fVar10 + param_2)),auVar6._0_4_,0x10);
      FUN_01d38830(auVar9._0_8_);
      auVar3._4_4_ = auVar6._4_4_;
      auVar3._0_4_ = auVar6._0_4_ - param_2;
      auVar3._8_8_ = 0;
      auVar9 = insertps(auVar11,auVar3,0x10);
      FUN_01d38830(auVar9._0_8_);
      FUN_01d38830();
      break;
    case 2:
      auVar8._0_4_ = auVar6._0_4_ - param_2;
      auVar8._4_4_ = auVar6._4_4_;
      auVar8._8_8_ = 0;
      insertps(auVar11,auVar8,0x10);
      FUN_01d39180();
      auVar2._4_4_ = auVar6._4_4_;
      auVar2._0_4_ = auVar6._0_4_ + param_2;
      auVar2._8_8_ = 0;
      auVar9 = insertps(auVar11,auVar2,0x10);
      FUN_01d38830(auVar9._0_8_);
      auVar9 = insertps(ZEXT416((uint)(fVar10 + param_2)),auVar6._0_4_,0x10);
      FUN_01d38830(auVar9._0_8_);
      FUN_01d38830();
      break;
    case 3:
      insertps(ZEXT416((uint)(fVar10 - param_2)),auVar6,0x10);
      FUN_01d39180();
      auVar9 = insertps(ZEXT416((uint)(fVar10 + param_2)),auVar6._0_4_,0x10);
      FUN_01d38830(auVar9._0_8_);
      auVar1._4_4_ = auVar6._4_4_;
      auVar1._0_4_ = auVar6._0_4_ + param_2;
      auVar1._8_8_ = 0;
      auVar9 = insertps(auVar11,auVar1,0x10);
      FUN_01d38830(auVar9._0_8_);
      FUN_01d38830();
    }
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


