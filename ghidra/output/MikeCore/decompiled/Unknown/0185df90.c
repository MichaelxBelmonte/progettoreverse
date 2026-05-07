// Function: FUN_0185df90
// Address: 0185df90
// Size: 1827 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0185dfe2) */
/* WARNING: Removing unreachable block (ram,0x0185dfeb) */

longlong * FUN_0185df90(char param_1,int param_2,longlong *param_3)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int unaff_ESI;
  ulonglong uVar5;
  longlong *unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  longlong local_48;
  char local_40;
  
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  uVar8 = param_2 - unaff_ESI;
  uVar9 = (ulonglong)uVar8;
  if (uVar8 != 0 && unaff_ESI <= param_2) {
    fVar10 = (float)(int)uVar8;
    pfVar1 = *(float **)(local_48 + 0x10);
    if (uVar8 == 0 || param_2 < unaff_ESI) {
      if (param_1 == '\0') {
        pfVar1[8] = 0.0;
        pfVar1[9] = 0.0;
        pfVar1[10] = 0.0;
        pfVar1[0xb] = 0.0;
        pfVar1[4] = 0.0;
        pfVar1[5] = 0.0;
        pfVar1[6] = 0.0;
        pfVar1[7] = 0.0;
        pfVar1[0] = 0.0;
        pfVar1[1] = 0.0;
        pfVar1[2] = 0.0;
        pfVar1[3] = 0.0;
      }
      else {
        fVar10 = 0.0 / fVar10;
        *pfVar1 = fVar10;
        pfVar1[1] = fVar10;
        pfVar1[2] = fVar10;
        pfVar1[3] = fVar10;
        pfVar1[4] = fVar10;
        pfVar1[5] = fVar10;
        pfVar1[6] = fVar10;
        pfVar1[7] = fVar10;
        pfVar1[8] = fVar10;
        pfVar1[9] = fVar10;
        pfVar1[10] = fVar10;
        pfVar1[0xb] = fVar10;
      }
    }
    else {
      uVar4 = (ulonglong)unaff_ESI;
      lVar2 = *(longlong *)(*param_3 + 0x10);
      uVar5 = (ulonglong)param_2;
      uVar7 = ~uVar4 + uVar5;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + **(float **)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10);
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + **(float **)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) +
                   **(float **)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) +
                   **(float **)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) +
                   **(float **)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10);
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      *pfVar1 = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 4);
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 4);
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[1] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 8);
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 8) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 8) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 8) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 8);
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[2] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0xc)
          ;
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0xc)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0xc) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0xc) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0xc);
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[3] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x10
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x10
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x10) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x10)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x10
                               );
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[4] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x14
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x14
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x14) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x14)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x14
                               );
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[5] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x18
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x18
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x18) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x18)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x18
                               );
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[6] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x1c
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x1c
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x1c) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x1c)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x1c
                               );
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[7] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x20
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x20
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x20) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x20)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x20
                               );
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[8] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x24
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x24
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x24) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x24)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x24
                               );
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[9] = fVar11;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x28
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar3 * 8) + 0x10) + 0x28
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x28) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x28)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x28
                               );
          uVar3 = uVar3 + 4;
        } while (uVar5 != uVar3);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[10] = fVar11;
      fVar11 = 0.0;
      uVar9 = uVar9 & 3;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar4 * 8) + 0x10) + 0x2c
                                      );
          uVar4 = uVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(longlong *)(*(longlong *)(lVar2 + uVar4 * 8) + 0x10) + 0x2c
                                      ) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 8 + uVar4 * 8) + 0x10) + 0x2c) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x10 + uVar4 * 8) + 0x10) + 0x2c)
                   + *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18 + uVar4 * 8) + 0x10) + 0x2c
                               );
          uVar4 = uVar4 + 4;
        } while (uVar5 != uVar4);
      }
      if (param_1 != '\0') {
        fVar11 = fVar11 / fVar10;
      }
      pfVar1[0xb] = fVar11;
    }
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


