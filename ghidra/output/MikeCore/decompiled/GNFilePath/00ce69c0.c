// Function: FUN_00ce69c0
// Address: 00ce69c0
// Size: 717 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce6c3c) */
/* WARNING: Removing unreachable block (ram,0x00ce6b71) */
/* WARNING: Removing unreachable block (ram,0x00ce6b3d) */
/* WARNING: Removing unreachable block (ram,0x00ce6b76) */
/* WARNING: Removing unreachable block (ram,0x00ce6b7b) */
/* WARNING: Removing unreachable block (ram,0x00ce6b83) */
/* WARNING: Removing unreachable block (ram,0x00ce6b43) */
/* WARNING: Removing unreachable block (ram,0x00ce6a71) */
/* WARNING: Removing unreachable block (ram,0x00ce6aa9) */
/* WARNING: Removing unreachable block (ram,0x00ce6aae) */
/* WARNING: Removing unreachable block (ram,0x00ce6ab6) */
/* WARNING: Removing unreachable block (ram,0x00ce6a77) */
/* WARNING: Removing unreachable block (ram,0x00ce6ba8) */
/* WARNING: Removing unreachable block (ram,0x00ce6bb1) */
/* WARNING: Removing unreachable block (ram,0x00ce6a0f) */
/* WARNING: Removing unreachable block (ram,0x00ce6a18) */
/* WARNING: Removing unreachable block (ram,0x00ce6a46) */
/* WARNING: Removing unreachable block (ram,0x00ce6a4f) */
/* WARNING: Removing unreachable block (ram,0x00ce6b0a) */
/* WARNING: Removing unreachable block (ram,0x00ce6b13) */

void FUN_00ce69c0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RSI + 0x368))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00ce6a1d;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00ce6a1d:
    FUN_00d8a060();
    if (local_40 != (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      (**(code **)(*(longlong *)*param_2 + 0x368))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      else {
        FUN_00d8ee20();
        if (local_40 != (longlong *)0x0) {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          FUN_00d8ef00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00cddf30();
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_00ce6bf2;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_00ce6bf2:
              cVar1 = (**(code **)(*local_40 + 0x398))();
              if (((cVar1 != '\0') || (cVar1 = (**(code **)(*local_40 + 0x3a0))(), cVar1 != '\0'))
                 || (cVar1 = (**(code **)(*local_40 + 0x4a8))(), cVar1 != '\0')) {
                *unaff_RDI = local_40;
                *(undefined1 *)(unaff_RDI + 1) = 1;
                FUN_00d50b20();
                goto LAB_00ce6c61;
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
LAB_00ce6c61:
      FUN_00d50b20();
      goto LAB_00ce6c6e;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00ce6c6e:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


