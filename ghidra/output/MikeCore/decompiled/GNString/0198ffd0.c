// Function: FUN_0198ffd0
// Address: 0198ffd0
// Size: 550 bytes
// Class: GNString


void FUN_0198ffd0(void)

{
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_38;
  char local_30;
  
  FUN_00d403d0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_98 = 0;
  local_90 = '\0';
  local_88 = 0;
  local_80 = '\0';
  FUN_00d41040(&local_88,&local_98);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_01f27fe0();
    (**(code **)(unaff_RDI[0x2a] + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if (unaff_RDI + 0x2a != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x2a] + 0x10))();
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *unaff_RDI + 0x18))();
  if ((unaff_RDI[0x4f] != 0) && (FUN_01e1e360(), unaff_RDI[0x4f] != 0)) {
    unaff_RDI[0x4f] = 0;
    FUN_00d50b20();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *unaff_RDI + 0x38))();
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *unaff_RDI + 0x18))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    (**(code **)(*local_78 + 0x10))();
    FUN_00d50b20();
  }
  local_60 = '\0';
  local_68 = 0;
  (**(code **)(*unaff_RDI + 0xa08))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e3b870();
  return;
}


