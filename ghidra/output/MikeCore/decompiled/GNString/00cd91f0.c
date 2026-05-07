// Function: FUN_00cd91f0
// Address: 00cd91f0
// Size: 531 bytes
// Class: GNString


void FUN_00cd91f0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  longlong local_60;
  char local_58;
  
  (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x40) + 0x30) + 0x368))();
  bVar3 = true;
  if (*(longlong *)(*(longlong *)(unaff_RSI + 0x40) + 0x38) != 0) {
    FUN_00cd4fc0();
    iVar4 = *(int *)(unaff_RSI + 0x48);
    if (iVar4 != 0) {
      lVar1 = *(longlong *)(unaff_RSI + 0x40);
      if (lVar1 == 0) {
LAB_00cd9257:
        bVar2 = true;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x10) + 8 + (ulonglong)(iVar4 - 1) * 0x23c
             ) < 1) goto LAB_00cd9274;
      }
      else {
        FUN_00d50b00();
        iVar4 = *(int *)(unaff_RSI + 0x48);
        if (iVar4 != 0) goto LAB_00cd9257;
LAB_00cd9274:
        bVar2 = false;
      }
      FUN_00d50b20();
      if (bVar2) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar5[2] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
        *puVar5 = &DAT_0256e828;
        *(undefined1 *)(puVar5 + 6) = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x49) = 0;
        FUN_00d500e0();
        lVar1 = puVar5[7];
        if (lVar1 != unaff_RSI) {
          FUN_00d50b00();
          puVar5[7] = unaff_RSI;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (*(char *)(*(longlong *)(unaff_RSI + 0x40) + 0x40) == '\0') {
          uVar6 = FUN_00d50b00();
          FUN_00cd94d0(uVar6,*(undefined4 *)(unaff_RSI + 0x48));
          if ((local_58 == '\0') && (local_60 != 0)) {
            FUN_00d50b00();
          }
          FUN_00cccfe0();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          lVar1 = *(longlong *)(*(longlong *)(unaff_RSI + 0x40) + 0x38);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00cd3420();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        goto LAB_00cd934d;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00cd934d:
  (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x40) + 0x30) + 0x378))();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((bVar3) && (puVar5 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


