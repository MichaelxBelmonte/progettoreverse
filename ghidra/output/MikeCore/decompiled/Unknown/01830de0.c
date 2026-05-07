// Function: FUN_01830de0
// Address: 01830de0
// Size: 1028 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01830e54) */
/* WARNING: Removing unreachable block (ram,0x01830e5d) */

void FUN_01830de0(float param_1,char param_2,size_t param_3)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar14;
  uint uVar15;
  float fVar16;
  longlong local_80;
  char local_78;
  
  uVar9 = *(uint *)(*unaff_RDI + 0xc);
  uVar10 = (ulonglong)uVar9;
  uVar15 = *(uint *)(**(longlong **)(*unaff_RDI + 0x10) + 0x18);
  uVar4 = uVar15 + 3;
  if (-1 < (int)uVar15) {
    uVar4 = uVar15;
  }
  FUN_00c8e690();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar14 = (int)uVar4 >> 2;
  pvVar11 = (void *)(ulonglong)uVar14;
  pvVar6 = (void *)(longlong)(int)(uVar4 & 0xfffffffc);
  if (param_2 == '\0') {
    if (0 < (int)uVar9) {
      uVar7 = 2;
      if (2 < (int)uVar14) {
        uVar7 = (ulonglong)uVar14;
      }
      if ((int)uVar15 < 8) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar7 * 8) != 0) {
            FUN_00d50b00();
          }
          _memcpy(pvVar11,pvVar6,param_3);
          FUN_00d50b20();
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
      else {
        uVar9 = uVar14 - 1;
        uVar13 = 0;
        do {
          fVar1 = *(float *)(*(longlong *)(*unaff_RSI + 0x10) + uVar13 * 4);
          lVar2 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar13 * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          uVar12 = 1;
          do {
            fVar16 = ((float)(int)uVar12 * (param_1 / (float)(int)uVar14)) / fVar1;
            pfVar3 = *(float **)(lVar2 + 0x10);
            uVar15 = (uint)fVar16;
            if ((int)uVar15 < 0) {
              fVar16 = *pfVar3;
            }
            else if ((int)uVar15 < (int)uVar9) {
              iVar5 = FUN_00e7d780((fVar16 - (float)(int)uVar15) * DAT_023d5f44);
              lVar8 = FUN_00e84280();
              fVar16 = (pfVar3[(ulonglong)uVar15 + 1] - pfVar3[uVar15]) *
                       *(float *)(lVar8 + (longlong)iVar5 * 4) + pfVar3[uVar15];
            }
            else {
              fVar16 = pfVar3[(longlong)(ulonglong)uVar9];
            }
            *(float *)(*(longlong *)(local_80 + 0x10) + uVar12 * 4) = fVar16;
            uVar12 = uVar12 + 1;
          } while (uVar7 != uVar12);
          _memcpy((void *)(ulonglong)uVar9,pvVar6,param_3);
          FUN_00d50b20();
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar10);
      }
    }
  }
  else if (0 < (int)uVar9) {
    uVar7 = 2;
    if (2 < (int)uVar14) {
      uVar7 = (ulonglong)uVar14;
    }
    if ((int)uVar15 < 8) {
      uVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar7 * 8) != 0) {
          FUN_00d50b00();
        }
        _memcpy(pvVar11,pvVar6,param_3);
        FUN_00d50b20();
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
    else {
      uVar9 = uVar14 - 1;
      uVar13 = 0;
      pvVar11 = (void *)(ulonglong)uVar9;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar13 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        _memcpy(pvVar11,pvVar6,param_3);
        fVar1 = *(float *)(*(longlong *)(*unaff_RSI + 0x10) + uVar13 * 4);
        uVar12 = 1;
        do {
          fVar16 = ((float)(int)uVar12 * fVar1) / (param_1 / (float)(int)uVar14);
          pfVar3 = *(float **)(local_80 + 0x10);
          uVar15 = (uint)fVar16;
          if ((int)uVar15 < 0) {
            fVar16 = *pfVar3;
          }
          else if ((int)uVar15 < (int)uVar9) {
            iVar5 = FUN_00e7d780((fVar16 - (float)(int)uVar15) * DAT_023d5f44);
            lVar8 = FUN_00e84280();
            pvVar11 = (void *)(longlong)iVar5;
            fVar16 = (pfVar3[(ulonglong)uVar15 + 1] - pfVar3[uVar15]) *
                     *(float *)(lVar8 + (longlong)pvVar11 * 4) + pfVar3[uVar15];
          }
          else {
            fVar16 = pfVar3[(longlong)(ulonglong)uVar9];
          }
          *(float *)(*(longlong *)(lVar2 + 0x10) + uVar12 * 4) = fVar16;
          uVar12 = uVar12 + 1;
        } while (uVar7 != uVar12);
        FUN_00d50b20();
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar10);
    }
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}


