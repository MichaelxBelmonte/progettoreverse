// Function: FUN_0025de70
// Address: 0025de70
// Size: 1367 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x0025df62) */
/* WARNING: Removing unreachable block (ram,0x0025df6e) */
/* WARNING: Removing unreachable block (ram,0x0025e2db) */
/* WARNING: Removing unreachable block (ram,0x0025e2eb) */
/* WARNING: Removing unreachable block (ram,0x0025dfa2) */
/* WARNING: Removing unreachable block (ram,0x0025dfaf) */

ulonglong FUN_0025de70(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  longlong unaff_RDI;
  int iVar10;
  longlong *local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar6 = local_58;
  local_68 = local_50[0];
  pcVar3 = local_50;
  if (local_50[0] == '\0') {
    pcVar3 = &local_68;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025dee6:
    FUN_00d50b00();
  }
  else if (local_68 == '\0') goto LAB_0025dee6;
  (**(code **)(*plVar6 + 0xe10))();
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 == (longlong *)0x0) {
    uVar7 = 0;
    goto LAB_0025e3ca;
  }
  if (*(int *)((longlong)local_78 + 0xc) == 0) {
    uVar7 = 0;
  }
  else {
    FUN_004fb290();
    if (local_70 == '\0') {
      if (local_78 == (longlong *)0x0) goto LAB_0025e0cd;
      FUN_00d50b00();
LAB_0025dfd8:
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = local_78;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar4 = (longlong)(int)local_40;
        iVar10 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar10);
        iVar9 = *(int *)((longlong)local_48 + 0xc);
        if (iVar9 <= iVar10) break;
        plVar6 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
        local_58 = plVar6;
        pvVar5 = _pthread_getspecific((pthread_key_t)local_48[2]);
        plVar1 = local_58;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar6 = plVar1, lVar4 != 0)) {
          plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        iVar2 = FUN_01326de0();
        if (iVar2 != 1) break;
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar9 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar9 = 0;
          }
          local_40 = CONCAT44(iVar9,(int)local_40);
        }
      }
      FUN_00115190();
      uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),iVar9 <= iVar10);
      FUN_00d50b20();
      if (iVar9 <= iVar10) goto LAB_0025e0d7;
    }
    else {
      local_70 = '\0';
      if (local_78 != (longlong *)0x0) goto LAB_0025dfd8;
LAB_0025e0cd:
      uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
LAB_0025e0d7:
      if (param_2 != '\0') {
        FUN_0025d790();
        plVar1 = local_58;
        if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00c9fe20();
        plVar6 = local_58;
        local_68 = local_50[0];
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = &local_68;
        }
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == '\0') {
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_0025e173;
          }
        }
        else if (plVar6 != (longlong *)0x0) {
LAB_0025e173:
          local_50[0] = '\0';
          local_58 = (longlong *)0x0;
          local_48 = plVar6;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar9 = -local_40._4_4_;
              }
              else {
                iVar9 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar9);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar9 = 0;
              }
              local_40 = CONCAT44(iVar9,(int)local_40);
            }
            lVar4 = (longlong)(int)local_40;
            iVar9 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar9);
            if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
            local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)local_48[2]);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0025dd10();
            lVar4 = CONCAT71(uStack_67,local_68);
            if (local_60 == '\0') {
              if (lVar4 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            FUN_01369cd0();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00115190();
          FUN_00d50b20();
        }
        plVar6 = *(longlong **)(unaff_RDI + 0x90);
        (**(code **)(&UNK_00001550 + *plVar6))();
        plVar8 = local_58;
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = &local_68;
        }
        local_68 = local_50[0];
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025e378:
          FUN_00d50b00();
        }
        else if (local_68 == '\0') goto LAB_0025e378;
        (**(code **)(*plVar8 + 0xda0))();
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        uVar7 = uVar7 & 0xffffffff;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_0025e3ca:
  return uVar7 & 0xffffffff;
}


