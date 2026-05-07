// Function: FUN_016cb280
// Address: 016cb280
// Size: 757 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_016cb280(double param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  char cVar9;
  void *pvVar10;
  pthread_key_t in_ECX;
  pthread_key_t pVar11;
  ulonglong *puVar13;
  undefined4 unaff_ESI;
  undefined4 *puVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  double dVar19;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  double local_58;
  ulonglong local_50;
  char local_48;
  double local_40;
  ulonglong local_38;
  undefined4 *puVar12;
  
  local_60 = 0xffffffff;
  puVar14 = &local_60;
  if (param_2 != (undefined4 *)0x0) {
    puVar14 = param_2;
  }
  local_58 = param_1;
  local_40 = param_1;
  FUN_00e7bcc0();
  FUN_00e7cd00(local_58);
  pvVar10 = _pthread_getspecific(in_ECX);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar12 = puVar14;
  local_38 = FUN_0165e220(puVar14,1);
  pVar11 = (pthread_key_t)puVar12;
  if (((local_38 >> 0x20 != 0) && (!NAN(local_40))) && (cVar9 = FUN_00e7c790(), cVar9 != '\0')) {
    return local_38;
  }
  uVar8 = local_38;
  pvVar10 = _pthread_getspecific(pVar11);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165c940(0,uVar8,0,puVar14);
  uVar8 = local_50;
  if (((local_48 == '\0') && (local_50 != 0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != 0)))) {
    FUN_00d50b20();
  }
  local_5c = FUN_0123ffa0();
  local_50 = local_38;
  FUN_00e7c260();
  local_68 = local_50;
  if ((!NAN(local_40)) && (local_50 >> 0x20 != 0)) {
    cVar9 = FUN_00e7c720();
    puVar13 = &local_68;
    if (cVar9 == '\0') goto LAB_016cb553;
  }
  local_58 = (double)FUN_00e7c860();
  dVar15 = (double)FUN_00e7c860();
  dVar19 = local_40;
  dVar16 = (double)FUN_00e7c860();
  dVar15 = local_58 - dVar15;
  dVar19 = dVar19 - dVar16;
  if ((dVar15 != DAT_0238fee8) || (NAN(dVar15) || NAN(DAT_0238fee8))) {
    dVar19 = dVar19 / dVar15;
    switch(unaff_ESI) {
    case 2:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar19;
      auVar17 = roundsd(ZEXT816(0),auVar4,10);
      dVar15 = dVar15 * auVar17._0_8_;
      break;
    case 3:
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar19;
      auVar17 = roundsd(ZEXT816(0),auVar3,0xb);
      dVar15 = dVar15 * auVar17._0_8_;
      break;
    case 4:
      dVar19 = dVar19 + DAT_023942d0;
    case 1:
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar19;
      auVar17 = roundsd(ZEXT816(0),auVar2,9);
      dVar15 = dVar15 * auVar17._0_8_;
      break;
    default:
      auVar17._0_8_ = (double)(_DAT_023945b0 & (ulonglong)dVar19 | _DAT_023945c0) + dVar19;
      auVar17._8_8_ = _UNK_023945c8;
      auVar17 = roundsd(auVar17,auVar17,0xb);
      dVar15 = dVar15 * auVar17._0_8_;
    }
  }
  else {
    switch(unaff_ESI) {
    case 2:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar19;
      auVar17 = roundsd(in_XMM1,auVar7,10);
      dVar15 = auVar17._0_8_;
      break;
    case 3:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar19;
      auVar17 = roundsd(in_XMM1,auVar6,0xb);
      dVar15 = auVar17._0_8_;
      break;
    case 4:
      dVar19 = dVar19 + DAT_023942d0;
    case 1:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar19;
      auVar17 = roundsd(in_XMM1,auVar5,9);
      dVar15 = auVar17._0_8_;
      break;
    default:
      auVar18._0_8_ = (double)(_DAT_023945b0 & (ulonglong)dVar19 | _DAT_023945c0) + dVar19;
      auVar18._8_8_ = _UNK_023945c8;
      auVar17 = roundsd(in_XMM1,auVar18,0xb);
      dVar15 = auVar17._0_8_;
    }
  }
  puVar13 = &local_38;
  if (dVar15 != 0.0) {
    puVar13 = &local_68;
  }
  if (NAN(dVar15)) {
    puVar13 = &local_68;
  }
LAB_016cb553:
  uVar1 = *puVar13;
  if (uVar8 != 0) {
    FUN_00d50b20();
  }
  return uVar1;
}


