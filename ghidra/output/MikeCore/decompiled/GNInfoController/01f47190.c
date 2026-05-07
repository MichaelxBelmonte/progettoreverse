// Function: FUN_01f47190
// Address: 01f47190
// Size: 604 bytes
// Class: GNInfoController


/* WARNING: Removing unreachable block (ram,0x01f47373) */
/* WARNING: Removing unreachable block (ram,0x01f4727a) */
/* WARNING: Removing unreachable block (ram,0x01f47283) */
/* WARNING: Removing unreachable block (ram,0x01f4720a) */
/* WARNING: Removing unreachable block (ram,0x01f47213) */
/* WARNING: Removing unreachable block (ram,0x01f4723e) */
/* WARNING: Removing unreachable block (ram,0x01f47247) */
/* WARNING: Removing unreachable block (ram,0x01f47330) */
/* WARNING: Removing unreachable block (ram,0x01f473d5) */
/* WARNING: Removing unreachable block (ram,0x01f473de) */

void FUN_01f47190(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_025736a8;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    (*DAT_025736c0)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0xa8);
    if (puVar1 == puVar2) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xa8) = puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_026ba058;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_00d500e0();
  FUN_01f6c7d0();
  FUN_01f6c800();
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x368))();
  FUN_00d21140();
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x378))();
  if ((*(longlong *)(unaff_RDI + 0xb0) == 0) && (FUN_00da5ad0(), *(char *)(puVar1 + 3) != '\0')) {
    FUN_01e1eb80((int)DAT_02422df0,0);
    puVar2 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar2 != puVar1) {
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xb0) = 0;
      }
      else {
        FUN_00d50b00();
        puVar2 = *(undefined8 **)(unaff_RDI + 0xb0);
        *(undefined8 **)(unaff_RDI + 0xb0) = puVar1;
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}


