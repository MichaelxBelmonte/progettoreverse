// Function: FUN_00268ff0
// Address: 00268ff0
// Size: 1716 bytes
// Class: MUAudioFileSource

uint64_t FUN_00268ff0(void* param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  bool bVar10;
  double dVar11;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  double local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t **)(this_ptr + 0xa0) != (int64_t *)0x0) &&
     (cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0xa78))(), cVar2 != '\0')) {
    FUN_01b6d0d0();
    lVar8 = local_48;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_01b6d0d0();
      lVar8 = local_58;
      pvVar3 = _pthread_getspecific(param_1);
      lVar1 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar8 = lVar1, lVar4 != 0)) {
        lVar8 = *(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      if (*(int *)(*(int64_t *)(lVar8 + 0x48) + 0x18) + 7U < 0xf) {
        FUN_00d23310();
        lVar8 = local_48;
        local_68 = local_40[0];
        pcVar7 = &local_68;
        if (local_40[0] != '\0') {
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
        bVar10 = lVar8 == 0;
        if ((local_40[0] != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = false;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x958))();
        lVar8 = local_48;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x958))();
          FUN_01a8c310();
          lVar1 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          uVar9 = CONCAT71((int7)((uint64_t)lVar8 >> 8),lVar1 != 0);
          if ((lVar1 != 0) && (param_2 != '\0')) {
            FUN_00b5dfe0();
            local_90 = 0;
            local_98 = CONCAT71(uStack_67,local_68);
            if (local_60 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_90 = '\x01';
            FUN_001220c0();
            local_a8 = local_58;
            local_a0 = 0;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_a0 = '\x01';
            FUN_00b5dfe0();
            local_88 = local_c0;
            local_80 = 0;
            if (local_b8 == '\0') {
              if (local_c0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b8 = '\0';
            }
            local_80 = '\x01';
            local_e8 = '\0';
            local_f0 = 0;
            plVar6 = &local_88;
            FUN_01f53880(plVar6,&local_a8,&local_f0);
            lVar8 = local_48;
            pVar5 = (void*)plVar6;
            if (local_40[0] == '\0') {
              if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
            if (lVar8 == 0) {
              uVar9 = 0;
            }
            else {
              FUN_01b6d0d0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              pcVar7 = &local_68;
              FUN_012527b0(pcVar7,0,0,0);
              lVar4 = local_48;
              pVar5 = (void*)CONCAT71((int7)((uint64_t)pcVar7 >> 8),local_40[0]);
              pcVar7 = local_38;
              if (local_40[0] != '\0') {
                pcVar7 = local_40;
              }
              local_38[0] = local_40[0];
              *pcVar7 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (lVar4 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              FUN_00e7bcc0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_b0 = (double)FUN_016c98e0();
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar11 = (double)FUN_016c98e0();
              dVar11 = dVar11 - local_b0;
              local_b0 = (double)FUN_00e7b500();
              local_e0 = lVar1;
              local_d8 = '\0';
              FUN_01a71bc0();
              lVar4 = local_48;
              local_70 = 0;
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_70 = '\x01';
              local_78 = lVar4;
              local_d0 = lVar8;
              local_c8 = '\0';
              FUN_001256c0(local_b0,dVar11);
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
              uVar9 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
              FUN_00d50b20();
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00269205;
        }
      }
    }
  }
  uVar9 = 0;
LAB_00269205:
  return uVar9 & 0xffffffff;
}

