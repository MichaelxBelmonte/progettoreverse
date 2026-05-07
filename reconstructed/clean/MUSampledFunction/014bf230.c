// Function: FUN_014bf230
// Address: 014bf230
// Size: 595 bytes
// Class: MUSampledFunction

float FUN_014bf230(double param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int64_t in_RCX;
  int64_t lVar2;
  int unaff_ESI;
  int unaff_EDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = g_023b26e8;
  if (unaff_EDI < unaff_ESI) {
    fVar8 = 0.0;
    fVar3 = 0.0;
    lVar2 = (int64_t)unaff_EDI;
    do {
      fVar5 = *(float *)(param_3 + lVar2 * 4);
      fVar4 = 0.0;
      if (g_023b4df0 <= fVar5) {
        fVar5 = (float)_powf(fVar5,g_02394298);
        fVar4 = (float)_powf(*(void*)(in_RCX + lVar2 * 4),g_0239426c);
        fVar4 = fVar4 * fVar5;
      }
      fVar5 = g_02411280;
      if (g_02411280 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar4 = (float)_logf(((float)param_1 / *(float *)(param_2 + lVar2 * 4)) * g_02394204);
      fVar8 = fVar8 + fVar4 * g_02394208 * fVar5;
      fVar3 = fVar3 + fVar5;
      lVar2 = lVar2 + 1;
    } while (unaff_ESI != lVar2);
    iVar1 = 0;
    fVar5 = g_023908e0 + fVar8 / fVar3;
    fVar3 = fVar8 / fVar3;
    do {
      fVar8 = fVar3;
      if ((float)((uint)(fVar5 - fVar8) & g_02390140) <= g_02390124) {
        return fVar8;
      }
      fVar9 = 0.0;
      fVar4 = 0.0;
      lVar2 = (int64_t)unaff_EDI;
      do {
        fVar3 = *(float *)(param_3 + lVar2 * 4);
        fVar6 = (float)_logf(((float)param_1 / *(float *)(param_2 + lVar2 * 4)) * g_02394204);
        fVar6 = fVar6 * g_02394208;
        fVar7 = (float)((uint)(fVar8 - fVar6) & g_02390140) / g_0241eeb0 + g_02390124;
        fVar5 = 0.0;
        if (g_023b4df0 <= fVar3) {
          fVar11 = g_023b4df0;
          if (g_023b4df0 <= fVar3) {
            fVar11 = fVar3;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar7) {
            fVar10 = fVar7;
          }
          fVar3 = (float)((uint)fVar3 & g_02390140);
          fVar5 = (float)_powf(*(void*)(in_RCX + lVar2 * 4),g_0239426c);
          fVar5 = fVar5 * fVar11 * fVar11 * fVar3 * fVar10;
        }
        fVar3 = g_02411280;
        if (g_02411280 <= fVar5) {
          fVar3 = fVar5;
        }
        fVar9 = fVar9 + fVar6 * fVar3;
        fVar4 = fVar4 + fVar3;
        lVar2 = lVar2 + 1;
      } while (unaff_ESI != lVar2);
      iVar1 = iVar1 + 1;
      fVar5 = fVar8;
      fVar3 = fVar9 / fVar4;
    } while (iVar1 != 0x16);
    fVar3 = (fVar8 + fVar9 / fVar4) * g_0239011c;
  }
  return fVar3;
}

