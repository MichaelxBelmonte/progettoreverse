// Function: FUN_00bc0a20
// Address: 00bc0a20
// Size: 622 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bc0b7e) */
/* WARNING: Removing unreachable block (ram,0x00bc0b87) */

int FUN_00bc0a20(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_50;
  undefined8 local_48;
  
  iVar2 = 0;
  if (((param_2 & 0xfffffffe) == 2) &&
     (lVar1 = (**(code **)(*unaff_RDI + 0x388))(), iVar2 = 0, lVar1 != 0)) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x388))(4,lVar1);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00ccdf50();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x378))(param_2,local_50);
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 < local_48) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar2 = (int)local_48 - (int)local_50;
      FUN_00ccdf50();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      iVar2 = 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return iVar2;
}


