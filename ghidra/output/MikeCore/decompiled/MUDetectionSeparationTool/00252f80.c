// Function: FUN_00252f80
// Address: 00252f80
// Size: 725 bytes
// Class: MUDetectionSeparationTool


/* WARNING: Removing unreachable block (ram,0x002531e2) */
/* WARNING: Removing unreachable block (ram,0x002531eb) */

ulonglong FUN_00252f80(undefined8 param_1,char param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  char *pcVar7;
  longlong lVar8;
  bool bVar9;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar6 = local_68;
    local_78 = local_60[0];
    pcVar1 = &local_78;
    if (local_60[0] != '\0') {
      pcVar1 = local_60;
    }
    *pcVar1 = '\0';
    if ((local_60[0] != '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      if (*(longlong *)(unaff_RDI + 0x90) != 0) goto LAB_00253000;
    }
    else {
      if (local_78 == '\0') {
LAB_00253000:
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar6 = *(longlong **)(unaff_RDI + 0x90);
      (**(code **)(&UNK_00001550 + *plVar6))();
      plVar5 = local_68;
      pcVar1 = local_38;
      pcVar7 = local_60;
      if (local_60[0] == '\0') {
        pcVar7 = pcVar1;
      }
      local_38[0] = local_60[0];
      *pcVar7 = '\0';
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (longlong *)0x0) {
        plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_00253069:
        FUN_00d50b00();
      }
      else if (local_38[0] == '\0') goto LAB_00253069;
      uVar2 = (**(code **)(*plVar5 + 0x9b0))();
      lVar8 = CONCAT71(uStack_77,local_78);
      if (lVar8 == 0) {
        local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        lVar8 = 0;
      }
      else {
        if (local_70 == '\0') {
          FUN_00d50b00();
          local_3c = 0;
          if ((local_70 == '\0') || (CONCAT71(uStack_77,local_78) == 0)) goto LAB_002530d3;
          FUN_00d50b20();
        }
        else {
          local_70 = '\0';
        }
        local_3c = 0;
      }
LAB_002530d3:
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        bVar9 = *(int *)(lVar8 + 0xc) != 0;
        plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),bVar9);
        if ((bVar9) && (param_2 != '\0')) {
          FUN_002533b0();
          plVar5 = local_68;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0025314d;
            }
          }
          else if (local_68 != (longlong *)0x0) {
LAB_0025314d:
            local_60[0] = '\0';
            local_68 = (longlong *)0x0;
            local_58 = plVar5;
            local_48 = 0;
            local_50 = 0;
            if (0 < *(int *)((longlong)plVar5 + 0xc)) {
              lVar8 = 0;
              do {
                plVar6 = *(longlong **)(plVar5[2] + lVar8 * 8);
                local_68 = plVar6;
                pvVar3 = _pthread_getspecific((pthread_key_t)pcVar1);
                if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                FUN_0054f740();
                lVar8 = lVar8 + 1;
                local_50 = CONCAT44(local_50._4_4_,(int)lVar8);
              } while ((int)lVar8 < *(int *)((longlong)plVar5 + 0xc));
            }
            FUN_00275ca0();
            FUN_00d50b20();
          }
          FUN_01e53c20();
          (**(code **)(*local_68 + 0x620))();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
        }
        if ((char)local_3c == '\0') {
          FUN_00d50b20();
        }
        goto LAB_00253244;
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_00253244:
  return (ulonglong)plVar6 & 0xffffffff;
}


