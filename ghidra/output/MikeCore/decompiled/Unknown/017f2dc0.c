// Function: FUN_017f2dc0
// Address: 017f2dc0
// Size: 509 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x017f2e0a) */
/* WARNING: Removing unreachable block (ram,0x017f2e13) */

void FUN_017f2dc0(float param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong local_50;
  char local_48;
  float local_34;
  
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  fVar8 = *(float *)(unaff_RSI + 0xac);
  lVar5 = 1;
  do {
    fVar6 = (float)_logf((float)(int)lVar5 * fVar8 * DAT_02394204);
    fVar7 = (fVar6 * DAT_02394208) / DAT_023908e0 + DAT_0240d174;
    uVar2 = FUN_00e7d780();
    fVar6 = *(float *)(*(longlong *)(*param_2 + 0x10) + lVar5 * 4);
    if ((int)uVar2 < 0x65) {
      if (0 < (int)uVar2) {
        fVar7 = fVar7 - (float)(int)uVar2;
        uVar3 = (ulonglong)uVar2;
        lVar1 = *(longlong *)(local_50 + 0x10);
        *(float *)(lVar1 + uVar3 * 4) =
             (DAT_02390124 - fVar7) * fVar6 + *(float *)(lVar1 + uVar3 * 4);
        fVar6 = fVar6 * fVar7;
        pfVar4 = (float *)(lVar1 + uVar3 * 4 + 4);
        goto LAB_017f2e67;
      }
    }
    else {
      pfVar4 = (float *)(*(longlong *)(local_50 + 0x10) + 0x194);
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
        fVar8 = (float)_exp2f((float)((int)lVar5 + 0x22) * DAT_023908e0 * DAT_023941f4);
        fVar6 = (float)_powf((fVar8 * DAT_023941f8) / param_1,DAT_0240dee0);
        fVar8 = DAT_0240d16c;
        if (DAT_0240d16c <= fVar6 * local_34) {
          fVar8 = fVar6 * local_34;
        }
        pfVar4[lVar5 + -1] = fVar8;
        if (lVar5 == 0x66) break;
        local_34 = pfVar4[lVar5];
        lVar5 = lVar5 + 1;
      }
      *unaff_RDI = local_50;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  } while( true );
}


