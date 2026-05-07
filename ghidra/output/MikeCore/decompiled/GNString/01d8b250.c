// Function: FUN_01d8b250
// Address: 01d8b250
// Size: 534 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d8b3dd) */
/* WARNING: Removing unreachable block (ram,0x01d8b3e6) */
/* WARNING: Removing unreachable block (ram,0x01d8b338) */
/* WARNING: Removing unreachable block (ram,0x01d8b341) */
/* WARNING: Removing unreachable block (ram,0x01d8b372) */
/* WARNING: Removing unreachable block (ram,0x01d8b37b) */
/* WARNING: Removing unreachable block (ram,0x01d8b2b0) */
/* WARNING: Removing unreachable block (ram,0x01d8b2bc) */
/* WARNING: Removing unreachable block (ram,0x01d8b437) */
/* WARNING: Removing unreachable block (ram,0x01d8b440) */
/* WARNING: Removing unreachable block (ram,0x01d8b2eb) */
/* WARNING: Removing unreachable block (ram,0x01d8b2f4) */

void FUN_01d8b250(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_30;
  undefined1 local_28;
  
  if (*unaff_RSI != 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x148);
    if (plVar1 == (longlong *)0x0) {
      if (*(longlong **)(unaff_RDI + 0x18) == (longlong *)0x0) {
        FUN_01f27fe0();
        if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_30 != (longlong *)0x0) {
          FUN_01f27fe0();
          cVar2 = (**(code **)(*local_30 + 0x3b8))(param_1,0);
          if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_01f27fe0();
            (**(code **)(*local_30 + 0x3b8))(param_1,1);
            if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3b8))(param_1,0);
        if (cVar2 != '\0') {
          (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3b8))(param_1,1);
        }
      }
    }
    else {
      FUN_00d50b00();
      cVar2 = (**(code **)(*plVar1 + 0x3b8))(param_1,0);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x3b8))(param_1,1);
      }
      FUN_00d50b20();
    }
  }
  return;
}


