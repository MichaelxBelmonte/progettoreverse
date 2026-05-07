// Function: FUN_00b76800
// Address: 00b76800
// Size: 592 bytes
// Class: GNString


void FUN_00b76800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  uint unaff_ESI;
  longlong unaff_RDI;
  longlong local_b8;
  char local_b0;
  int local_34;
  
  uVar4 = FUN_00ae7f20();
  iVar7 = *(int *)(unaff_RDI + 0x30);
  iVar5 = FUN_00ae7f20();
  iVar5 = iVar5 * iVar7;
  iVar7 = iVar5 + 7;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  iVar7 = iVar7 >> 3;
  uVar1 = *(undefined4 *)(unaff_RDI + 0x30);
  uVar2 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x68) + 0x10);
  ___bzero();
  local_34 = iVar7 * unaff_ESI;
  (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x10))
            (&local_34,uVar2,param_3,param_4,uVar4,0,0,CONCAT44(1,iVar7),CONCAT44(uVar1,iVar7),uVar4
            );
  uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(local_34,uVar2);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (local_b8 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00cc78b0();
    if (lVar3 != 0) {
      uVar4 = FUN_00d50b20();
    }
  }
  puVar6 = *(undefined8 **)(unaff_RDI + 0x58);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    uVar4 = FUN_00c92160();
    lVar3 = *(longlong *)(unaff_RDI + 0x58);
    *(undefined8 **)(unaff_RDI + 0x58) = puVar6;
    if (lVar3 != 0) {
      uVar4 = FUN_00d50b20();
      puVar6 = *(undefined8 **)(unaff_RDI + 0x58);
    }
  }
  iVar5 = local_34;
  iVar7 = *(int *)(puVar6 + 3);
  FUN_00c8e340(uVar4,1);
  *(int *)(puVar6[2] + (longlong)iVar7) = iVar5;
  *(longlong *)(unaff_RDI + 0x48) = *(longlong *)(unaff_RDI + 0x48) + (longlong)local_34;
  ___bzero();
  *(undefined4 *)(unaff_RDI + 0x50) = 0;
  *(longlong *)(unaff_RDI + 0x70) = *(longlong *)(unaff_RDI + 0x70) + (ulonglong)unaff_ESI;
  return;
}


