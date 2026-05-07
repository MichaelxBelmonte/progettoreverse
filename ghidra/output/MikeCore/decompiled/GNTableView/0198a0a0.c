// Function: FUN_0198a0a0
// Address: 0198a0a0
// Size: 588 bytes
// Class: GNTableView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0198a0a0(double param_1)

{
  longlong *plVar1;
  longlong *unaff_RDI;
  float fVar2;
  longlong local_30;
  char local_28;
  
  fVar2 = *(float *)((longlong)unaff_RDI + 0x14c);
  if ((char)unaff_RDI[0x29] == '\0') {
    if (0.0 < fVar2) {
      fVar2 = fVar2 + (float)(param_1 / _DAT_0241b6b8);
      *(float *)((longlong)unaff_RDI + 0x14c) = fVar2;
      if (fVar2 < 0.0) {
        *(undefined4 *)((longlong)unaff_RDI + 0x14c) = 0;
        FUN_01f27fe0();
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b00();
        FUN_01f474f0();
        if (unaff_RDI + 0x27 != (longlong *)0x0) {
          (**(code **)(unaff_RDI[0x27] + 0x10))();
          FUN_00d50b20();
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)((longlong)unaff_RDI + 0x149) = 0;
      }
      (**(code **)(*unaff_RDI + 0x620))();
      plVar1 = (longlong *)unaff_RDI[6];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
        (**(code **)(&UNK_000014a0 + *plVar1))(*(undefined4 *)((longlong)unaff_RDI + 0x14c));
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (fVar2 < DAT_02390124) {
    fVar2 = fVar2 + (float)(param_1 / DAT_023b3490);
    *(float *)((longlong)unaff_RDI + 0x14c) = fVar2;
    if (DAT_02390124 < fVar2) {
      *(undefined4 *)((longlong)unaff_RDI + 0x14c) = 0x3f800000;
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x27] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x27 != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)((longlong)unaff_RDI + 0x149) = 0;
    }
    (**(code **)(*unaff_RDI + 0x620))();
    plVar1 = (longlong *)unaff_RDI[6];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(&UNK_000014a0 + *plVar1))(*(undefined4 *)((longlong)unaff_RDI + 0x14c));
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


