// Function: FUN_017f2dc0
// Address: 017f2dc0
// Size: 509 bytes
// Class: Unknown

void FUN_017f2dc0(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  float *pfVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t local_50;
  char local_48;
  float local_34;
  
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  fVar8 = *(float *)(arg1 + 0xac);
  lVar5 = 1;
  do {
    fVar6 = (float)_logf((float)(int)lVar5 * fVar8 * g_02394204);
    fVar7 = (fVar6 * g_02394208) / g_023908e0 + g_0240d174;
    uVar2 = FUN_00e7d780();
    fVar6 = *(float *)(*(int64_t *)(*param_2 + 0x10) + lVar5 * 4);
    if ((int)uVar2 < 0x65) {
      if (0 < (int)uVar2) {
        fVar7 = fVar7 - (float)(int)uVar2;
        uVar3 = (uint64_t)uVar2;
        lVar1 = *(int64_t *)(local_50 + 0x10);
        *(float *)(lVar1 + uVar3 * 4) =
             (g_02390124 - fVar7) * fVar6 + *(float *)(lVar1 + uVar3 * 4);
        fVar6 = fVar6 * fVar7;
        pfVar4 = (float *)(lVar1 + uVar3 * 4 + 4);
        goto LAB_017f2e67;
      }
    }
    else {
      pfVar4 = (float *)(*(int64_t *)(local_50 + 0x10) + 0x194);
LAB_017f2e67:
      *pfVar4 = fVar6 + *pfVar4;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x800) {
      pfVar4 = *(float **)(local_50 + 0x10);
      local_34 = pfVar4[3];
      *pfVar4 = local_34;
      pfVar4[1] = local_34;
      pfVar4[2] = local_34;
      lVar5 = 1;
      while( true ) {
        fVar8 = (float)_exp2f((float)((int)lVar5 + 0x22) * g_023908e0 * g_023941f4);
        fVar6 = (float)_powf((fVar8 * g_023941f8) / param_1,g_0240dee0);
        fVar8 = g_0240d16c;
        if (g_0240d16c <= fVar6 * local_34) {
          fVar8 = fVar6 * local_34;
        }
        pfVar4[lVar5 + -1] = fVar8;
        if (lVar5 == 0x66) break;
        local_34 = pfVar4[lVar5];
        lVar5 = lVar5 + 1;
      }
      *this_ptr = local_50;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  } while( true );
}

