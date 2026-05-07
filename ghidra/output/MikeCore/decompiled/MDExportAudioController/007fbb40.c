// Function: FUN_007fbb40
// Address: 007fbb40
// Size: 573 bytes
// Class: MDExportAudioController


void FUN_007fbb40(void)

{
  int iVar1;
  undefined1 *puVar2;
  longlong unaff_RDI;
  longlong lVar3;
  char cVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong *local_28;
  char local_20;
  
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    *(undefined8 *)(unaff_RDI + 0x98) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
    FUN_00b881a0();
  }
  lVar3 = 0;
  if (*(longlong **)(unaff_RDI + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x370))();
    lVar3 = *(longlong *)(unaff_RDI + 0xa0);
  }
  if (lVar3 != 0) {
    *(undefined8 *)(unaff_RDI + 0xa0) = 0;
    FUN_00d50b20();
  }
  FUN_00aea540(2,DAT_0280d348);
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xa8) = 0;
    FUN_00d50b20();
  }
  if (*(char *)(unaff_RDI + 0xd4) == '\0') {
    *(int *)(unaff_RDI + 0xd8) = *(int *)(unaff_RDI + 0xd8) + 1;
    *(undefined4 *)(unaff_RDI + 0xe8) = 0x3f800000;
    puVar2 = (undefined1 *)(unaff_RDI + 0xd0);
    if ((*(char *)(unaff_RDI + 0xd0) == '\0') && (DAT_02390124 < *(float *)(unaff_RDI + 0xe0))) {
      *(undefined1 *)(unaff_RDI + 0xec) = 1;
      if (*(char *)(unaff_RDI + 0xd2) == '\0') {
        cVar4 = *(char *)(unaff_RDI + 0xd1);
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xd2) = 0;
        iVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x28))();
        local_38 = DAT_0272faf8;
        lVar3 = DAT_0272faf0;
        if (iVar1 == 0x44) {
          uVar5 = extraout_XMM0_Da;
          if (DAT_0272faf0 != 0) {
            uVar5 = FUN_00d50b00();
          }
          local_48 = lVar3;
          local_40 = '\x01';
          FUN_01e57490(uVar5,&local_48);
          iVar1 = (**(code **)(*local_28 + 0x5e0))();
          if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar5 = extraout_XMM0_Da;
          if (DAT_0272faf8 != 0) {
            uVar5 = FUN_00d50b00();
          }
          local_30 = '\x01';
          FUN_01e57490(uVar5,&local_38);
          iVar1 = (**(code **)(*local_28 + 0x5e0))();
          if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        cVar4 = iVar1 == 0;
        *(char *)(unaff_RDI + 0xd1) = cVar4;
      }
      puVar2 = (undefined1 *)(unaff_RDI + 0xec);
      if (cVar4 != '\0') {
        *(undefined1 *)(unaff_RDI + 0xd0) = 1;
        *(int *)(unaff_RDI + 0xd8) = *(int *)(unaff_RDI + 0xd8) + -1;
        *(float *)(unaff_RDI + 0xe8) = (DAT_02390124 / *(float *)(unaff_RDI + 0xe0)) * DAT_0239428c;
      }
    }
    *puVar2 = 0;
  }
  return;
}


