// Function: FUN_01be64b0
// Address: 01be64b0
// Size: 615 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01be6702) */
/* WARNING: Removing unreachable block (ram,0x01be670f) */

undefined8 * FUN_01be64b0(void)

{
  char cVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar2;
  longlong lVar4;
  longlong local_b0;
  char local_a8;
  longlong local_88;
  char local_80;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  bool bVar3;
  
  if (*(longlong *)(unaff_RSI + 0x138) == 0) {
    local_38 = '\0';
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_01bbfb40();
  }
  FUN_01beead0();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar4 = 0;
      bVar3 = false;
      bVar2 = false;
      do {
        if (bVar2) {
          FUN_01bc0650();
          FUN_00d4efa0();
          FUN_00d4efa0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          cVar1 = (**(code **)(*local_40 + 0x50))();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 != '\0') {
            FUN_01bc0650();
            FUN_002e0650();
            FUN_00d50b20();
            return unaff_RDI;
          }
        }
        else {
          bVar2 = bVar3;
          if (*(longlong *)(*(longlong *)(local_88 + 0x10) + lVar4 * 8) ==
              *(longlong *)(unaff_RSI + 0x138)) {
            bVar3 = true;
            bVar2 = true;
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_88 + 0xc));
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


