// Function: FUN_000813d0
// Address: 000813d0
// Size: 657 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00081643) */
/* WARNING: Removing unreachable block (ram,0x0008164c) */

void FUN_000813d0(void)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RDI;
  float fVar4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_38;
  undefined1 local_30;
  
  FUN_00d3ecc0();
  lVar2 = DAT_02726c30;
  if (DAT_02726c30 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_38 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    fVar4 = (float)FUN_000780c0();
    pfVar1 = (float *)(unaff_RDI + 0x68);
    if ((fVar4 != *pfVar1) || (NAN(fVar4) || NAN(*pfVar1))) {
      if (fVar4 < *pfVar1 || fVar4 == *pfVar1) {
        FUN_0049e420();
        FUN_00d50b00();
        lVar2 = DAT_026d8460;
        if (DAT_026d8460 != 0) {
          FUN_00d50b00();
        }
        FUN_0049e560(*(undefined4 *)(unaff_RDI + 0x68),fVar4,DAT_02390450);
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_0049e420();
        FUN_00d50b00();
        lVar2 = DAT_026d8460;
        if (DAT_026d8460 != 0) {
          FUN_00d50b00();
        }
        FUN_0049e560(*(undefined4 *)(unaff_RDI + 0x68),fVar4,DAT_02390450);
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(float *)(unaff_RDI + 0x68) = fVar4;
    }
  }
  FUN_00d530a0();
  return;
}


