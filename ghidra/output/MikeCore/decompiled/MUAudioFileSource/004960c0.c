// Function: FUN_004960c0
// Address: 004960c0
// Size: 545 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x00496178) */
/* WARNING: Removing unreachable block (ram,0x0049612b) */
/* WARNING: Removing unreachable block (ram,0x00496134) */
/* WARNING: Removing unreachable block (ram,0x00496180) */
/* WARNING: Removing unreachable block (ram,0x004961a0) */
/* WARNING: Removing unreachable block (ram,0x00496182) */
/* WARNING: Removing unreachable block (ram,0x004961a2) */

undefined8 FUN_004960c0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  longlong unaff_RDI;
  float fVar7;
  undefined4 uVar8;
  longlong local_60;
  char local_58;
  int local_48;
  
  lVar3 = local_60;
  if (param_2 == 0) {
    return 1;
  }
  fVar7 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x930))();
  FUN_0048a5a0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0049621d;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0049621d;
  local_58 = '\0';
  local_60 = 0;
  local_48 = -1;
  fVar7 = DAT_02390124 - fVar7;
  while( true ) {
    lVar5 = (longlong)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(lVar3 + 0xc) <= local_48) break;
    lVar1 = *(longlong *)(lVar3 + 0x10);
    local_60 = *(longlong *)(lVar1 + 8 + lVar5 * 8);
    pvVar6 = _pthread_getspecific((pthread_key_t)lVar1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d7dd0(fVar7);
  }
  FUN_00115190();
  FUN_00d50b20();
LAB_0049621d:
  FUN_0047dd70();
  iVar4 = FUN_01caecd0();
  plVar2 = *(longlong **)(unaff_RDI + 0x100);
  if (iVar4 == 3) {
    (**(code **)(*plVar2 + 0x6e0))();
  }
  else {
    (**(code **)(*plVar2 + 0x6b0))();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    uVar8 = FUN_01e3f820();
    (**(code **)(*plVar2 + 0x6d8))(uVar8,0);
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}


