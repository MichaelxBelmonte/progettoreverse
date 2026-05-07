// Function: FUN_00cd9c60
// Address: 00cd9c60
// Size: 625 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00cd9e49) */
/* WARNING: Removing unreachable block (ram,0x00cd9e52) */

void FUN_00cd9c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_70;
  char local_68;
  undefined8 *local_40;
  
  (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x40) + 0x30) + 0x368))();
  if (*(longlong *)(*(longlong *)(unaff_RSI + 0x40) + 0x38) == 0) {
LAB_00cd9d5f:
    bVar2 = false;
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_00cd4fc0();
    iVar4 = *(int *)(unaff_RSI + 0x48);
    if (iVar4 == 0) {
LAB_00cd9d6a:
      local_40 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      bVar3 = true;
    }
    else {
      lVar1 = *(longlong *)(unaff_RSI + 0x40);
      if (lVar1 == 0) {
LAB_00cd9cd0:
        bVar2 = true;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x10) + 8 + (ulonglong)(iVar4 - 1) * 0x23c
             ) < 1) goto LAB_00cd9ced;
      }
      else {
        FUN_00d50b00();
        iVar4 = *(int *)(unaff_RSI + 0x48);
        if (iVar4 != 0) goto LAB_00cd9cd0;
LAB_00cd9ced:
        bVar2 = false;
      }
      FUN_00d50b20();
      if (!bVar2) goto LAB_00cd9d5f;
      iVar4 = *(int *)(unaff_RSI + 0x48);
      if (iVar4 == 0) goto LAB_00cd9d6a;
      lVar1 = *(longlong *)(unaff_RSI + 0x40);
      if (lVar1 != 0) {
        FUN_00d50b00();
        iVar4 = *(int *)(unaff_RSI + 0x48);
      }
      FUN_00cd94d0(iVar4,iVar4,param_3,param_4,1);
      local_40 = local_70;
      if (local_70 == (undefined8 *)0x0) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (local_68 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
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
    *(undefined1 *)(puVar5 + 6) = 1;
    FUN_00cccf30();
    bVar2 = true;
    if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
      bVar2 = true;
    }
  }
  (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x40) + 0x30) + 0x378))();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar2 && puVar5 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


