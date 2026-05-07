// Function: FUN_00265730
// Address: 00265730
// Size: 1194 bytes
// Class: MDEditorViewController


ulonglong FUN_00265730(undefined8 param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  longlong *plVar10;
  longlong local_98;
  char local_90;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  if (*(int *)(unaff_RDI + 0x198) != 2) {
    plVar8 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar8))();
    plVar10 = local_60;
    local_38[0] = local_58[0];
    pcVar2 = local_38;
    if (local_58[0] != '\0') {
      pcVar2 = local_58;
    }
    *pcVar2 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
      plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_002657b2:
      FUN_00d50b00();
    }
    else if (local_38[0] == '\0') goto LAB_002657b2;
    (**(code **)(*plVar10 + 0xe30))();
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    FUN_012e74e0();
    lVar5 = CONCAT71(uStack_6f,local_70);
    if (local_68 == '\0') {
      if (((lVar5 != 0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      uVar9 = 0;
      if (*(int *)(lVar5 + 0xc) != 0) {
        local_58[0] = '\0';
        local_60 = (longlong *)0x0;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = lVar5;
        while( true ) {
          lVar3 = (longlong)(int)local_48;
          iVar7 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar7);
          if (*(int *)(local_50 + 0xc) <= iVar7) break;
          local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_012f9bb0();
          if (cVar1 == '\0') {
            FUN_000be170();
            uVar9 = 0;
            goto LAB_00265bd4;
          }
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar7 = -local_48._4_4_;
            }
            else {
              local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar7 = 0;
            }
            local_48 = CONCAT44(iVar7,(int)local_48);
          }
        }
        FUN_000be170();
        pVar6 = (pthread_key_t)local_50;
        FUN_00d23310();
        plVar8 = local_60;
        pcVar2 = local_58;
        if (local_58[0] == '\0') {
          pcVar2 = &local_70;
        }
        local_70 = local_58[0];
        *pcVar2 = '\0';
        if ((local_58[0] != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f9c10();
        if ((local_70 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (param_2 != '\0') {
          FUN_01caeae0();
          plVar8 = local_60;
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_01caeae0();
            FUN_01d654a0();
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_58[0] = '\0';
          local_60 = (longlong *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_50 = lVar5;
          while( true ) {
            lVar5 = (longlong)(int)local_48;
            iVar7 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar7);
            if (*(int *)(local_50 + 0xc) <= iVar7) break;
            plVar8 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar5 * 8);
            local_60 = plVar8;
            pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
            plVar10 = local_60;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar8 = plVar10, lVar5 != 0)) {
              plVar8 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            FUN_012f9c20();
            if (local_48._4_4_ != 0) {
              if (local_48 < 0) {
                iVar7 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar7 = 0;
              }
              local_48 = CONCAT44(iVar7,(int)local_48);
            }
          }
          FUN_000be170();
        }
        FUN_01caeae0();
        plVar10 = local_60;
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
        if (plVar10 != (longlong *)0x0) {
          FUN_01caeae0();
          FUN_01caeae0();
          FUN_01d654a0();
          FUN_01d66ab0();
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00265bd4:
      FUN_00d50b20();
      goto LAB_00265bdc;
    }
  }
  uVar9 = 0;
LAB_00265bdc:
  return uVar9 & 0xffffffff;
}


