// Function: FUN_01f25af0
// Address: 01f25af0
// Size: 2703 bytes
// Class: Unknown

void FUN_01f25af0(void)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  uint64_t uVar10;
  int64_t local_190;
  char local_188;
  short local_50;
  undefined6 uStack_4e;
  char local_48;
  uint16_t local_3a;
  uint64_t local_38;
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  lVar6 = FUN_01f259a0();
  if (lVar6 == 0) {
    (*PTR__objc_release_024a99a0)();
    return;
  }
  local_3a = 0;
  uVar7 = FUN_01d654b0();
  lVar6 = CONCAT62(uStack_4e,local_50);
  if (lVar6 == 0) {
    local_38 = 0;
LAB_01f25e87:
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_release_024a99a0)();
  }
  else {
    if (((local_48 == '\0') && (uVar7 = FUN_00d50b00(), local_48 != '\0')) &&
       (CONCAT62(uStack_4e,local_50) != 0)) {
      uVar7 = FUN_00d50b20();
    }
    local_38 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    uVar7 = FUN_00d8c7a0();
    uVar9 = (undefined7)((uint64_t)uVar7 >> 8);
    if ((int)uVar7 == 0) {
      local_38 = CONCAT71(uVar9,1);
      goto LAB_01f25e87;
    }
    local_38 = CONCAT71(uVar9,1);
    FUN_00d8c7a0();
    cVar2 = FUN_00d8ca70();
    lVar1 = g_027ff398;
    if (g_027ff398 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027ff3a0;
    if (g_027ff3a0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027ff3a8;
    uVar8 = ((uint64_t)uVar4 & 0xff) << 0x14;
    uVar10 = uVar8 | 0x20000;
    if (cVar3 == '\0') {
      uVar10 = uVar8;
    }
    if (g_027ff3a8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027ef810;
    uVar8 = uVar10 | 0x80000;
    if (cVar3 == '\0') {
      uVar8 = uVar10;
    }
    if (g_027ef810 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027efe38;
    uVar10 = uVar8 | 0x40000;
    if (cVar3 == '\0') {
      uVar10 = uVar8;
    }
    if (g_027efe38 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027efe38;
    if (cVar3 != '\0') {
      if (g_027efe38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      cVar2 = FUN_00d8ca70();
      uVar10 = uVar10 | 0x200000;
    }
    lVar1 = g_027efe60;
    if (g_027efe60 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027efe68;
    if (cVar3 == '\0') {
      if (g_027efe68 != 0) {
        FUN_00d50b00();
      }
      cVar3 = FUN_00d90eb0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027efe40;
      if (cVar3 == '\0') {
        if (g_027efe40 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d90eb0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_026de770;
        if (cVar3 == '\0') {
          if (g_026de770 != 0) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d90eb0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = g_026de788;
          if (cVar3 == '\0') {
            if (g_026de788 != 0) {
              FUN_00d50b00();
            }
            cVar3 = FUN_00d90eb0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar1 = g_027efe50;
            if (cVar3 == '\0') {
              if (g_027efe50 != 0) {
                FUN_00d50b00();
              }
              cVar3 = FUN_00d90eb0();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              lVar1 = g_027ff3b0;
              if (cVar3 == '\0') {
                if (g_027ff3b0 != 0) {
                  FUN_00d50b00();
                }
                iVar5 = FUN_00d90910();
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
                if (iVar5 == -1) {
LAB_01f2626e:
                  lVar1 = g_027efe70;
                  if (g_027efe70 != 0) {
                    FUN_00d50b00();
                  }
                  cVar3 = FUN_00d90eb0();
                  if (lVar1 != 0) {
                    FUN_00d50b20();
                  }
                  lVar1 = g_027efe80;
                  if (cVar3 == '\0') {
                    if (g_027efe80 != 0) {
                      FUN_00d50b00();
                    }
                    cVar3 = FUN_00d90eb0();
                    if (lVar1 != 0) {
                      FUN_00d50b20();
                    }
                    lVar1 = g_027efe90;
                    if (cVar3 == '\0') {
                      if (g_027efe90 != 0) {
                        FUN_00d50b00();
                      }
                      cVar3 = FUN_00d90eb0();
                      if (lVar1 != 0) {
                        FUN_00d50b20();
                      }
                      lVar1 = g_026dea30;
                      if (cVar3 == '\0') {
                        if (g_026dea30 != 0) {
                          FUN_00d50b00();
                        }
                        cVar3 = FUN_00d90eb0();
                        if (lVar1 != 0) {
                          FUN_00d50b20();
                        }
                        if (cVar3 == '\0') {
                          if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                            cVar2 = cVar2 + ' ';
                          }
                          else if ((0x19 < (byte)(cVar2 + 0x9fU)) && (0x1f < (byte)(cVar2 - 0x21U)))
                          {
                            cVar2 = cVar2 + -0x5b;
                          }
                          FUN_00d934d0(cVar2);
                          lVar1 = CONCAT62(uStack_4e,local_50);
                          if (local_48 == '\0') {
                            if (lVar1 != 0) {
                              FUN_00d50b00();
                            }
                          }
                          else {
                            local_48 = '\0';
                          }
                          FUN_00e1cfc0();
                          (*PTR__objc_msgSend_024a9998)();
                          if (lVar1 != 0) {
                            FUN_00d50b20();
                          }
                          if ((local_48 != '\0') && (CONCAT62(uStack_4e,local_50) != 0)) {
                            FUN_00d50b20();
                          }
                          (*PTR__objc_msgSend_024a9998)();
                          uVar7 = (*PTR__objc_release_024a99a0)();
                        }
                        else {
                          (*PTR__objc_msgSend_024a9998)();
                          (*PTR__objc_msgSend_024a9998)();
                          uVar7 = (*PTR__objc_release_024a99a0)();
                        }
                      }
                      else {
                        (*PTR__objc_msgSend_024a9998)();
                        (*PTR__objc_msgSend_024a9998)();
                        uVar7 = (*PTR__objc_release_024a99a0)();
                      }
                    }
                    else {
                      (*PTR__objc_msgSend_024a9998)();
                      (*PTR__objc_msgSend_024a9998)();
                      uVar7 = (*PTR__objc_release_024a99a0)();
                    }
                  }
                  else {
                    (*PTR__objc_msgSend_024a9998)();
                    (*PTR__objc_msgSend_024a9998)();
                    uVar7 = (*PTR__objc_release_024a99a0)();
                  }
                }
                else {
                  FUN_00d8e3d0();
                  FUN_00d8f140();
                  iVar5 = FUN_00d8d560();
                  if ((local_48 != '\0') && (CONCAT62(uStack_4e,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_188 != '\0') && (local_190 != 0)) {
                    FUN_00d50b20();
                  }
                  if (0x22 < iVar5 - 1U) goto LAB_01f2626e;
                  local_50 = (short)iVar5 + -0x8fd;
                  (*PTR__objc_msgSend_024a9998)(1,&local_50);
                  (*PTR__objc_msgSend_024a9998)();
                  (*PTR__objc_msgSend_024a9998)();
                  uVar7 = (*PTR__objc_release_024a99a0)();
                }
                local_38 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                goto LAB_01f25ebf;
              }
              local_3a = 0xf701;
            }
            else {
              local_3a = 0xf700;
            }
          }
          else {
            local_3a = 0xf703;
          }
        }
        else {
          local_3a = 0xf702;
        }
      }
      else {
        local_3a = 0xf72b;
      }
    }
    else {
      local_3a = 0xf729;
    }
    if (uVar10 == 0) {
      (*PTR__objc_msgSend_024a9998)();
      uVar7 = (*PTR__objc_msgSend_024a9998)();
      local_38 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      (*PTR__objc_release_024a99a0)();
    }
    else {
      (*PTR__objc_msgSend_024a9998)(1,&local_3a);
      (*PTR__objc_msgSend_024a9998)();
      uVar7 = (*PTR__objc_msgSend_024a9998)();
      local_38 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      (*PTR__objc_release_024a99a0)();
    }
  }
  if ((char)local_38 == '\0') {
    return;
  }
LAB_01f25ebf:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}

