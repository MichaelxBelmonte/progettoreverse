// Function: FUN_01d244c0
// Address: 01d244c0
// Size: 1124 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d24834) */
/* WARNING: Removing unreachable block (ram,0x01d24841) */

void FUN_01d244c0(void)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  lVar1 = DAT_027ef960;
  if (DAT_027ef960 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_00d3ecc0();
    lVar1 = DAT_027ebc50;
    if (DAT_027ebc50 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_48 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_00d3ecc0();
      lVar1 = DAT_027f32f8;
      if (DAT_027f32f8 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_48 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_00d3ecc0();
        lVar1 = DAT_027ef958;
        if (DAT_027ef958 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*local_48 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_00d530a0();
        }
        else {
          FUN_00d3ecf0();
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          (**(code **)(*unaff_RDI + 0x458))();
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d3ecf0();
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        (**(code **)(*unaff_RDI + 0x450))();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d3ecf0();
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar5 = (longlong *)unaff_RDI[0xc];
      if (plVar5 == (longlong *)0x0) {
        if (*(int *)(unaff_RDI[2] + 0xc) != 0) {
          FUN_00d23310();
          pcVar4 = local_38;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar3 = (longlong *)FUN_00cafdf0();
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
            plVar5 = plVar3;
          }
          if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
      }
      if (local_48 == plVar5) {
        FUN_01d2b270();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01d2b270();
  }
  return;
}


