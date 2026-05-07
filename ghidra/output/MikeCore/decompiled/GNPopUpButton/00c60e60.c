// Function: FUN_00c60e60
// Address: 00c60e60
// Size: 1043 bytes
// Class: GNPopUpButton


/* WARNING: Removing unreachable block (ram,0x00c610f2) */
/* WARNING: Removing unreachable block (ram,0x00c610fb) */
/* WARNING: Removing unreachable block (ram,0x00c61051) */
/* WARNING: Removing unreachable block (ram,0x00c61056) */
/* WARNING: Removing unreachable block (ram,0x00c60fd2) */
/* WARNING: Removing unreachable block (ram,0x00c60fde) */
/* WARNING: Removing unreachable block (ram,0x00c60f8c) */
/* WARNING: Removing unreachable block (ram,0x00c60f95) */
/* WARNING: Removing unreachable block (ram,0x00c61028) */
/* WARNING: Removing unreachable block (ram,0x00c61031) */
/* WARNING: Removing unreachable block (ram,0x00c6115a) */
/* WARNING: Removing unreachable block (ram,0x00c61163) */
/* WARNING: Removing unreachable block (ram,0x00c6122e) */
/* WARNING: Removing unreachable block (ram,0x00c61237) */
/* WARNING: Removing unreachable block (ram,0x00c60ea5) */
/* WARNING: Removing unreachable block (ram,0x00c60eae) */
/* WARNING: Removing unreachable block (ram,0x00c60f55) */
/* WARNING: Removing unreachable block (ram,0x00c60f5e) */

undefined8 FUN_00c60e60(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01f4e930();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x388))();
    FUN_00c5d9b0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_001220c0();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00c5dc60();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x368))();
    iVar2 = FUN_01f4eb70();
    if (iVar2 == 0) {
      (**(code **)(*local_40 + 0x380))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x608))();
      if (local_58 == 0) {
        (**(code **)(*unaff_RDI + 0x5d0))();
        FUN_00c5e840();
      }
      else {
        (**(code **)(*unaff_RDI + 0x5d0))();
        (**(code **)(*unaff_RDI + 0x608))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00c5e440();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d243a0();
      FUN_00d403d0();
      lVar1 = DAT_027719f0;
      if (DAT_027719f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      FUN_00d40470(&local_88,&stack0xffffffffffffff88,1,3);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}


