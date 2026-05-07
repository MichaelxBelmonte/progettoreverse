// Function: FUN_01e1a190
// Address: 01e1a190
// Size: 583 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e1a376) */
/* WARNING: Removing unreachable block (ram,0x01e1a34b) */
/* WARNING: Removing unreachable block (ram,0x01e1a38a) */

void FUN_01e1a190(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar2;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  fVar2 = (float)((ulonglong)param_1 >> 0x20);
  if ((char)unaff_RDI[0x31] != '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_40 + 0x500))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 == 0) {
      if (unaff_RDI[0x29] == 0) {
        FUN_01cfbc00();
        FUN_01d488d0();
      }
      else {
        FUN_00d50b00();
        FUN_00d50b20();
        lVar1 = unaff_RDI[0x29];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_40 + 0x500))();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_01d488d0();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              ((int)param_1,fVar2,(int)param_1,
               (float)((ulonglong)param_2 >> 0x20) + fVar2 + DAT_02390d00);
  }
  return;
}


