// Function: FUN_0185df90
// Address: 0185df90
// Size: 1827 bytes
// Class: Unknown

int64_t * FUN_0185df90(char param_1,int param_2,int64_t *param_3)

{
  float *pfVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int unaff_ESI;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  int64_t local_48;
  char local_40;
  
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  uVar8 = param_2 - unaff_ESI;
  uVar9 = (uint64_t)uVar8;
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
      uVar4 = (uint64_t)unaff_ESI;
      lVar2 = *(int64_t *)(*param_3 + 0x10);
      uVar5 = (uint64_t)param_2;
      uVar7 = ~uVar4 + uVar5;
      fVar11 = 0.0;
      uVar6 = uVar9 & 3;
      uVar3 = uVar4;
      if ((uVar8 & 3) != 0) {
        do {
          fVar11 = fVar11 + **(float **)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10);
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + **(float **)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) +
                   **(float **)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) +
                   **(float **)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) +
                   **(float **)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10);
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 4);
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 4) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 4) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 4) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 4);
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 8);
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 8) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 8) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 8) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 8);
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0xc)
          ;
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0xc)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0xc) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0xc) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0xc);
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x10
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x10
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x10) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x10)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x10
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x14
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x14
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x14) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x14)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x14
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x18
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x18
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x18) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x18)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x18
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x1c
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x1c
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x1c) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x1c)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x1c
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x20
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x20
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x20) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x20)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x20
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x24
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x24
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x24) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x24)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x24
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x28
                                      );
          uVar3 = uVar3 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar3 * 8) + 0x10) + 0x28
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar3 * 8) + 0x10) + 0x28) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar3 * 8) + 0x10) + 0x28)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar3 * 8) + 0x10) + 0x28
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
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar4 * 8) + 0x10) + 0x2c
                                      );
          uVar4 = uVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (2 < uVar7) {
        do {
          fVar11 = fVar11 + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + uVar4 * 8) + 0x10) + 0x2c
                                      ) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 8 + uVar4 * 8) + 0x10) + 0x2c) +
                   *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10 + uVar4 * 8) + 0x10) + 0x2c)
                   + *(float *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x18 + uVar4 * 8) + 0x10) + 0x2c
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
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

