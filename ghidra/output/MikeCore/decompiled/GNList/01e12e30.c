// Function: FUN_01e12e30
// Address: 01e12e30
// Size: 1303 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e13304) */
/* WARNING: Removing unreachable block (ram,0x01e13313) */
/* WARNING: Removing unreachable block (ram,0x01e13083) */
/* WARNING: Removing unreachable block (ram,0x01e1308f) */
/* WARNING: Removing unreachable block (ram,0x01e13255) */
/* WARNING: Removing unreachable block (ram,0x01e13261) */
/* WARNING: Removing unreachable block (ram,0x01e132b0) */
/* WARNING: Removing unreachable block (ram,0x01e132b9) */
/* WARNING: Removing unreachable block (ram,0x01e12f0e) */
/* WARNING: Removing unreachable block (ram,0x01e12f1a) */

void FUN_01e12e30(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong unaff_RDI;
  longlong *plVar10;
  longlong *local_c0;
  char local_b8;
  undefined8 local_70;
  ulonglong local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x388))();
  cVar4 = FUN_00e7b6c0();
  pcVar2 = DAT_026a96a0;
  iVar9 = (int)(param_2 >> 0x20);
  if (cVar4 == '\0') {
    iVar9 = iVar9 + (int)param_2;
    local_50 = param_2;
    do {
      (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x398))(&local_48,local_50);
      plVar10 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar8 = (longlong)&DAT_026a9688;
      plVar8[3] = 0;
      *(undefined4 *)(plVar8 + 4) = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      (*pcVar2)();
      (**(code **)(*plVar10 + 0x378))();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar8 + 0x370))();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar10 + 0x390))();
      (**(code **)(*plVar8 + 0x398))();
      (**(code **)(*plVar8 + 0x380))();
      iVar5 = local_48._4_4_ + (int)local_48;
      plVar10 = *(longlong **)(unaff_RDI + 0x138);
      if (iVar5 < iVar9) {
        uVar7 = FUN_00e7b4e0();
        lVar1 = *plVar10;
        (**(code **)(lVar1 + 0x390))(lVar1,uVar7);
        local_50 = (ulonglong)(uint)(local_48._4_4_ + (int)local_48);
      }
      else {
        uVar7 = FUN_00e7b4e0();
        lVar1 = *plVar10;
        (**(code **)(lVar1 + 0x390))(lVar1,uVar7);
      }
      FUN_00d50b20();
      FUN_00d50b20();
    } while (iVar5 < iVar9);
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x398))(&local_48,param_2 & 0xffffffff);
    plVar10 = local_40;
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    while( true ) {
      (**(code **)(*plVar10 + 0x380))();
      if (iVar9 + (int)param_2 <= local_48._4_4_ + (int)local_48) break;
      (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x398))(&local_70);
      plVar3 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x378))();
      (**(code **)(*plVar10 + 0x378))();
      if (local_40 == local_c0) {
        iVar5 = (**(code **)(*plVar3 + 0x390))();
        iVar6 = (**(code **)(*plVar10 + 0x390))();
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar5 == iVar6) {
          plVar8 = *(longlong **)(unaff_RDI + 0x138);
          uVar7 = FUN_00e7b4e0();
          (**(code **)(*plVar8 + 0x390))(*plVar8,uVar7);
        }
      }
      else {
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != plVar10) {
        FUN_00d50b00();
        FUN_00d50b20();
        plVar10 = plVar3;
      }
      local_48 = local_70;
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


