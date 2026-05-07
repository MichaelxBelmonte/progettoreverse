// Function: FUN_0025cf90
// Address: 0025cf90
// Size: 1355 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x0025d365) */
/* WARNING: Removing unreachable block (ram,0x0025d36e) */
/* WARNING: Removing unreachable block (ram,0x0025d3df) */
/* WARNING: Removing unreachable block (ram,0x0025d3e8) */

ulonglong FUN_0025cf90(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
LAB_0025d073:
    uVar8 = 0;
    goto LAB_0025d4c9;
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar1 = local_48;
  local_58 = local_40[0];
  pcVar4 = &local_58;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    if (*(longlong *)(unaff_RDI + 0x90) == 0) goto LAB_0025d073;
LAB_0025d00c:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_0025d00c;
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar7 = local_48;
  local_38[0] = local_40[0];
  pcVar4 = local_40;
  if (local_40[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025d086:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0025d086;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar7 + 0x20))();
  plVar7 = (longlong *)CONCAT71(uStack_57,local_58);
  if ((local_50 != '\0') && (plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)((ulonglong)plVar1 >> 8),plVar7 != (longlong *)0x0);
  if ((plVar7 == (longlong *)0x0) || (param_2 == '\0')) goto LAB_0025d4c9;
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar7 = local_48;
  local_38[0] = local_40[0];
  pcVar4 = local_40;
  if (local_40[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025d13e:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0025d13e;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar7 + 0x20))();
  cVar3 = (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0x50))();
  if ((local_50 != '\0') && ((longlong *)CONCAT71(uStack_57,local_58) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0x10))();
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    plVar1 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar7 = local_48;
    pcVar4 = local_38;
    pcVar9 = local_40;
    if (local_40[0] == '\0') {
      pcVar9 = pcVar4;
    }
    local_38[0] = local_40[0];
    *pcVar9 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar6 = (pthread_key_t)pcVar4;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025d2a1:
      FUN_00d50b00();
    }
    else if (local_38[0] == '\0') goto LAB_0025d2a1;
    (**(code **)(*plVar7 + 0xe20))();
    lVar2 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((lVar2 != 0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xc) != 0) {
        FUN_01266b80();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_01259520();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01266770();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        cVar3 = (**(code **)(*local_48 + 0x450))();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = *(longlong **)(unaff_RDI + 0xc0);
        if (cVar3 == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(plVar1[2] + 0x40))(dVar11,dVar10 - dVar11);
          FUN_00d50b20();
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x388))(dVar11,dVar10 - dVar11);
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    goto LAB_0025d4c9;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar4 = local_40;
  if (local_40[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025d241:
    FUN_00d50b00();
  }
  else {
    plVar7 = local_48;
    if (local_38[0] == '\0') goto LAB_0025d241;
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar7 + 0x20))();
  (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0x48))();
  if ((local_50 != '\0') && ((longlong *)CONCAT71(uStack_57,local_58) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0x10))();
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
LAB_0025d4c9:
  return uVar8 & 0xffffffff;
}


