// Function: FUN_019383e0
// Address: 019383e0
// Size: 2199 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01938683) */
/* WARNING: Removing unreachable block (ram,0x01938693) */

void FUN_019383e0(void)

{
  longlong *plVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x978))();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x978))();
    local_e0 = 0;
    local_e8 = unaff_RDI[0x27];
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    (**(code **)(*local_48 + 0x968))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = FUN_01bfdcc0(DAT_02390124);
  *(undefined4 *)((longlong)unaff_RDI + 0x584) = uVar6;
  if ((((unaff_RDI[0x80] == 0) && (unaff_RDI[0xaa] != 0)) &&
      (lVar4 = *(longlong *)(unaff_RDI[0xaa] + 0x400), lVar4 != 0)) && (lVar4 != 0)) {
    FUN_00d50b00();
    unaff_RDI[0x80] = lVar4;
  }
  if (((unaff_RDI[0x81] == 0) && (unaff_RDI[0xaa] != 0)) &&
     (lVar4 = *(longlong *)(unaff_RDI[0xaa] + 0x408), lVar4 != 0)) {
    if (lVar4 != 0) {
      FUN_00d50b00();
      unaff_RDI[0x81] = lVar4;
    }
    FUN_00d50b00();
    FUN_01a17960();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[0x27];
  (**(code **)(*(longlong *)unaff_RDI[0xaa] + 0x958))();
  (**(code **)(*local_48 + 0x3c8))();
  lVar4 = *plVar1;
  (**(code **)(lVar4 + 0x3d0))();
  pVar3 = (pthread_key_t)lVar4;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(&DAT_000014b0 + *(longlong *)unaff_RDI[0xaa]))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(&DAT_000014a8 + *unaff_RDI))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI == 0) {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(longlong *)unaff_RDI[0xaa] + 0x20))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x18))();
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x18))();
  }
  lVar4 = unaff_RDI[0xa8];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(&UNK_000016f8 + *unaff_RDI))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x5e) = 0;
  (**(code **)(&DAT_000015b0 + *unaff_RDI))();
  (**(code **)(*unaff_RDI + 0x970))();
  FUN_0197be80();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *unaff_RDI + 0x20))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    FUN_01a34e60();
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    lVar4 = unaff_RDI[0xa9];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_48 + 0x920))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x7f] == 0) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    (**(code **)(&DAT_000016e0 + *unaff_RDI))();
  }
  if (unaff_RDI[0x80] != 0) {
    lVar4 = unaff_RDI[0x7f];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01e26eb0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  lVar4 = DAT_026fb998;
  plVar1 = (longlong *)unaff_RDI[0x81];
  if (plVar1 != (longlong *)0x0) {
    if (DAT_026fb998 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x948))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e1f270();
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_01e26150();
  local_108 = DAT_026f6e60;
  if (DAT_026f6e60 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_100 = '\x01';
  uVar6 = FUN_000175c0(uVar6,&local_108);
  if (local_50 == '\0') {
    if (local_58 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*unaff_RDI + 0xec8))(uVar6,0);
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  local_f0 = '\0';
  local_f8 = 0;
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *(longlong *)unaff_RDI[0xaa] + 0x18))();
  (**(code **)(&UNK_00001488 + *unaff_RDI))();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x79) = *(undefined4 *)(unaff_RDI[0xaa] + 0x3c8);
  (**(code **)(*unaff_RDI + 0x400))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


