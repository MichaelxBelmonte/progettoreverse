// Function: FUN_00990540
// Address: 00990540
// Size: 1106 bytes
// Class: Unknown


void FUN_00990540(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int local_34;
  
LAB_0099055b:
  puVar1 = unaff_RSI + -3;
  puVar10 = unaff_RDI;
LAB_00990572:
  while( true ) {
    unaff_RDI = puVar10;
    uVar8 = (longlong)unaff_RSI - (longlong)unaff_RDI;
    if ((ulonglong)(((longlong)uVar8 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00990968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_00990a54 +
                *(int *)(&LAB_00990a54 + ((longlong)uVar8 >> 3) * -0x5555555555555554)))();
      return;
    }
    if ((longlong)uVar8 < 0xa8) {
      FUN_00990ffd(uVar8,param_2);
      return;
    }
    puVar10 = unaff_RDI + (uVar8 / 0x30) * 3;
    if ((longlong)uVar8 < 0x5da9) {
      local_34 = FUN_00990aed(param_2,puVar1);
    }
    else {
      local_34 = FUN_00990e4a((uVar8 / 0xc & 0xfffffffffffffff8) * 3 + (longlong)puVar10,puVar10,
                              puVar1,param_2);
    }
    cVar6 = FUN_00990a6c();
    puVar13 = unaff_RSI + -6;
    puVar14 = puVar1;
    if (cVar6 != '\0') break;
    while (puVar14 = puVar13, unaff_RDI != puVar14) {
      cVar6 = FUN_00990a6c();
      puVar13 = puVar14 + -3;
      if (cVar6 != '\0') goto code_r0x0099063b;
    }
    puVar13 = unaff_RDI + 3;
    cVar6 = FUN_00990a6c();
    if (cVar6 == '\0') {
      if (puVar13 == puVar1) {
        return;
      }
      puVar13 = unaff_RDI + 6;
      while (cVar6 = FUN_00990a6c(), cVar6 == '\0') {
        puVar13 = puVar13 + 3;
        if (unaff_RSI == puVar13) {
          return;
        }
      }
      uVar2 = puVar13[-1];
      uVar3 = puVar13[-3];
      uVar4 = puVar13[-2];
      puVar13[-1] = unaff_RSI[-1];
      uVar5 = *puVar1;
      puVar13[-2] = unaff_RSI[-2];
      puVar13[-3] = uVar5;
      unaff_RSI[-1] = uVar2;
      unaff_RSI[-2] = uVar4;
      *puVar1 = uVar3;
    }
    puVar14 = puVar1;
    if (puVar13 == puVar1) {
      return;
    }
    while( true ) {
      puVar10 = puVar13 + -3;
      do {
        puVar12 = puVar10;
        puVar10 = puVar12 + 3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 == '\0');
      puVar13 = puVar12 + 6;
      do {
        puVar11 = puVar14;
        puVar14 = puVar11 + -3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 != '\0');
      if (puVar14 <= puVar10) break;
      uVar2 = puVar12[5];
      uVar3 = *puVar10;
      uVar4 = puVar12[4];
      puVar12[5] = puVar11[-1];
      uVar5 = *puVar14;
      puVar12[4] = puVar11[-2];
      *puVar10 = uVar5;
      puVar11[-1] = uVar2;
      puVar11[-2] = uVar4;
      *puVar14 = uVar3;
    }
  }
  goto LAB_0099068a;
code_r0x0099063b:
  uVar2 = unaff_RDI[2];
  uVar3 = *unaff_RDI;
  uVar4 = unaff_RDI[1];
  unaff_RDI[2] = puVar14[2];
  uVar5 = *puVar14;
  unaff_RDI[1] = puVar14[1];
  *unaff_RDI = uVar5;
  puVar14[2] = uVar2;
  puVar14[1] = uVar4;
  *puVar14 = uVar3;
  local_34 = local_34 + 1;
LAB_0099068a:
  puVar13 = unaff_RDI + 3;
  puVar12 = puVar13;
  if (puVar13 < puVar14) {
    while( true ) {
      puVar13 = puVar12 + -3;
      do {
        puVar11 = puVar13;
        puVar13 = puVar11 + 3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 != '\0');
      puVar12 = puVar11 + 6;
      do {
        puVar15 = puVar14;
        puVar14 = puVar15 + -3;
        cVar6 = FUN_00990a6c();
      } while (cVar6 == '\0');
      if (puVar14 < puVar13) break;
      uVar2 = puVar11[5];
      uVar3 = *puVar13;
      uVar4 = puVar11[4];
      puVar11[5] = puVar15[-1];
      uVar5 = *puVar14;
      puVar11[4] = puVar15[-2];
      *puVar13 = uVar5;
      puVar15[-1] = uVar2;
      puVar15[-2] = uVar4;
      *puVar14 = uVar3;
      local_34 = local_34 + 1;
      if (puVar10 == puVar13) {
        puVar10 = puVar14;
      }
    }
  }
  if ((puVar13 != puVar10) && (cVar6 = FUN_00990a6c(), cVar6 != '\0')) {
    uVar2 = puVar13[2];
    uVar3 = *puVar13;
    uVar4 = puVar13[1];
    puVar13[2] = puVar10[2];
    uVar5 = *puVar10;
    puVar13[1] = puVar10[1];
    *puVar13 = uVar5;
    puVar10[2] = uVar2;
    puVar10[1] = uVar4;
    *puVar10 = uVar3;
    local_34 = local_34 + 1;
  }
  if (local_34 == 0) {
    cVar6 = FUN_00991105();
    cVar7 = FUN_00991105();
    if (cVar7 != '\0') goto LAB_0099094c;
    puVar10 = puVar13 + 3;
    if (cVar6 != '\0') goto LAB_00990572;
  }
  lVar9 = ((longlong)unaff_RSI - (longlong)puVar13 >> 3) * -0x5555555555555555;
  if (lVar9 <= ((longlong)puVar13 - (longlong)unaff_RDI >> 3) * -0x5555555555555555) {
    FUN_00990540(lVar9,param_2);
    unaff_RSI = puVar13;
    goto LAB_0099055b;
  }
  FUN_00990540(lVar9,param_2);
  puVar10 = puVar13 + 3;
  goto LAB_00990572;
LAB_0099094c:
  unaff_RSI = puVar13;
  if (cVar6 != '\0') {
    return;
  }
  goto LAB_0099055b;
}


