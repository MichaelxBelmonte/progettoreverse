// Function: FUN_01819c10
// Address: 01819c10
// Size: 974 bytes
// Class: Unknown

int64_t * FUN_01819c10(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  int64_t lVar10;
  int in_ECX;
  uint uVar11;
  int in_EDX;
  int unaff_ESI;
  uint64_t uVar12;
  int iVar13;
  int64_t *this_ptr;
  uint64_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int64_t local_50;
  char local_48;
  int64_t local_38;
  
  iVar8 = 0;
  if (-1 < unaff_ESI) {
    iVar8 = unaff_ESI;
  }
  iVar13 = 4;
  if (iVar8 < 4) {
    iVar13 = iVar8;
  }
  FUN_0181a1a0();
  lVar4 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + (int64_t)(in_EDX % 5 + iVar13 * 5) * 8);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  FUN_0181a1a0();
  lVar5 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + (int64_t)(iVar13 * 5 + in_ECX % 5) * 8);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  fVar15 = g_02411420 / param_2;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  fVar18 = 0.0;
  if (0.0 <= param_1) {
    fVar18 = param_1;
  }
  fVar17 = g_02390124;
  if (fVar18 <= g_02390124) {
    fVar17 = fVar18;
  }
  ___bzero();
  param_2 = g_02390124 / param_2;
  fVar18 = g_02390124 - fVar17;
  local_38 = 0;
  do {
    lVar6 = *(int64_t *)(lVar4 + 0x10);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + local_38 * 8);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    lVar7 = *(int64_t *)(lVar5 + 0x10);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + local_38 * 8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    fVar1 = *(float *)(lVar6 + 0x10);
    fVar2 = *(float *)(lVar7 + 0x10);
    fVar16 = *(float *)(lVar6 + 0x14);
    fVar3 = *(float *)(lVar7 + 0x14);
    iVar8 = FUN_00e7d780((*(float *)(lVar7 + 0xc) * fVar17 + *(float *)(lVar6 + 0xc) * fVar18) *
                         param_2);
    fVar16 = (fVar3 * fVar17 + fVar16 * fVar18) * param_2;
    uVar9 = FUN_00e7d780((fVar16 + fVar16) * param_3);
    if ((int)uVar9 < 0x100) {
      lVar10 = FUN_00e84250();
      if (0 < (int)uVar9) {
        uVar11 = (int)uVar9 / 2;
        goto LAB_01819f2f;
      }
    }
    else {
      lVar10 = FUN_00e83da0();
      uVar11 = uVar9 >> 1;
LAB_01819f2f:
      uVar12 = 0;
      do {
        uVar14 = (iVar8 - uVar11) + uVar12;
        iVar13 = (int)uVar14;
        if ((-1 < iVar13) && (iVar13 < (int)fVar15)) {
          uVar14 = uVar14 & 0xffffffff;
          *(float *)(*(int64_t *)(local_50 + 0x10) + uVar14 * 4) =
               *(float *)(lVar10 + uVar12 * 4) * (fVar1 * fVar18 + fVar2 * fVar17) * param_4 +
               *(float *)(*(int64_t *)(local_50 + 0x10) + uVar14 * 4);
        }
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
      if (0xff < (int)uVar9) {
        FUN_00e83070();
      }
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    local_38 = local_38 + 1;
    if (local_38 == 5) {
      *this_ptr = local_50;
      *(void*)(this_ptr + 1) = 1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
  } while( true );
}

