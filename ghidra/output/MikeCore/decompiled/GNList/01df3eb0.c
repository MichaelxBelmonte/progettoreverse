// Function: FUN_01df3eb0
// Address: 01df3eb0
// Size: 509 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01df3fcb) */
/* WARNING: Removing unreachable block (ram,0x01df3fd4) */
/* WARNING: Removing unreachable block (ram,0x01df3f9d) */

ulonglong FUN_01df3eb0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = DAT_027f2e68;
  if (DAT_027f2e68 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar3 = FUN_01df05b0(param_1,param_2);
    uVar5 = (ulonglong)uVar3;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    if (param_2 != '\0') {
      FUN_01ccad60();
      if (local_40 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
        if (local_38 != '\0') {
          plVar4 = (longlong *)0x0;
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01db9a60();
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01caeb00();
      (**(code **)(*local_70 + 0x980))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x518))(param_1,(int)plVar6[0x27]);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar5 & 0xffffffff;
}


