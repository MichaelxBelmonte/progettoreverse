// Function: FUN_00b4be00
// Address: 00b4be00
// Size: 667 bytes
// Class: GNDate


void FUN_00b4be00(void)

{
  int iVar1;
  dword dVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  while( true ) {
    FUN_00b4c260();
    iVar1 = *(int *)(local_48 + 0xc);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 0) break;
    FUN_00b4c260();
    FUN_00d23340();
    local_38[0] = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00b4c4b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00b6f010();
  if (local_48 == 0) {
    bVar4 = true;
    lVar5 = 0;
    dVar2 = MACH_HEADER.filetype;
  }
  else {
    if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar4 = false;
    dVar2 = *(dword *)(local_48 + 0xc);
    lVar5 = local_48;
  }
  if (0 < (int)dVar2) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00b4c6f0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar5 + 0xc));
  }
  if (*(char *)(unaff_RDI + 0xb0) == '\0') {
    *(undefined1 *)(unaff_RDI + 0xb0) = 1;
    FUN_00d403d0();
    FUN_00d50b00();
    local_80 = DAT_027634f8;
    if (DAT_027634f8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_70 = 0;
    local_68 = '\0';
    FUN_00d41430(&local_70,&local_80);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  return;
}


