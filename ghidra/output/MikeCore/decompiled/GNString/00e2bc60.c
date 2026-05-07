// Function: FUN_00e2bc60
// Address: 00e2bc60
// Size: 877 bytes
// Class: GNString
// String references:
//   "%@::%@"


/* WARNING: Removing unreachable block (ram,0x00e2bf27) */
/* WARNING: Removing unreachable block (ram,0x00e2bf30) */
/* WARNING: Removing unreachable block (ram,0x00e2bce2) */
/* WARNING: Removing unreachable block (ram,0x00e2bceb) */
/* WARNING: Removing unreachable block (ram,0x00e2bdd3) */
/* WARNING: Removing unreachable block (ram,0x00e2bddc) */
/* WARNING: Removing unreachable block (ram,0x00e2be2a) */
/* WARNING: Removing unreachable block (ram,0x00e2be60) */
/* WARNING: Removing unreachable block (ram,0x00e2be2c) */
/* WARNING: Removing unreachable block (ram,0x00e2be62) */

undefined8 * FUN_00e2bc60(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 local_e0;
  longlong local_d0;
  char local_c8;
  int local_a0;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar2 = local_68;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x388))();
  if (local_60 == '\0') {
    if (local_68 == (undefined8 *)0x0) goto LAB_00e2bfd6;
    FUN_00d50b00();
  }
  else if (local_68 == (undefined8 *)0x0) goto LAB_00e2bfd6;
  if (0 < *(int *)((longlong)local_68 + 0xc)) {
    uVar6 = 0;
    do {
      puVar3 = local_68;
      (**(code **)(**(longlong **)(puVar2[2] + (ulonglong)uVar6 * 8) + 0x368))();
      if (local_60 == '\0') {
        if (local_68 != (undefined8 *)0x0) {
          FUN_00d50b00();
          goto LAB_00e2bde4;
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
LAB_00e2bde4:
        local_a0 = -1;
        while( true ) {
          lVar5 = (longlong)local_a0;
          local_a0 = local_a0 + 1;
          if (*(int *)((longlong)puVar3 + 0xc) <= local_a0) break;
          uVar1 = *(undefined8 *)(puVar3[2] + 8 + lVar5 * 8);
          FUN_00c7e7b0();
          local_e0 = uVar1;
          FUN_00083ea0(2,&local_e0);
          FUN_00d8cb40();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_00d21140();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_68 = &DAT_024c5048;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00018280();
        FUN_00d50b20();
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)((longlong)puVar2 + 0xc));
  }
  FUN_00e2c740();
  FUN_00d50b20();
LAB_00e2bfd6:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


