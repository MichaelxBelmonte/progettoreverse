// Function: FUN_015bc6a0
// Address: 015bc6a0
// Size: 1021 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015bc6e0) */
/* WARNING: Removing unreachable block (ram,0x015bc6e9) */

void FUN_015bc6a0(void *param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong unaff_RDI;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (*(char *)(unaff_RDI + 0x88) == '\0') {
    FUN_015ba5e0();
    *(undefined1 *)(unaff_RDI + 0x88) = 1;
    cVar3 = *(char *)(unaff_RDI + 0x9c);
  }
  else {
    cVar3 = *(char *)(unaff_RDI + 0x9c);
  }
  if (cVar3 == '\0') {
    FUN_015bc030();
    *(undefined1 *)(unaff_RDI + 0x9c) = 1;
    iVar1 = *(int *)(unaff_RDI + 0x44);
    fVar6 = DAT_0240d16c;
  }
  else {
    iVar1 = *(int *)(unaff_RDI + 0x44);
    fVar6 = DAT_0240d16c;
  }
  DAT_0240d16c = fVar6;
  if (iVar1 < 1) {
    cVar3 = '\0';
  }
  else {
    fVar7 = *(float *)(unaff_RDI + 0x94) + DAT_02390124;
    fVar7 = (float)(-(uint)(fVar7 < DAT_02390124) & (uint)(fVar7 + fVar7 + DAT_02390d00) |
                   ~-(uint)(fVar7 < DAT_02390124) & (uint)fVar7);
    lVar4 = 0;
    if (fVar7 <= DAT_02390124) {
      if (fVar7 <= DAT_02390124) {
        cVar3 = '\0';
        do {
          fVar7 = *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = DAT_0240d16c;
          fVar5 = fVar5 * *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) +
                                    lVar4 * 4);
          fVar7 = DAT_0240d16c;
          if (DAT_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          cVar2 = '\x01';
          if (fVar7 <= DAT_023b36e8) {
            cVar2 = cVar3;
          }
          cVar3 = cVar2;
          if (fVar7 < DAT_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(longlong *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(unaff_RDI + 0x44));
      }
      else {
        cVar3 = '\0';
        do {
          fVar7 = *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = DAT_0240d16c;
          fVar7 = DAT_0240d16c;
          if (DAT_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          if (DAT_023b36e8 < fVar7) {
            cVar3 = '\x01';
          }
          if (fVar7 < DAT_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(longlong *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(unaff_RDI + 0x44));
      }
    }
    else {
      cVar3 = '\0';
      if (DAT_02390124 < fVar7) {
        do {
          fVar7 = *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + lVar4 * 4) *
                  *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = DAT_0240d16c;
          fVar7 = DAT_0240d16c;
          if (DAT_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          cVar2 = '\x01';
          if (fVar7 <= DAT_023b36e8) {
            cVar2 = cVar3;
          }
          cVar3 = cVar2;
          if (fVar7 < DAT_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(longlong *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(unaff_RDI + 0x44));
      }
      else {
        do {
          fVar7 = *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + lVar4 * 4) *
                  *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = DAT_0240d16c;
          fVar5 = fVar5 * *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10) +
                                    lVar4 * 4);
          fVar7 = DAT_0240d16c;
          if (DAT_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          cVar2 = '\x01';
          if (fVar7 <= DAT_023b36e8) {
            cVar2 = cVar3;
          }
          cVar3 = cVar2;
          if (fVar7 < DAT_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(longlong *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(unaff_RDI + 0x44));
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x70) != local_40) {
    FUN_00d64850();
    lVar4 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar4 != local_40) {
      FUN_00d50b00();
      *(longlong *)(unaff_RDI + 0x70) = local_40;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (*(char *)(unaff_RDI + 0x48) != cVar3) {
    FUN_00d64850();
    *(char *)(unaff_RDI + 0x48) = cVar3;
    FUN_00d64910();
  }
  FUN_00d50b20();
  return;
}


