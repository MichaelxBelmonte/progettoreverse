// Function: FUN_00fd5110
// Address: 00fd5110
// Size: 1567 bytes
// Class: Unknown


void FUN_00fd5110(undefined8 param_1,ulonglong param_2)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint5 uVar4;
  uint6 uVar5;
  uint7 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_2 == 0) {
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = (ulonglong)*unaff_RSI;
    uVar10 = 1;
    if (1 < param_2) {
      uVar1 = CONCAT11(unaff_RSI[1],*unaff_RSI);
      uVar8 = (ulonglong)uVar1;
      uVar10 = 2;
      if (param_2 != 2) {
        uVar2 = CONCAT12(unaff_RSI[2],uVar1);
        uVar8 = (ulonglong)uVar2;
        uVar10 = 3;
        if (3 < param_2) {
          uVar3 = CONCAT13(unaff_RSI[3],uVar2);
          uVar8 = (ulonglong)uVar3;
          uVar10 = 4;
          if (param_2 != 4) {
            uVar4 = CONCAT14(unaff_RSI[4],uVar3);
            uVar8 = (ulonglong)uVar4;
            uVar10 = 5;
            if (5 < param_2) {
              uVar5 = CONCAT15(unaff_RSI[5],uVar4);
              uVar8 = (ulonglong)uVar5;
              uVar10 = 6;
              if (param_2 != 6) {
                uVar6 = CONCAT16(unaff_RSI[6],uVar5);
                uVar8 = (ulonglong)uVar6;
                uVar10 = 7;
                if (7 < param_2) {
                  uVar8 = CONCAT17(unaff_RSI[7],uVar6);
                  uVar10 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  *unaff_RDI = uVar8;
  if (uVar10 < param_2) {
    uVar9 = (ulonglong)unaff_RSI[uVar10];
    uVar8 = uVar10 + 1;
    if (uVar8 < param_2) {
      uVar1 = CONCAT11(unaff_RSI[uVar10 + 1],unaff_RSI[uVar10]);
      uVar9 = (ulonglong)uVar1;
      uVar8 = uVar10 + 2;
      if (uVar8 < param_2) {
        uVar2 = CONCAT12(unaff_RSI[uVar10 + 2],uVar1);
        uVar9 = (ulonglong)uVar2;
        uVar8 = uVar10 + 3;
        if (uVar8 < param_2) {
          uVar3 = CONCAT13(unaff_RSI[uVar10 + 3],uVar2);
          uVar9 = (ulonglong)uVar3;
          uVar8 = uVar10 + 4;
          if (uVar8 < param_2) {
            uVar4 = CONCAT14(unaff_RSI[uVar10 + 4],uVar3);
            uVar9 = (ulonglong)uVar4;
            uVar8 = uVar10 + 5;
            if (uVar8 < param_2) {
              uVar5 = CONCAT15(unaff_RSI[uVar10 + 5],uVar4);
              uVar9 = (ulonglong)uVar5;
              uVar8 = uVar10 + 6;
              if (uVar8 < param_2) {
                uVar6 = CONCAT16(unaff_RSI[uVar10 + 6],uVar5);
                uVar9 = (ulonglong)uVar6;
                uVar8 = uVar10 + 7;
                if (uVar8 < param_2) {
                  uVar8 = uVar10 + 8;
                  unaff_RDI[1] = CONCAT17(unaff_RSI[uVar10 + 7],uVar6);
                  goto joined_r0x00fd52b9;
                }
              }
            }
          }
        }
      }
    }
    unaff_RDI[1] = uVar9;
    if (uVar8 < param_2) goto LAB_00fd52bf;
LAB_00fd539c:
    unaff_RDI[2] = 0;
joined_r0x00fd5482:
    if (param_2 <= uVar8) goto LAB_00fd5488;
LAB_00fd53ab:
    uVar9 = (ulonglong)unaff_RSI[uVar8];
    uVar10 = uVar8 + 1;
    if (param_2 <= uVar10) {
LAB_00fd5564:
      unaff_RDI[3] = uVar9;
      goto joined_r0x00fd5491;
    }
    uVar1 = CONCAT11(unaff_RSI[uVar8 + 1],unaff_RSI[uVar8]);
    uVar9 = (ulonglong)uVar1;
    uVar10 = uVar8 + 2;
    if (param_2 <= uVar10) goto LAB_00fd5564;
    uVar2 = CONCAT12(unaff_RSI[uVar8 + 2],uVar1);
    uVar9 = (ulonglong)uVar2;
    uVar10 = uVar8 + 3;
    if (param_2 <= uVar10) goto LAB_00fd5564;
    uVar3 = CONCAT13(unaff_RSI[uVar8 + 3],uVar2);
    uVar9 = (ulonglong)uVar3;
    uVar10 = uVar8 + 4;
    if (param_2 <= uVar10) goto LAB_00fd5564;
    uVar4 = CONCAT14(unaff_RSI[uVar8 + 4],uVar3);
    uVar9 = (ulonglong)uVar4;
    uVar10 = uVar8 + 5;
    if (param_2 <= uVar10) goto LAB_00fd5564;
    uVar5 = CONCAT15(unaff_RSI[uVar8 + 5],uVar4);
    uVar9 = (ulonglong)uVar5;
    uVar10 = uVar8 + 6;
    if (param_2 <= uVar10) goto LAB_00fd5564;
    uVar6 = CONCAT16(unaff_RSI[uVar8 + 6],uVar5);
    uVar9 = (ulonglong)uVar6;
    uVar10 = uVar8 + 7;
    if (param_2 <= uVar10) goto LAB_00fd5564;
    uVar10 = uVar8 + 8;
    unaff_RDI[3] = CONCAT17(unaff_RSI[uVar8 + 7],uVar6);
    if (uVar10 < param_2) goto LAB_00fd5497;
LAB_00fd5574:
    unaff_RDI[4] = 0;
    uVar8 = uVar10;
  }
  else {
    unaff_RDI[1] = 0;
    uVar8 = uVar10;
joined_r0x00fd52b9:
    if (param_2 <= uVar8) goto LAB_00fd539c;
LAB_00fd52bf:
    uVar9 = (ulonglong)unaff_RSI[uVar8];
    uVar10 = uVar8 + 1;
    if (param_2 <= uVar10) {
LAB_00fd5478:
      unaff_RDI[2] = uVar9;
      uVar8 = uVar10;
      goto joined_r0x00fd5482;
    }
    uVar1 = CONCAT11(unaff_RSI[uVar8 + 1],unaff_RSI[uVar8]);
    uVar9 = (ulonglong)uVar1;
    uVar10 = uVar8 + 2;
    if (param_2 <= uVar10) goto LAB_00fd5478;
    uVar2 = CONCAT12(unaff_RSI[uVar8 + 2],uVar1);
    uVar9 = (ulonglong)uVar2;
    uVar10 = uVar8 + 3;
    if (param_2 <= uVar10) goto LAB_00fd5478;
    uVar3 = CONCAT13(unaff_RSI[uVar8 + 3],uVar2);
    uVar9 = (ulonglong)uVar3;
    uVar10 = uVar8 + 4;
    if (param_2 <= uVar10) goto LAB_00fd5478;
    uVar4 = CONCAT14(unaff_RSI[uVar8 + 4],uVar3);
    uVar9 = (ulonglong)uVar4;
    uVar10 = uVar8 + 5;
    if (param_2 <= uVar10) goto LAB_00fd5478;
    uVar5 = CONCAT15(unaff_RSI[uVar8 + 5],uVar4);
    uVar9 = (ulonglong)uVar5;
    uVar10 = uVar8 + 6;
    if (param_2 <= uVar10) goto LAB_00fd5478;
    uVar6 = CONCAT16(unaff_RSI[uVar8 + 6],uVar5);
    uVar9 = (ulonglong)uVar6;
    uVar10 = uVar8 + 7;
    if (param_2 <= uVar10) goto LAB_00fd5478;
    lVar7 = uVar8 + 7;
    uVar8 = uVar8 + 8;
    unaff_RDI[2] = CONCAT17(unaff_RSI[lVar7],uVar6);
    if (uVar8 < param_2) goto LAB_00fd53ab;
LAB_00fd5488:
    unaff_RDI[3] = 0;
    uVar10 = uVar8;
joined_r0x00fd5491:
    if (param_2 <= uVar10) goto LAB_00fd5574;
LAB_00fd5497:
    uVar9 = (ulonglong)unaff_RSI[uVar10];
    uVar8 = uVar10 + 1;
    if (uVar8 < param_2) {
      uVar1 = CONCAT11(unaff_RSI[uVar10 + 1],unaff_RSI[uVar10]);
      uVar9 = (ulonglong)uVar1;
      uVar8 = uVar10 + 2;
      if (param_2 <= uVar8) goto LAB_00fd5650;
      uVar2 = CONCAT12(unaff_RSI[uVar10 + 2],uVar1);
      uVar9 = (ulonglong)uVar2;
      uVar8 = uVar10 + 3;
      if (param_2 <= uVar8) goto LAB_00fd5650;
      uVar3 = CONCAT13(unaff_RSI[uVar10 + 3],uVar2);
      uVar9 = (ulonglong)uVar3;
      uVar8 = uVar10 + 4;
      if (param_2 <= uVar8) goto LAB_00fd5650;
      uVar4 = CONCAT14(unaff_RSI[uVar10 + 4],uVar3);
      uVar9 = (ulonglong)uVar4;
      uVar8 = uVar10 + 5;
      if (param_2 <= uVar8) goto LAB_00fd5650;
      uVar5 = CONCAT15(unaff_RSI[uVar10 + 5],uVar4);
      uVar9 = (ulonglong)uVar5;
      uVar8 = uVar10 + 6;
      if (param_2 <= uVar8) goto LAB_00fd5650;
      uVar6 = CONCAT16(unaff_RSI[uVar10 + 6],uVar5);
      uVar9 = (ulonglong)uVar6;
      uVar8 = uVar10 + 7;
      if (param_2 <= uVar8) goto LAB_00fd5650;
      unaff_RDI[4] = CONCAT17(unaff_RSI[uVar10 + 7],uVar6);
      uVar8 = uVar10 + 8;
    }
    else {
LAB_00fd5650:
      unaff_RDI[4] = uVar9;
    }
  }
  if (uVar8 < param_2) {
    uVar9 = (ulonglong)unaff_RSI[uVar8];
    uVar10 = uVar8 + 1;
    if (uVar10 < param_2) {
      uVar1 = CONCAT11(unaff_RSI[uVar8 + 1],unaff_RSI[uVar8]);
      uVar9 = (ulonglong)uVar1;
      uVar10 = uVar8 + 2;
      if (uVar10 < param_2) {
        uVar2 = CONCAT12(unaff_RSI[uVar8 + 2],uVar1);
        uVar9 = (ulonglong)uVar2;
        uVar10 = uVar8 + 3;
        if (uVar10 < param_2) {
          uVar3 = CONCAT13(unaff_RSI[uVar8 + 3],uVar2);
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar8 + 4;
          if (uVar10 < param_2) {
            uVar4 = CONCAT14(unaff_RSI[uVar8 + 4],uVar3);
            uVar9 = (ulonglong)uVar4;
            uVar10 = uVar8 + 5;
            if (uVar10 < param_2) {
              uVar5 = CONCAT15(unaff_RSI[uVar8 + 5],uVar4);
              uVar9 = (ulonglong)uVar5;
              uVar10 = uVar8 + 6;
              if (uVar10 < param_2) {
                uVar6 = CONCAT16(unaff_RSI[uVar8 + 6],uVar5);
                uVar9 = (ulonglong)uVar6;
                uVar10 = uVar8 + 7;
                if (uVar10 < param_2) {
                  unaff_RDI[5] = CONCAT17(unaff_RSI[uVar8 + 7],uVar6);
                  uVar10 = uVar8 + 8;
                  goto joined_r0x00fd5669;
                }
              }
            }
          }
        }
      }
    }
    unaff_RDI[5] = uVar9;
  }
  else {
    unaff_RDI[5] = 0;
    uVar10 = uVar8;
  }
joined_r0x00fd5669:
  if (uVar10 < param_2) {
    uVar8 = (ulonglong)unaff_RSI[uVar10];
    if (uVar10 + 1 < param_2) {
      uVar1 = CONCAT11(unaff_RSI[uVar10 + 1],unaff_RSI[uVar10]);
      uVar8 = (ulonglong)uVar1;
      if (uVar10 + 2 < param_2) {
        uVar2 = CONCAT12(unaff_RSI[uVar10 + 2],uVar1);
        uVar8 = (ulonglong)uVar2;
        if (uVar10 + 3 < param_2) {
          uVar3 = CONCAT13(unaff_RSI[uVar10 + 3],uVar2);
          uVar8 = (ulonglong)uVar3;
          if (uVar10 + 4 < param_2) {
            uVar4 = CONCAT14(unaff_RSI[uVar10 + 4],uVar3);
            uVar8 = (ulonglong)uVar4;
            if (uVar10 + 5 < param_2) {
              uVar5 = CONCAT15(unaff_RSI[uVar10 + 5],uVar4);
              uVar8 = (ulonglong)uVar5;
              if (uVar10 + 6 < param_2) {
                uVar6 = CONCAT16(unaff_RSI[uVar10 + 6],uVar5);
                uVar8 = (ulonglong)uVar6;
                if (uVar10 + 7 < param_2) {
                  uVar8 = CONCAT17(unaff_RSI[uVar10 + 7],uVar6);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar8 = 0;
  }
  unaff_RDI[6] = uVar8;
  return;
}


