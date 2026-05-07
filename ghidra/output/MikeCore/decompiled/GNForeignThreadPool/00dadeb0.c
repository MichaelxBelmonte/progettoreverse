// Function: FUN_00dadeb0
// Address: 00dadeb0
// Size: 1157 bytes
// Class: GNForeignThreadPool


/* WARNING: Removing unreachable block (ram,0x00dae0f0) */
/* WARNING: Removing unreachable block (ram,0x00dae0f9) */
/* WARNING: Removing unreachable block (ram,0x00dae117) */
/* WARNING: Removing unreachable block (ram,0x00dae124) */
/* WARNING: Removing unreachable block (ram,0x00dae00f) */
/* WARNING: Removing unreachable block (ram,0x00dae018) */
/* WARNING: Removing unreachable block (ram,0x00dae303) */
/* WARNING: Removing unreachable block (ram,0x00dae30c) */

ulonglong FUN_00dadeb0(undefined1 *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  int local_a4;
  longlong local_a0;
  char local_98;
  int local_4c;
  longlong *local_40;
  char local_38;
  
  cVar5 = FUN_00dab660();
  *(char *)(unaff_RDI + 0x48) = cVar5;
  if (cVar5 == '\0') {
LAB_00dae34b:
    uVar6 = 0;
  }
  else {
    FUN_00d21370();
    if (0 < local_4c) {
      iVar8 = 0;
      do {
        cVar5 = FUN_00dab660();
        *(char *)(unaff_RDI + 0x48) = cVar5;
        if (cVar5 == '\0') goto LAB_00dae34b;
        param_1 = *(undefined1 **)(*(longlong *)(unaff_RDI + 0x30) + 0x10);
        lVar9 = *(longlong *)(param_1 + (longlong)local_a4 * 8 + -8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        plVar1 = *(longlong **)(unaff_RDI + 0x60);
        plVar7 = local_40;
        if (plVar1 == (longlong *)0x0) {
          FUN_00c7e7b0();
          lVar4 = local_a0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          FUN_00c82360();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00c811e0();
            if (local_40 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
              bVar3 = false;
            }
            else {
              bVar3 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
            (**(code **)(*plVar7 + 0x20))();
            FUN_00d50b20();
            goto LAB_00dae156;
          }
          bVar3 = false;
          plVar7 = (longlong *)0x0;
          bVar2 = false;
        }
        else {
          local_d0 = '\0';
          local_d8 = lVar9;
          FUN_00d50b00();
          param_1 = &stack0xffffffffffffff70;
          (**(code **)(*plVar1 + 0x18))(param_1,&local_d8);
          if (local_40 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
            bVar3 = false;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
          }
          else {
            local_38 = '\0';
            bVar3 = true;
          }
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
LAB_00dae156:
          local_c0 = '\0';
          local_c8 = plVar7;
          FUN_00d21140();
          bVar2 = true;
          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if ((bVar3) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar2) goto LAB_00dae34b;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_4c);
    }
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (0 < local_4c) {
      lVar9 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10) + lVar9 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar7 = *(longlong **)(unaff_RDI + 0x60);
        if (plVar7 == (longlong *)0x0) {
          FUN_00d50b00();
          (**(code **)(*plVar1 + 0x118))();
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
        }
        else {
          local_b0 = '\0';
          local_b8 = plVar1;
          FUN_00d50b00();
          (**(code **)(*plVar7 + 0x20))();
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(char *)(unaff_RDI + 0x48) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00dae34b;
        }
        FUN_00d4efa0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_00dae320;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_00dae320:
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < local_4c);
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar6 & 0xffffffff;
}


