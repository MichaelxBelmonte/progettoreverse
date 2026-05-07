// Function: FUN_00c29bd0
// Address: 00c29bd0
// Size: 1663 bytes
// Class: GNOverloudConvolver


/* WARNING: Removing unreachable block (ram,0x00c2a0b6) */
/* WARNING: Removing unreachable block (ram,0x00c2a0bf) */
/* WARNING: Removing unreachable block (ram,0x00c2a14f) */
/* WARNING: Removing unreachable block (ram,0x00c2a15c) */
/* WARNING: Removing unreachable block (ram,0x00c29fa9) */
/* WARNING: Removing unreachable block (ram,0x00c29fb2) */
/* WARNING: Removing unreachable block (ram,0x00c29f5b) */
/* WARNING: Removing unreachable block (ram,0x00c29f29) */
/* WARNING: Removing unreachable block (ram,0x00c29f32) */
/* WARNING: Removing unreachable block (ram,0x00c29d5c) */
/* WARNING: Removing unreachable block (ram,0x00c29d65) */
/* WARNING: Removing unreachable block (ram,0x00c29c9c) */
/* WARNING: Removing unreachable block (ram,0x00c29ca5) */
/* WARNING: Removing unreachable block (ram,0x00c29e78) */
/* WARNING: Removing unreachable block (ram,0x00c29e81) */
/* WARNING: Removing unreachable block (ram,0x00c29ecc) */
/* WARNING: Removing unreachable block (ram,0x00c29ed5) */
/* WARNING: Removing unreachable block (ram,0x00c29fff) */
/* WARNING: Removing unreachable block (ram,0x00c2a008) */
/* WARNING: Removing unreachable block (ram,0x00c2a044) */
/* WARNING: Removing unreachable block (ram,0x00c2a1d3) */
/* WARNING: Removing unreachable block (ram,0x00c2a1dc) */
/* WARNING: Removing unreachable block (ram,0x00c2a11f) */
/* WARNING: Removing unreachable block (ram,0x00c29cfb) */
/* WARNING: Removing unreachable block (ram,0x00c29cd4) */
/* WARNING: Removing unreachable block (ram,0x00c29cdd) */
/* WARNING: Removing unreachable block (ram,0x00c29d91) */
/* WARNING: Removing unreachable block (ram,0x00c29d9a) */
/* WARNING: Removing unreachable block (ram,0x00c2a1bf) */
/* WARNING: Removing unreachable block (ram,0x00c2a1c8) */

undefined8 FUN_00c29bd0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  undefined1 local_108 [8];
  undefined1 local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  int local_b4;
  longlong local_58;
  char local_50;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    FUN_01caea40();
    FUN_00d46530();
    lVar1 = DAT_0276cab0;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      lVar1 = DAT_0276cab0;
    }
    DAT_0276cab0 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    plVar2 = DAT_0276cab8;
    if (DAT_0276cab8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_f8 = DAT_0276cac0;
    if (DAT_0276cac0 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_e0 = '\0';
    local_e8 = plVar6;
    FUN_00d40470(&local_e8,&stack0xffffffffffffff60,3,0);
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    plVar6 = DAT_0276cab8;
    if (DAT_0276cab8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_d8 = plVar6;
    local_d0 = '\x01';
    FUN_000175c0();
    cVar3 = FUN_00d45ad0();
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_01f4e930();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x388))();
      FUN_00b7ace0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x368))();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      iVar4 = FUN_01f4eb70();
      if (iVar4 == 0) {
        (**(code **)(*plVar2 + 0x380))();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_c0 = '\0';
        local_c8 = plVar2;
        FUN_00b810f0();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x5d0))();
        iVar4 = FUN_01caea40();
        lVar1 = *(longlong *)(*(longlong *)(plVar2[0x19] + 0x10) + (longlong)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        iVar4 = *(int *)(lVar1 + 0x28);
        FUN_00d50b20();
        local_b4 = iVar4;
        (**(code **)(*unaff_RDI + 0x5d0))();
        uVar5 = FUN_01caea40();
        (**(code **)(*unaff_RDI + 0x608))();
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_100 = 1;
        FUN_00c1f910(local_108,uVar5,local_b4 != 0);
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_01caea40();
        FUN_00c29780();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x600))();
      FUN_01d114f0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}


